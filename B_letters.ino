// Functions for each letter

void letter_A()
{
  penDown();
  moveY(SPR * scale);
  moveX(SPR * scale * wico);
  moveY(-1 * SPR * scale);
  penUp();
  moveY(0.6 * SPR * scale);
  penDown();
  moveX(-1 * wico * SPR * scale);
  penUp();
  moveAlong( 1.5 * wico * SPR * scale, -0.6 * SPR * scale);
    
}


void letter_B()
{
  penDown();
  moveY(SPR * scale);
  moveX(0.8 * SPR * scale * wico);
  moveY(-0.4 * SPR * scale);
  moveX(-0.8 * SPR * scale * wico);
  penUp();
  moveX(0.8 * SPR * scale * wico);
  penDown();
  moveX(0.2 * SPR * scale * wico);
  moveY(-0.6 * SPR * scale);
  moveX(-1 * SPR * scale * wico);
  penUp();
  moveX(1.5 * SPR * scale * wico);
}


void letter_C()
{
  moveAlong( wico * SPR * scale, SPR * scale);
  penDown();
  moveX(-1 * SPR * scale * wico);
  moveY(-1 * SPR * scale);
  moveX(SPR * scale * wico);
  penUp();
  moveX(0.5 * SPR * scale * wico);
  delay(100);
  
}


void letter_D()
{
  penDown();
  moveY(SPR * scale);
  moveX(0.75 * SPR * scale * wico);
  moveAlong( 0.25 * wico * SPR * scale, -0.15 * SPR * scale);
  moveY(-0.7 * SPR * scale);
  moveAlong(-0.25 * wico * SPR * scale, -0.15 * SPR * scale);
  moveX(-0.75 * SPR * scale * wico);
  penUp();
  moveX(1.5 * SPR * scale * wico);

}


void letter_E()
{
  moveAlong(wico * SPR * scale, SPR * scale);
  penDown();
  moveX(-1 * wico * SPR * scale);
  moveY(-0.5 * SPR * scale);
  moveX(0.8 * wico * SPR * scale);
  penUp();
  moveX(-0.8 * wico * SPR * scale);
  penDown();
  moveY(-0.5 * SPR * scale);
  moveX(wico * SPR * scale);
  penUp();
  moveX(0.5 * wico * SPR * scale);
  
}


void letter_F()
{
  penDown();
  moveY(SPR * scale);
  moveX(SPR * scale * wico);
  penUp();
  moveAlong(-1 * SPR * scale * wico, -0.4 * SPR * scale);
  penDown();
  moveX(0.8 * SPR * scale * wico);
  penUp();
  moveAlong(0.7 * SPR * scale * wico, -0.6 * SPR * scale);
}


void letter_G()
{
  moveAlong(wico * SPR * scale, SPR * scale);
  penDown();
  moveX(-1 * wico * SPR * scale);
  moveY(-1 * SPR * scale);
  moveX( wico * SPR * scale);
  moveY(0.25 * SPR * scale);
  moveX(-0.3 * wico * SPR * scale);
  penUp();
  moveAlong(0.8 * wico * SPR * scale,-0.25 * SPR * scale);

}


void letter_H()
{
  penDown();
  moveY(SPR * scale);
  penUp();
  moveX( wico * SPR * scale);
  penDown();
  moveY(-1 * SPR * scale);
  penUp();
  moveY(0.5 * SPR * scale);
  penDown();
  moveX( -1 * wico * SPR * scale);
  penUp();
  moveAlong(1.5 * wico * SPR * scale,-0.5 * SPR * scale);
  
}


void letter_I()
{
   moveY(SPR * scale);
   penDown();
   moveX(0.8 * SPR * scale * wico);
   penUp();
   moveX(-0.4 * SPR * scale * wico);
   penDown();
   moveY(-1 * SPR * scale);
   moveX(-0.4 * SPR * scale * wico);
   penUp();
   moveX(0.4 * SPR * scale * wico);
   penDown();
   moveX(0.4 * SPR * scale * wico);
   penUp();
   moveX(0.5 * SPR * scale * wico);
}


void letter_J()
{
  moveY(0.15 * SPR * scale);
  penDown();
  moveY(-0.15 * SPR * scale); 
  moveX(SPR * scale * wico);
  moveY(SPR * scale);
  moveX(-0.7 * SPR * scale * wico);
  penUp();
  moveAlong(1.2 * SPR * scale * wico, -1 * SPR * scale);
}


