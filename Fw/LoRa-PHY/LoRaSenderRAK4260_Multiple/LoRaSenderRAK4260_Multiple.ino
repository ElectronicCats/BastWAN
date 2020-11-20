#include <SPI.h>
#include <LoRa.h>

uint8_t key_1[3]={0xFF,0xAA,0xBB};
uint8_t key_2[3]={0xAB,0xCD,0xEF};

void setup() {
  Serial.begin(9600);
  //while (!Serial);
  
  Serial.println("LoRa Sender");
  pinMode(RFM_TCX_ON,OUTPUT);
  pinMode(RFM_SWITCH,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
  digitalWrite(RFM_SWITCH,0);
  pinMode(9,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
  
  LoRa.setPins(SS,RFM_RST,RFM_DIO0);
  if (!LoRa.begin(915E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
}

void loop() {
  if(digitalRead(9)==LOW){
    Serial.println("Turn on LED");
    digitalWrite(LED_BUILTIN,1);
    // send packet
    LoRa.beginPacket();
    for(int i=0;i<sizeof(key_1);i++){
      LoRa.write(key_1[i]);
      }
    LoRa.endPacket();
  
    delay(500);
    digitalWrite(LED_BUILTIN,0);
    delay(500);
  }
  if(digitalRead(6)==LOW){
  Serial.println("Turn on LED");
  digitalWrite(LED_BUILTIN,1);
  // send packet
  LoRa.beginPacket();
  for(int i=0;i<sizeof(key_2);i++){
    LoRa.write(key_2[i]);
    }
  LoRa.endPacket();

  delay(500);
  digitalWrite(LED_BUILTIN,0);
  delay(500);
  }
}
