#include <Arduino.h>

int pin = 8;
char temp;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available()>0)
  {
    int received = Serial.parseInt();
    while(Serial.available()>0){
      temp = Serial.read();
    }
    analogWrite(pin,received);
    String sm = "Received input: " + String(received);
    Serial.println(sm);

  }
  
}