void letter_K()
{
  penDown();
  moveY(SPR * scale);
  penUp();
  moveX( wico * SPR * scale);
  penDown();
  moveY(-0.35 * SPR * scale);
  moveAlong(-0.25 * wico * SPR * scale,-0.15 * SPR * scale);
  moveX( -0.75 * wico * SPR * scale);
  penUp();
  moveX( 0.75 * wico * SPR * scale);
  penDown();
  moveAlong(0.25 * wico * SPR * scale,-0.15 * SPR * scale);
  moveY(-0.35 * SPR * scale);
  penUp();
  moveX( 0.5 * wico * SPR * scale);

}


void letter_L()
{
  moveY(SPR * scale);
  penDown();
  moveY(-1 * SPR * scale);
  moveX(SPR * scale * wico);
  penUp();
  moveX(0.5 * SPR * scale * wico);
}


void letter_M()
{
  penDown();
  moveY(SPR * scale);
  moveAlong(0.5 * SPR * scale * wico, -0.8 * SPR * scale);
  moveAlong(0.5 * SPR * scale * wico, 0.8 * SPR * scale);
  moveY(-1 * SPR * scale);
  penUp();
  moveX(0.5 * SPR * scale * wico);
}


void letter_N()
{
  penDown();
  moveY(SPR * scale);
  moveAlong(SPR * scale * wico, -1 * SPR * scale);
  moveY(SPR * scale);
  penUp();
  moveAlong(0.5 * SPR * scale * wico, -1 * SPR * scale);
}


void letter_O()
{
  penDown();
  moveY(SPR * scale);
  moveX(SPR * scale * wico);
  moveY(-1 * SPR * scale);
  moveX(-1 * SPR * scale * wico);
  penUp();
  moveX(1.5 * SPR * scale * wico);
}


void letter_P()
{
  penDown();
  moveY(SPR * scale);
  moveX( SPR * scale * wico);
  moveY(-0.4 * SPR * scale);
  moveX( -1 * SPR * scale * wico);
  penUp();
  moveAlong(1.5 * SPR * scale * wico, -0.6 * SPR * scale);
}


void letter_Q()
{
  penDown();
  moveY(SPR * scale);
  moveX(SPR * scale * wico);
  moveY(-1 * SPR * scale);
  moveX(-1 * SPR * scale * wico);
  penUp();
  moveAlong(0.5 * SPR * scale * wico, 0.2 * SPR * scale);
  penDown();
  moveY(-0.4 * SPR * scale);
  penUp();
  moveAlong(SPR * scale * wico, 0.2 * SPR * scale);
}


void letter_R()
{
  penDown();
  moveY(SPR * scale);
  moveX(0.8 * SPR * scale * wico);
  moveY(-0.4 * SPR * scale);
  moveX(-0.8 * SPR * scale * wico);
  penUp();
  moveX(0.8 * SPR * scale * wico);
  penDown();
  moveX(0.2 * SPR * scale * wico);
  moveY(-0.6 * SPR * scale);
  penUp();
  moveX(0.5 * SPR * scale * wico);
}


void letter_S()
{
  moveAlong( SPR * scale * wico, SPR * scale);
  penDown();
  moveX(-1 * SPR * scale * wico);
  moveY(-0.4 * SPR * scale);
  moveX( SPR * scale * wico);
  moveY(-0.6 * SPR * scale);
  moveX(-1 * SPR * scale * wico);
  penUp();
  moveX(1.5 * SPR * scale * wico);
}


void letter_T()
{
  moveY(SPR * scale);
  penDown();
  moveX( SPR * scale * wico);
  penUp();
  moveX(-0.5 * SPR * scale * wico);
  penDown();
  moveY(-1 * SPR * scale);
  penUp();
  moveX( SPR * scale * wico);
}


void letter_U()
{
  moveY(SPR * scale);
  penDown();
  moveY(-1 * SPR * scale);
  moveX( SPR * scale * wico);
  moveY( SPR * scale);
  penUp();
  moveAlong(0.5 * SPR * scale * wico, -1 * SPR * scale);
}


void letter_V()
{
  moveY(SPR * scale);
  penDown();
  moveAlong(0.5 * SPR * scale * wico, -1 * SPR * scale);
  moveAlong(0.5 * SPR * scale * wico, SPR * scale);
  penUp();
  moveAlong(0.5 * SPR * scale * wico, -1 * SPR * scale);
}


