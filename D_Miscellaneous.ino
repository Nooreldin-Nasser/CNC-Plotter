void skye(char curr, char next)            // Check at the end of the line if the current word 
{                                          // needs to be completed in the next line
  if(curr != ' ' && next != ' ')
  {
    dash();
    enter();
  }
  else {enter();}
}


void enter()
{
  moveX(-1.5 * (kayo+1) * SPR * scale * wico);
  moveY((-1 * SPR * scale) - SPR);
}


void departure()                                // Goes to the start position to start writing for scale 2
{
  double GonX = (1.25 * SPR * scale) + SPR ;
  double GonY = ((33.5 * SPR) - (SPR * scale));
  double GON_X = GonX - Xpos;
  double GON_Y = GonY - Ypos;
  moveX(GonX);
  moveY(GonY);
  felga = 0;
  Serial.println("departured");
}


void initiate()                               // Goes to the start position to start writing for scale 4, 6 and 8
{
 double WalyX = ((26.25 * SPR) - ((zeft * SPR * scale * wico) + (0.5 * (zeft - 1) * SPR * scale * wico)))/2 ;
 double WalyY =  ((18.625 * SPR) - (0.5 * SPR * scale)) + 2 * SPR ;
 double WALY_X = WalyX - Xpos;
 double WALY_Y = WalyY - Ypos;
 moveX(WalyX);
 moveY(WalyY);
 felga = 0;
 Serial.println("initiated");
}


void moveX(long stepsx)                         // Move motor X
{
  if (stepsx > 0)
  {
    for (long i=0; i < stepsx; i++)
  {
    stepperx.step(1);
  }
  }
  else if (stepsx < 0)
  {
    for (long i=0; i > stepsx; i--)
    {
      stepperx.step(-1);
    }
  }
  Xpos = Xpos + stepsx;
}


void moveY(long stepsy)                       // Move motor Y
{
  if (stepsy > 0)
  {
    for (long i=0; i < stepsy; i++)
  {
    steppery.step(1);
  }
  }
  else if (stepsy < 0)
  {
    for (long i=0; i > stepsy; i--)
    {
      steppery.step(-1);
    }
  }
  Ypos = Ypos + stepsy;
}
