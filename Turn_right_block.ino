#include <Servo.h>
#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  servo_7.attach(7);

     if (30 <= 100 && 30 >= 0 && 2 > 0){

       servo_7.writeMicroseconds(1528 + 30 * 2);
       delay(2 * 1000);
       servo_7.write(95);

     }

}

void _loop() {
}

void loop() {
  _loop();
}