void letter_W()
{
  moveY(SPR * scale);
  penDown();
  moveY(-1 * SPR * scale);
  moveAlong(0.5 * SPR * scale * wico, 0.8 * SPR * scale);
  moveAlong(0.5 * SPR * scale * wico, -0.8 * SPR * scale);
  moveY(SPR * scale);
  penUp();
  moveAlong(0.5 * SPR * scale * wico, -1 * SPR * scale);
}


void letter_X()
{
  moveY(SPR * scale);
  penDown();
  moveY(-0.3 * SPR * scale);
  moveAlong(SPR * scale * wico, -0.4 * SPR * scale);
  moveY(-0.3 * SPR * scale);
  penUp();
  moveY(SPR * scale);
  penDown();
  moveY(-0.3 * SPR * scale);
  moveAlong(-1 * SPR * scale * wico, -0.4 * SPR * scale);
  moveY(-0.3 * SPR * scale);
  penUp();
  moveX(1.5 * SPR * scale * wico);
}


void letter_Y()
{
  moveY(SPR * scale);
  penDown();
  moveY(-0.4 * SPR * scale);
  moveX(SPR * scale * wico);
  moveY(0.4 * SPR * scale);
  penUp();
  moveAlong(-0.5 * SPR * scale * wico, -0.4 * SPR * scale);
  penDown();
  moveY(-0.6 * SPR * scale);
  penUp();
  moveX(SPR * scale * wico);
}


void letter_Z()
{
  moveY(SPR * scale);
  penDown();
  moveX( SPR * scale * wico);
  moveAlong(-1 * SPR * scale * wico, -1 * SPR * scale);
  moveX( SPR * scale * wico);
  penUp();
  moveX( 0.5 *SPR * scale * wico);
}


void letter_a()
{
  moveAlong(0.3 * SPR * scale * wico, 0.8 * SPR * scale);
  penDown();
  moveX(0.7 * SPR * scale * wico);
  moveY(-0.8 * SPR * scale);
  moveX(-1 * SPR * scale * wico);
  moveY(0.5 * SPR * scale);
  moveX(SPR * scale * wico);
  penUp();
  moveAlong(0.5 * SPR * scale * wico, -0.5 * SPR * scale);
}


void letter_b()
{
  moveY(SPR * scale);
  penDown();
  moveY(-1 * SPR * scale);
  moveX(SPR * scale * wico);
  moveY(0.6 * SPR * scale);
  moveX(-1 * SPR * scale * wico);
  penUp();
  moveAlong(1.5 * SPR * scale * wico, -0.6 * SPR * scale);

}


void letter_c()
{
  moveAlong(SPR * scale * wico, 0.6 * SPR * scale);
  penDown();
  moveX(-1 * SPR * scale * wico);
  moveY(-0.6 * SPR * scale);
  moveX(SPR * scale * wico);
  penUp();
  moveX(0.5 * SPR * scale * wico);
}


void letter_d()
{
  moveAlong(SPR * scale * wico, SPR * scale);
  penDown();
  moveY(-1* SPR * scale );
  moveX( -1 * SPR * scale * wico);
  moveY(0.6* SPR * scale );
  moveX( SPR * scale * wico);
  penUp();
  moveAlong(SPR * scale * wico * 0.5, -0.6 * SPR * scale);
}


void letter_e()
{
  moveX( SPR * scale * wico);
  penDown();
  moveX( -1 * SPR * scale * wico);
  moveY(0.8 * SPR * scale );
  moveX(SPR * scale * wico);
  moveY(-0.4 * SPR * scale );
  moveX( -1 * SPR * scale * wico);
  penUp();
  moveAlong(SPR * scale * wico * 1.5, -0.4 * SPR * scale);
}


void letter_f()
{
  moveAlong(SPR * scale * wico * 0.6, SPR * scale);
  penDown();
  moveX( -0.3 * SPR * scale * wico);
  moveY(-1 * SPR * scale);
  penUp();
  moveAlong(SPR * scale * wico * 0.3, 0.6 * SPR * scale);
  penDown();
  moveX( -0.6 * SPR * scale * wico);
  penUp();
  moveAlong(SPR * scale * wico * 1.1 , - 0.6 * SPR * scale);

}


