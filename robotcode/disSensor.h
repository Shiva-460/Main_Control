#ifndef disSensor_H
#define disSensor_H
class distanceSensor
{
  public:
    int inputLine;
  distanceSensor(int Analogpin)
  {
    inputLine = Analogpin;
  }
  boolean tooClose()
  {
    //find what distance is too close for quickly changing direction
  }
  uint16_t distance()
  {
    //return a number between 0 and 100 to indicate how far away an object is from the sensor.
    
    uint16_t result = analogRead(inputLine);
    
    result+=analogRead(inputLine);
    result+=analogRead(inputLine);
    result+=analogRead(inputLine);
    result+=analogRead(inputLine);
    result+=analogRead(inputLine);
    result=result>>6;
    return result;
  }
  
  
};
 #endif