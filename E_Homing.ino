void Homing ()
{  
  Serial.println("Homing");
  penUp(); 
  while(xlimit)
  {
    xlimit = digitalRead(xlimitpin);
    moveX(-1);
  }
  while(ylimit)
  {
    ylimit = digitalRead(ylimitpin);
    moveY(-1);
  }
  
felga = 1;
kayo = 0;
Xpos = 0;
Ypos = 0;
xlimit = 1;
ylimit = 1;
}



  