void letter_g()
{
  penDown();
  moveY(0.6 * SPR * scale);
  moveX(0.8 * SPR * scale * wico);
  moveY(-1 * SPR * scale);
  moveX(-0.8 * SPR * scale * wico);
  moveY(0.2 * SPR * scale);
  penUp();
  moveAlong(SPR * scale * wico * 0.8 , 0.2 * SPR * scale);
  penDown();
  moveX(-0.8 * SPR * scale * wico);
  penUp();
  moveX(1.3 * SPR * scale * wico);
}


void letter_h()
{
  penDown();
  moveY(SPR * scale);
  penUp();
  moveY(-0.4 * SPR * scale);
  penDown();
  moveX(0.6 * SPR * scale * wico);
  moveY(-0.6 * SPR * scale);
  penUp();
  moveX(0.5 * SPR * scale * wico);
}


void letter_i()
{
  penDown();
  moveY(0.7 * SPR * scale);
  penUp();
  moveY(0.2 * SPR * scale);
  penDown();
  moveY(0.1 * SPR * scale);
  penUp();
  moveAlong(SPR * scale * wico * 0.5, -1 * SPR * scale); 
}


void letter_j()
{
  moveAlong(SPR * scale * wico * 0.3, SPR * scale);
  penDown();
  moveY(-0.1 * SPR * scale);
  penUp();
  moveY(-0.1 * SPR * scale);
  penDown();
  moveY(- 0.8 * SPR * scale);
  moveX(-0.3 * SPR * wico * scale);
  moveY(0.2 * SPR * scale);
  penUp();
  moveAlong(SPR * scale * wico * 0.8, -0.2 * SPR * scale);
}


void letter_k()
{
  penDown();
  moveY(SPR * scale);
  penUp();
  moveY(-0.6 * SPR * scale);
  penDown();
  moveAlong(SPR * scale * wico * 0.8, 0.3 * SPR * scale);
  penUp();
  moveAlong(-0.8 * SPR * scale * wico, -0.3 * SPR * scale);
  penDown();
  moveAlong(0.8 * SPR * scale * wico, -0.4 * SPR * scale);
  penUp();
  moveX(0.5 * SPR * scale * wico);
}


void letter_l()
{
  moveY(SPR * scale);
  penDown();
  moveY(-1 * SPR * scale);
  moveX(0.2 * SPR * scale * wico);
  penUp();
  moveX(0.5 * SPR * scale * wico);
}


void letter_m()
{
  moveY(0.8 * SPR * scale);
  penDown();
  moveY( - 0.8 * SPR * scale);
  penUp();
  moveY(0.6 * SPR * scale);
  penDown();
  moveX(0.5 * SPR * wico * scale);
  moveY( - 0.6 * SPR * scale);
  penUp();
  moveY(0.6 * SPR * scale);
  penDown();
  moveX(0.5 * SPR * wico * scale);
  moveY(-0.6 * SPR * scale);
  penUp();
  moveX(0.5 * SPR * wico * scale);
  
}


void letter_n()
{
  moveAlong(SPR * scale * wico * 0.1, 0.8 * SPR * scale);
  penDown();
  moveY(-0.8 * SPR * scale);
  penUp();
  moveY(0.6 * SPR * scale);
  penDown();
  moveX(0.8 * SPR * wico * scale);
  moveY( - 0.6 * SPR * scale);
  penUp();
  moveX(0.6 * SPR * wico * scale);
}


void letter_o()
{
  penDown();
  moveY(0.6 * SPR * scale);
  moveX(SPR * wico * scale);
  moveY(-0.6 * SPR * scale);
  moveX(-1 * SPR * wico * scale);
  penUp();
  moveX(1.5 * SPR * wico * scale);

}


void letter_p()
{
  moveY(-0.4 * SPR * scale);
  penDown();
  moveY(SPR * scale);
  moveX(0.8 * SPR * wico * scale);
  moveY(-0.6 * SPR * scale);
  moveX(-0.8 * SPR * wico * scale);
  penUp();
  moveX(1.3 * SPR * wico * scale);
}


void letter_q()
{
  penDown();
  moveY(0.6 * SPR * scale);
  moveX(0.8 * SPR * wico * scale);
  moveY(-1 * SPR * scale);
  moveX(0.2 * SPR * wico * scale);
  penUp();
  moveY(0.4 * SPR * scale);
  moveX(-0.2 * SPR * wico * scale);
  penDown();
  moveX(-0.8 * SPR * wico * scale);
  penUp();
  moveX(1.3 * SPR * wico * scale);
}


