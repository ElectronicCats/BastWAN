#include <SPI.h>
#include <LoRa.h>

int counter = 0;

void setup() {
  Serial.begin(9600);
  //while (!Serial);

  Serial.println("LoRa Sender");
  pinMode(RFM_TCX_ON,OUTPUT);
  pinMode(RFM_SWITCH,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
  LoRa.setPins(SS,RFM_RST,RFM_DIO0);
  if (!LoRa.begin(915E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
}

void loop() {
  Serial.print("Sending packet: ");
  Serial.println(counter);
  digitalWrite(LED_BUILTIN,1);
  // send packet
  LoRa.beginPacket();
  digitalWrite(RFM_SWITCH,0);
  LoRa.print("hello ");
  LoRa.print(counter);
  LoRa.endPacket();

  counter++;
  delay(500);
  digitalWrite(LED_BUILTIN,0);
  delay(500);
}
