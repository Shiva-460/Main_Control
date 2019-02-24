#ifndef lineSensor_h
#define lineSensor_h
class lineSensor
{
  public:
  int inputLine;
 lineSensor(int digitalPin)
 {
  inputLine=digitalPin;
 }
 uint32_t value()
 {
  
  pinMode(inputLine,OUTPUT);
  digitalWrite(inputLine,HIGH);
  delayMicroseconds(100);
  auto beginT = micros();
  pinMode(inputLine,INPUT);
  while(digitalRead(inputLine)==HIGH&&((micros()-beginT)<1000));
  return micros()-beginT;
  
  
  
 }
  boolean isBright()
  {
    //Calibrate for a white line, If it's longer a predetermined setting then we cut and return false
    return value()<120;
  }
  boolean isDark()
  {
    return !isBright();
  }
  
};
#endif
