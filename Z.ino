void penUp()           
{
  stepperz.step(SPR/5);
}

void penDown()
{
  
  while(zlimit)                  // Motor rotates until it touches the limit switch
  {
    zlimit = digitalRead(zlimitpin);
    stepperz.step(-1);
  }
  zlimit = 1;
}
