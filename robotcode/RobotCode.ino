#include "disSensor.h"
#include "lineSensor.h"
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:

/*
distanceSensor backLeft(2),frontLeft(3),backRight(4),frontRight(5);


  

Serial.print("\nBack left:");Serial.print(backLeft.distance());
Serial.print("\nFront left:");Serial.print(frontLeft.distance());
Serial.print("\nBack right:");Serial.print(backRight.distance());
Serial.print("\nFront right:");Serial.print(frontRight.distance());*/

lineSensor left(45),right(44);
Serial.print("\nleft bright?:");Serial.print(left.isBright());
Serial.print("\nright bright?:");Serial.print(right.isBright());
delay(1000);
}
