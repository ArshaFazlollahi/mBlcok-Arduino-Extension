#include <Servo.h>
#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

Servo servo_5;
Servo servo_7;
Servo servo_3;

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {

}

void _loop() {
}

void loop() {
  _loop();
}
