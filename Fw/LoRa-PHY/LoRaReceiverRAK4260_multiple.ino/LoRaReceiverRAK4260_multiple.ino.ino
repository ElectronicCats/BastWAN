#include <SPI.h>
#include <LoRa.h>

uint8_t key_1[3]={0xFF,0xAA,0xBB};

uint8_t rxBuffer[3]={0,0,0};
bool identifier=true;

void setup() {
  Serial.begin(9600);
  while (!Serial);
  pinMode(RFM_TCX_ON,OUTPUT);
  pinMode(RFM_SWITCH,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
  // RF switch 1 to Rx
  digitalWrite(RFM_SWITCH,1);  
  Serial.println("LoRa Receiver");
  LoRa.setPins(SS, RFM_RST, RFM_DIO0);
  if (!LoRa.begin(915E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
}

void loop() {
  // try to parse packet
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    // received a packet
    identifier=true;
    Serial.print("Received packet '");
    // read packet
    for(int i=0;i<packetSize;i++){
        rxBuffer[i]=LoRa.read();
        Serial.print(String(rxBuffer[i],HEX));
        if(rxBuffer[i]!=key_1[i]) identifier=false; //Check if every part of the key is ok
      }
     
    if(identifier)digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    
    // print RSSI of packet
    Serial.print("' with RSSI ");
    Serial.println(LoRa.packetRssi());
  }
}
