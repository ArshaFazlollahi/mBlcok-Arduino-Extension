#include <Arduino.h>
#include <Servo.h>
#include <Wire.h>
#include <SoftwareSerial.h>

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  servo_7.attach(7);
    servo_5.attach(5);

     if (40 <= 100 && 40 >= 0 && 1 > 0){

       servo_7.writeMicroseconds(1488 - 40 * 2);
       servo_5.writeMicroseconds(1528.5 + 40 * 2);
       delay(1 * 1000);
       servo_7.write(95);
       servo_5.write(95);

     }

}

void _loop() {
}

void loop() {
  _loop();
}
