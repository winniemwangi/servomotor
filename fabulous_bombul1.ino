// C++ code
//
#include <Servo.h>
Servo myservo;
int val;

void setup()
{
  myservo.attach(9);
}


void loop()
{
  val = analogRead(1);
  val = map(val,180,1023,0, 100);
  myservo.write(val);
  delay(200);
}