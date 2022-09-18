#include <Servo.h>
#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  servo_5.attach(5);

     if (30<= 100 && 30>= 0 && 2 > 0){

       servo_5.writeMicroseconds(1488 - 30 * 2);
       delay(2 * 1000);
       servo_5.write(95);

     }

}

void _loop() {
}

void loop() {
  _loop();
}
