#include <Arduino.h>
int pin = A0;
int val = 0;
unsigned int val2 = 0;
unsigned int counter = 0;

void setup() {
  Serial.begin(9600);
  pinMode(44,OUTPUT);
}

void loop() {
  if(Serial.available() > 0)
  {
    float sum = 0;
    int h = 5;
    float avg = 0;
    val2 = Serial.parseInt();
    analogWrite(44,counter);
    delay(500);
    for (int i = 0; i < h; i++)
    {
      val = analogRead(pin);
      if (val != 0.0)
      {
        sum += val;
      }
    }
    avg = sum/5.0;
    Serial.print(avg);
    counter+=1;
  }
}