void letter_r()
{
  penDown();
  moveY(0.8 * SPR * scale);
  penUp();
  moveY(-0.3 * SPR * scale);
  penDown();
  moveAlong(0.7 * SPR * scale * wico, 0.3 * SPR * scale);
  moveX(0.3 * SPR * scale * wico);
  penUp();
  moveAlong(0.5 * SPR * scale * wico, -0.8 * SPR * scale);
}


void letter_s()
{
  moveAlong(SPR * scale * wico, 0.8 * SPR * scale);
  penDown();
  moveX(-1 * SPR * scale * wico);
  moveY(-0.3 * SPR * scale);
  moveX(SPR * scale * wico);
  moveY(-0.5 * SPR * scale);
  moveX(-1 * SPR * scale * wico);
  penUp();
  moveX(1.5 * SPR * scale * wico);
}


void letter_t()
{
  moveAlong(0.5 * SPR * scale * wico, 0.9 * SPR * scale);
  penDown();
  moveY(-0.9 * SPR * scale);
  moveX(0.3 * SPR * scale * wico);
  penUp();
  moveAlong(-0.7 * SPR * scale * wico, 0.6 * SPR * scale);
  penDown();
  moveX(0.8 * SPR * scale * wico);
  penUp();
  moveAlong(0.6 * SPR * scale * wico, -0.6 * SPR * scale); 
}


void letter_u()
{
  moveY(0.6 * SPR * scale);
  penDown();
  moveY(-0.6 * SPR * scale);
  moveX(0.8 * SPR * wico * scale);
  moveY(0.6 * SPR * scale);
  penUp();
  moveY(-0.6 * SPR * scale);
  penDown();
  moveX(0.2 * SPR * wico * scale);
  penUp();
  moveX(0.5 * SPR * wico * scale);
  
}


void letter_v()
{
  moveY(0.6 * SPR * scale);
  penDown();
  moveAlong(0.5 * SPR * scale * wico, -0.6 * SPR * scale);
  moveAlong(0.5 * SPR * scale * wico, 0.6 * SPR * scale);
  penUp();
  moveAlong(0.5 * SPR * scale * wico, -0.6 * SPR * scale);
}


void letter_w()
{
   moveY(0.8 * SPR * scale);
   penDown();
   moveY(-0.8 * SPR * scale);
   moveX(0.5 * SPR * scale * wico);
   moveY(0.3 * SPR * scale);
   penUp();
   moveY(-0.3 * SPR * scale);
   penDown();
   moveX(0.5 * SPR * scale * wico);
   moveY(0.8 * SPR * scale);
   penUp();
   moveAlong(0.5 * SPR * scale * wico, -0.8 * SPR * scale); 
}


void letter_x()
{
  moveY(0.6 *SPR * scale);
  penDown();
  moveY(-0.2 * SPR * scale);
  moveAlong(SPR * scale * wico, -0.2 * SPR * scale);
  moveY(-0.2 * SPR * scale);
  penUp();
  moveY(0.6 * SPR * scale);
  penDown();
  moveY(-0.2 * SPR * scale);
  moveAlong(-1 * SPR * scale * wico, -0.2 * SPR * scale);
  moveY(-0.2 * SPR * scale);
  penUp();
  moveX(1.5 * SPR * scale * wico);
}


void letter_y()
{
  moveY(0.6 * SPR * scale);
  penDown();
  moveY(-0.6 * SPR * scale);
  moveX(0.6 * SPR * scale * wico);
  penUp();
  moveY(0.6 * SPR * scale);
  penDown();
  moveY(-1 * SPR * scale);
  moveX(-0.6 * SPR * scale * wico);
  moveY(0.2 * SPR * scale);
  penUp();
  moveAlong(1.1 * SPR * scale * wico, 0.2 * SPR * scale);
}


void letter_z()
{
  moveY(0.6 * SPR * scale);
  penDown();
  moveX(0.8 * SPR * scale * wico);
  moveAlong(-0.8 * SPR * scale * wico, -0.6 * SPR * scale);
  moveX(0.8 * SPR * scale * wico);
  penUp();
  moveX(0.5 * SPR * scale * wico);
}


