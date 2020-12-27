/**
 * Example of ABP device sensores Cayenne LPP
 * Authors: 
 *        Eduardo Contreras
 *  June 2019
 * 
 * This code is beerware; if you see me (or any other collaborator 
 * member) at the local, and you've found our code helpful, 
 * please buy us a round!
 * Distributed as-is; no warranty is given.
 */
#include <lorawan.h>
#include<CayenneLPP.h>

CayenneLPP lpp(51);

//ABP Credentials 
const char *devAddr = "26021F8D";
const char *nwkSKey = "FF09A493C8F727378B1AE9BD2E4E8DEB";
const char *appSKey = "4D80957CE75329C25F2F93E8F54DC663";

const unsigned long interval = 10000;    // 10 s interval to send message
unsigned long previousMillis = 0;  // will store last time message sent
unsigned int counter = 0;     // message counter

char myStr[50];
char outStr[255];
byte recvStatus = 0;

const sRFM_pins RFM_pins = {
  .CS = SS,
  .RST = RFM_RST,
  .DIO0 = RFM_DIO0,
  .DIO1 = RFM_DIO1,
  .DIO2 = RFM_DIO2,
  .DIO5 = RFM_DIO5,
};

void setup() {
  // Setup loraid access
  Serial.begin(115200);
  delay(2000);
  if(!lora.init()){
    Serial.println("RFM95 not detected");
    delay(5000);
    return;
  }
  pinMode(RFM_TCX_ON,OUTPUT);
  pinMode(RFM_SWITCH,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);

  // Set LoRaWAN Class change CLASS_A or CLASS_C
  lora.setDeviceClass(CLASS_A);

  // Set Data Rate
  lora.setDataRate(SF8BW125);

  // set channel to random
  lora.setChannel(MULTI);
  
  // Put ABP Key and DevAddress here
  lora.setNwkSKey(nwkSKey);
  lora.setAppSKey(appSKey);
  lora.setDevAddr(devAddr);
}

void loop() {
  // Check interval overflow
  if(millis() - previousMillis > interval) {
    previousMillis = millis(); 

    Serial.print("Sending: ");
    printVariables();

    lora.sendUplink((char *)lpp.getBuffer(), lpp.getSize(), 0, 1);
  }

  recvStatus = lora.readData(outStr);
  if(recvStatus) {
    Serial.println("Recived: ");
    Serial.println(outStr);
  }
  
  // Check Lora RX
  lora.update();
}

void printVariables()
{
  lpp.reset();

  int humidity = random(0,300);
  Serial.print(F("humidity="));
  Serial.print(humidity, 1);
  lpp.addRelativeHumidity(3, humidity);

  int temp = random(0,200);
  Serial.print(F(",tempf="));
  Serial.print(temp, 1);
  lpp.addTemperature(4, temp);

  int pressure = random(0,2000);
  Serial.print(F(",pressure="));
  Serial.print((pressure/100.0), 2);
  lpp.addBarometricPressure(7,(pressure/100.0));

  int batt_lvl = random(0,3.3);
  Serial.print(F(",batt_lvl="));
  Serial.print(batt_lvl, 2);
  lpp.addAnalogInput(8, batt_lvl);
  Serial.println();
}
