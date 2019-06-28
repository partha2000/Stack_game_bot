#include <Servo.h>
Servo servo1;
void setup()
{
  pinMode(4,OUTPUT);
  servo1.attach(9);
  servo1.write(125);
  delay(5000);
  servo1.write(90);
  delay(200);
  servo1.write(125);
  delay(750);
  digitalWrite(4,HIGH);
}
void loop()
{
  servo1.write(90);
  delay(80);
  servo1.write(125);
  delay(660);
}