void Zero()
{
  penDown();
  moveY(SPR * scale);
  moveX(SPR * scale * wico);
  moveY(-1 * SPR * scale);
  moveX(-1 * SPR * scale * wico);
  moveAlong(SPR * scale * wico, SPR * scale);
  penUp();
  moveAlong(0.5 * SPR * scale * wico, -1 * SPR * scale);
}


void One()
{
  moveY(SPR * scale);
  penDown();
  moveX(0.2 * SPR * scale * wico);
  moveY(-1 * SPR * scale);
  penUp();
  moveX(0.5 * SPR * scale * wico);
  
}


void Two()
{
  moveY(SPR * scale);
  penDown();
  moveX(SPR * scale * wico);
  moveY(-0.4 * SPR * scale);
  moveX(-1 * SPR * scale * wico);  
  moveY(-0.6 * SPR * scale);
  moveX(SPR * scale * wico);
  penUp();
  moveX(0.5 * SPR * scale * wico);
}


void Three()
{
  moveY(SPR * scale);
  penDown();
  moveX(SPR * scale * wico);
  moveY(-1 * SPR * scale);
  moveX(-1 * SPR * scale * wico);
  penUp();
  moveY(0.6 * SPR * scale);
  penDown();
  moveX(SPR * scale * wico);
  penUp();
  moveAlong(0.5 * SPR * scale * wico, -0.6 * SPR * scale);
  
  
}


void Four()
{
  moveY(SPR * scale);
  penDown();
  moveY(-0.4 * SPR * scale);
  moveX(SPR * scale * wico);
  penUp();
  moveY(0.4 * SPR * scale);
  penDown();
  moveY(-1 * SPR * scale);
  penUp();
  moveX(0.5 * SPR * scale * wico);

}


void Five()
{
  moveAlong( SPR * scale * wico, SPR * scale);
  penDown();
  moveX(-1 * SPR * scale * wico);
  moveY(-0.4 * SPR * scale);
  moveX(0.75 * SPR * scale * wico);
  moveAlong(0.25 * SPR * scale * wico, -0.15 * SPR * scale);
  moveY(-0.3 * SPR * scale);
  moveAlong(-0.25 * SPR * scale * wico, -0.15 * SPR * scale);
  moveX(-0.75 * SPR * scale * wico);
  penUp();
  moveX(1.5 * SPR * scale * wico);
}


void Six()
{
  moveAlong(SPR * scale * wico , SPR * scale);
  penDown();
  moveX(-1* SPR * scale * wico);
  moveY(-1 * SPR * scale); 
  moveX(SPR * scale * wico);
  moveY(0.6 * SPR * scale );
  moveX(-1 * SPR * scale * wico);
  penUp();
  moveAlong(SPR * scale * wico * 1.5, -0.6 * SPR * scale);
}


void Seven()
{
  moveY(SPR * scale );
  penDown();
  moveX(SPR * scale * wico);
  moveY(-1* SPR * scale );
  penUp();
  moveX(0.5 * SPR * scale * wico);
}


void Eight()
{
  moveY(0.6 * SPR * scale );
  penDown();
  moveY(0.4 * SPR * scale );
  moveX(SPR * scale * wico);
  moveY(-1 * SPR * scale );
  moveX(-1 *SPR * scale * wico);
  moveY(0.6 * SPR * scale );
  moveX(SPR * scale * wico);
  moveAlong(SPR * scale * wico * 0.5, -0.6 * SPR * scale);
  
  
}


void Nine()
{
  penDown();
  moveX(SPR * scale * wico);
  moveY(SPR * scale );
  moveX(-1 *SPR * scale * wico);
  moveY(-0.4 * SPR * scale );
  moveX(SPR * scale * wico);
  moveAlong(SPR * scale * wico * 0.5, -0.6 * SPR * scale);
  
}


void Apostrophe()
{
  moveAlong(SPR * scale * wico * -0.2, SPR * scale * 0.9);
  penDown();
  moveAlong(SPR * scale * wico * -0.1, SPR * scale * -0.2);
  penUp();
  moveAlong(SPR * scale * wico * 0.3, SPR * scale * -0.7);
}


void Space()
{
  moveX( SPR * scale * wico);
}


void dash()
{
  moveY(0.5 * SPR * scale);
  penDown();
  moveX(SPR * scale * wico);
  penUp();
  moveAlong(0.5 * SPR * scale * wico, -0.5 * SPR * scale);
}
