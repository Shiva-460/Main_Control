class lineSensor
{
  public:
  int inputLine;
 lineSensor(int inputLine)
 {
  
 }
  boolean isBright()
  {
    //Calibrate for a white line, If it's longer a predetermined setting then we cut and return false
    
  }
  boolean isDark()
  {
    return !isBright();
  }
  
}
