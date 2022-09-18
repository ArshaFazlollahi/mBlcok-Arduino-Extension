#include <Servo.h>
#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  servo_3.attach(3);
    servo_3.write(50 + 20);

}

void _loop() {
}

void loop() {
  _loop();
}
