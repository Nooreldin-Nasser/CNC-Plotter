void moveAlong(long stepx, long stepy)                      // Move motor X and Y together 
{
  double ratio = 1.00;
  double dirx;
  double diry;
  stepperx.setSpeed(rpm);
  steppery.setSpeed(rpm);
 
  if (stepx > 0) {dirx = 1;}                               // check direction of both X and Y
  else {dirx = -1;}

  if (stepy > 0) {diry = 1;}
  else {diry = -1;}

   if (dirx * stepx > stepy * diry || dirx * stepx == diry * stepy)                            // For higher steps for X
   {
    ratio = ((dirx * stepx) / (diry * stepy));                                                 // Ratio to adjust the speed of each motor
   // stepperx.setSpeed(rpm * ratio);
    //steppery.setSpeed(rpm);

    for(long i = 0; i < diry * stepy; i += 10)
    {  
      long xx = 10 * ratio * dirx;
      long yy = 10 * diry;
      moveX(xx);
      moveY(yy);
    }
   }
   
   if (dirx * stepx < stepy * diry)                                                          // For higher steps for X
   {
    ratio = ((diry * stepy) / (dirx * stepx));                                               // Ratio to adjust the speed of each motor
    //stepperx.setSpeed(rpm);
    //steppery.setSpeed(rpm * ratio);
    for(long i = 0; i < dirx * stepx; i += 10)
    {
      long xx = 10 * dirx;
      long yy = 10 * ratio * diry;
      moveX(xx);
      moveY(yy);
    }
   }
  stepperx.setSpeed(rpm);
  steppery.setSpeed(rpm);
}
