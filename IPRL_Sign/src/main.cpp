#include <Arduino.h>
int prevLED=12;
int LED = 12;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  for (int i=0; i<11; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  while(LED==prevLED){
    LED = random(11);
  }
  Serial.println(LED);
  digitalWrite(LED, HIGH);
  delay(random(200,500));
  digitalWrite(LED, LOW);
  prevLED = LED;
}
