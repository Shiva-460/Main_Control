#include "disSensor.h"
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:


distanceSensor backLeft(2),frontLeft(3),backRight(4),frontRight(5);


  

Serial.print("\nBack left:");Serial.print(backLeft.distance());
Serial.print("\nFront left:");Serial.print(frontLeft.distance());
Serial.print("\nBack right:");Serial.print(backRight.distance());
Serial.print("\nFront right:");Serial.print(frontRight.distance());
delay(1000);
}
