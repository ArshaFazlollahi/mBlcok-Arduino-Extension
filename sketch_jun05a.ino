#include <Servo.h>
#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

Servo servo_7;

float readAngle(int pin)
{

  pinMode(pin, INPUT);
  float tHigh = pulseIn(pin, HIGH);
  float tCycle = tHigh + pulseIn(pin, LOW);
  float duty = 100 * (tHigh / tCycle);

  float angle1 = (duty - 2.9) * 360;
  float angle2 = 97.1 - 2.9 + 1;
  float angle3 = angle1 / angle2;

  return angle3;
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo_7.attach(7);

  delay(1000);
  
  forward(1.5);
}

void forward(float rotations)
{
  float start = readAngle(6);
  float target = (int)(rotations * 360 + start) % 360;

  bool set = 0;
  int ticks = 0;
  int tickTarget = floor(rotations);

  if (target < start) tickTarget++;
  float currentAngle = start;

//Serial.println(start);  
//Serial.println(target);  

  servo_7.write(125);
  
  while((currentAngle < target - 2) || (currentAngle > target + 2 )|| ticks < tickTarget)
  {
     currentAngle = readAngle(6);
     Serial.println(currentAngle);  

     if(currentAngle>350)
     {
        set = 1;
     }
     if(set == 1 && currentAngle<10)
     {
        set = 0;
        ticks++;
     }
  }
   servo_7.write(95);
  
}

void loop() {
  // put your main code here, to run repeatedly:
// float angle = readAngle(6);
  //Serial.println(angle);
  //servo_7.write(125);

}
