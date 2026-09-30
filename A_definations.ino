#include <Stepper.h>
#define xlimitpin 9
#define ylimitpin 10
#define zlimitpin 11

long Xpos = 0;                         // Current X positon
long Ypos = 0;                         // Current Y position
int rpm = 100;
long SPR = 12800;                      // Pulses for 1 complete revolution
float wico = 0.6;                      // width ratio for letters
char harf;
char gomla[200];                       // Fills letters coming from gui
int zeft = 0;
char scare;
char Direction;
long scale = 2;                        // scale coming from gui (2 if not specified)
bool felga = 0;
double kayo = 0;
int letterlimit = 20/scale ;           // letter limit per line
void skye(char,char);

Stepper stepperx(SPR,2,5);
Stepper steppery(SPR,3,6);
Stepper stepperz(SPR,4,7);



//functions
void moveAlong(long, long);
void moveX(long);
void moveY(long);
void penUp();
void penDown();
void Homing();
void letter_A();
void letter_B();
void letter_C();
void letter_D();
void letter_E();
void letter_F();
void letter_G();
void letter_H();
void letter_I();
void letter_J();
void letter_K();
void letter_L();
void letter_M();
void letter_N();
void letter_O();
void letter_P();
void letter_Q();
void letter_R();
void letter_S();
void letter_T();
void letter_U();
void letter_V();
void letter_W();
void letter_X();
void letter_Y();
void letter_Z();
void letter_a();
void letter_b();
void letter_c();
void letter_d();
void letter_e();
void letter_f();
void letter_g();
void letter_h();
void letter_i();
void letter_j();
void letter_k();
void letter_l();
void letter_m();
void letter_n();
void letter_o();
void letter_p();
void letter_q();
void letter_r();
void letter_s();
void letter_t();
void letter_u();
void letter_v();
void letter_w();
void letter_x();
void letter_y();
void letter_z();
void Zero();
void One();
void Two();
void Three();
void Four();
void Five();
void Six();
void Seven();
void Eight();
void Nine();
void Apostrophe();
void dash();
void Space();
void enter();
void departure();
void initiate();

bool xlimit = 1;
bool ylimit = 1;
bool zlimit = 1;


void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  digitalWrite(8,LOW);
  pinMode(xlimitpin, INPUT_PULLUP);
  pinMode(ylimitpin, INPUT_PULLUP);
  pinMode(zlimitpin, INPUT_PULLUP);
  stepperx.setSpeed(rpm);
  steppery.setSpeed(rpm);
  stepperz.setSpeed(20);
  Serial.begin(9600);
  Homing ();

}



void loop() {
  // put your main code here, to run repeatedly:
 
     while (Serial.available())
   {
    
       gomla[zeft] = Serial.read(); 
       Serial.print(gomla[zeft]);
       zeft++; 
       delay(100);
   }

   harf = gomla[0];

    if (harf == '~')                        // if select scale button is selected
    {
      while(!Serial.available()){Serial.println("Enter the scale"); delay(500);}
      scare  = Serial.read();  
      if (scare == '2'){scale = 2;}
      else if (scare == '4'){scale = 4;}
      else if (scare == '6'){scale = 6;}
      else if (scare == '8'){scale = 8;}
      
      Serial.print(scale);  
      zeft = 0; 
      harf = '<';
      gomla[0] = '<';
      Serial.println("i'm in");
      delay(500);
    } 

 else if (harf == '!')                     // if Homing button is selected          
 {
  Homing();
  zeft = 0; 
  harf = '<';
  gomla[0] = '<';
 }
 
 else if (harf == '|')                    // if Manual control button is selected
    {
      Direction = '+';
      Serial.println("MANUAL");
      delay(500);
      while(!Serial.available()){Serial.println("enter the direction"); delay(500);}
      char dummy = Serial.read();
      while (Direction != '#')
      { 
      while (Direction != '$')
      {
 
    while(Serial.available())
    {
      dummy = Serial.read();
      Direction = dummy;
      Serial.println("available");
      delay(100);
    }

    
    Serial.print(Direction); 
    Serial.println("dir");  
    
      if (Direction == '+')
      {
        moveX(100);
      }
      
      else if (Direction == '-')
      {
        moveX(-100);
      }
      
      else if (Direction == '*')
      {
        moveY(100);
      }
      
      else if (Direction == '/')
      {
        moveY(-100);
      }
      
      
      }
      while(Serial.available())
      {
      Direction = Serial.read();
      }
      zeft = 0; 
      harf = '<';
      gomla[0] = '<';
      Serial.println("MANUAL OUT");
      felga = 0;
      kayo = 0;
      delay(500);
      }  
    }
    else if (zeft != 0 && harf != '~' && harf != '|' && harf != '!' && harf != '$' && harf != '#' && harf != '+' && harf != '-' && harf != '/' && harf != '*' )
    {
      Serial.println("i'm in gomla");          // if Items to be written are sent from gui
      delay(500);
    

   while (zeft != 0)
  {
    if (felga == 1)
    {
      if (scale == 2){departure();}
      else{initiate();}
    }
    for (int i = 0; i < zeft; i++)
    {
      if (kayo > (letterlimit) || kayo == (letterlimit))
      {
        skye(gomla[zeft],gomla[zeft + 1]);
        kayo = 0;
      }
      
      switch (gomla[i])
      {
        case 'A':
        letter_A();
        Serial.print(gomla[i]);
        break;

        case 'B':
        letter_B();
        Serial.print(gomla[i]);
        break;

        case 'C':
        letter_C();
        Serial.print(gomla[i]);
        break;

        case 'D':
        letter_D();
        Serial.print(gomla[i]);
        break;

        case 'E':
        letter_E();
        Serial.print(gomla[i]);
        break;

        case 'F':
        letter_F();
        Serial.print(gomla[i]);
        break;

        case 'G':
        letter_G();
        Serial.print(gomla[i]);
        break;

        case 'H':
        letter_H();
        Serial.print(gomla[i]);
        break;

        case 'I':
        letter_I();
        Serial.print(gomla[i]);
        kayo = kayo - 0.1;
        break;


        case 'J':
        letter_J();
        Serial.print(gomla[i]);
        break;

        case 'K':
        letter_K();
        Serial.print(gomla[i]);
        break;

        case 'L':
        letter_L();
        Serial.print(gomla[i]);
        break;

        case 'M':
        letter_M();
        Serial.print(gomla[i]);
        break;

        case 'N':
        letter_N();
        Serial.print(gomla[i]);
        break;

        case 'O':
        letter_O();
        Serial.print(gomla[i]);
        break;

        case 'P':
        letter_P();
        Serial.print(gomla[i]);
        break;

        case 'Q':
        letter_Q();
        Serial.print(gomla[i]);
        break;

        case 'R':
        letter_R();
        Serial.print(gomla[i]);
        break;

        case 'S':
        letter_S();
        Serial.print(gomla[i]);
        break;

        case 'T':
        letter_T();
        Serial.print(gomla[i]);
        break;

        case 'U':
        letter_U();
        Serial.print(gomla[i]);
        break;

        case 'V':
        letter_V();
        Serial.print(gomla[i]);
        break;

        case 'W':
        letter_W();
        Serial.print(gomla[i]);
        break;

        case 'X':
        letter_X();
        Serial.print(gomla[i]);
        break;

        case 'Y':
        letter_Y();
        Serial.print(gomla[i]);
        break;

        case 'Z':
        letter_Z();
        Serial.print(gomla[i]);
        break;

        case 'a':
        letter_a();
        Serial.print(gomla[i]);
        break;

        case 'b':
        letter_b();
        Serial.print(gomla[i]);
        break;

        case 'c':
        letter_c();
        Serial.print(gomla[i]);
        break;

        case 'd':
        letter_d();
        Serial.print(gomla[i]);
        break;

        case 'e':
        letter_e();
        Serial.print(gomla[i]);
        break;

        case 'f':
        letter_f();
        Serial.print(gomla[i]);
        kayo = kayo - 0.2;
        break;

        case 'g':
        letter_g();
        Serial.print(gomla[i]);
        kayo = kayo - 0.2;
        break;

        case 'h':
        letter_h();
        Serial.print(gomla[i]);
        kayo = kayo - 0.3;
        break;

        case 'i':
        letter_i();
        Serial.print(gomla[i]);
        kayo = kayo - 0.7;
        break;

        case 'j':
        letter_j();
        Serial.print(gomla[i]);
        kayo = kayo - 0.5;
        break;

        case 'k':
        letter_k();
        Serial.print(gomla[i]);
        kayo = kayo - 0.2;
        break;

        case 'l':
        letter_l();
        Serial.print(gomla[i]);
        kayo = kayo - 0.5;
        break;

        case 'm':
        letter_m();
        Serial.print(gomla[i]);
        break;

        case 'n':
        letter_n();
        Serial.print(gomla[i]);
        break;

        case 'o':
        letter_o();
        Serial.print(gomla[i]);
        break;

        case 'p':
        letter_p();
        Serial.print(gomla[i]);
        kayo = kayo - 0.1;
        break;

        case 'q':
        letter_q();
        Serial.print(gomla[i]);
        kayo = kayo - 0.1;
        break;

        case 'r':
        letter_r();
        Serial.print(gomla[i]);
        break;

        case 's':
        letter_s();
        Serial.print(gomla[i]);
        break;

        case 't':
        letter_t();
        Serial.print(gomla[i]);
        break;

        case 'u':
        letter_u();
        Serial.print(gomla[i]);
        break;

        case 'v':
        letter_v();
        Serial.print(gomla[i]);
        break;

        case 'w':
        letter_w();
        Serial.print(gomla[i]);
        break;

        case 'x':
        letter_x();
        Serial.print(gomla[i]);
        break;

        case 'y':
        letter_y();
        Serial.print(gomla[i]);
        kayo = kayo - 0.3;
        break;

        case 'z':
        letter_z();
        Serial.print(gomla[i]);
        kayo = kayo - 0.1;
        break;

        case '0':
        Zero();
        Serial.print(gomla[i]);
        break;

        case '1':
        One();
        Serial.print(gomla[i]);
        kayo = kayo - 0.5;
        break;

        case '2':
        Two();
        Serial.print(gomla[i]);
        break;

        case '3':
        Three();
        Serial.print(gomla[i]);
        break;

        case '4':
        Four();
        Serial.print(gomla[i]);
        break;

        case '5':
        Five();
        Serial.print(gomla[i]);
        break;

        case '6':
        Six();
        Serial.print(gomla[i]);
        break;

        case '7':
        Seven();
        Serial.print(gomla[i]);
        break;

        case '8':
        Eight();
        Serial.print(gomla[i]);
        break;

        case '9':
        Nine();
        Serial.print(gomla[i]);
        break;

        case '\'':
        Apostrophe();
        Serial.print(gomla[i]);
        break;
        
        case ' ':
        Space();
        Serial.print(gomla[i]);
        kayo = kayo - 0.3;
        break;

        case '-':
        dash();
        Serial.print(gomla[i]);
        break;

        case '\n':
        enter();
        kayo = -1;
        Serial.print(gomla[i]);
        break;

        default:
        Serial.print(gomla[i]);


      }
      kayo++;
      


    }
    zeft = 0;
  }
    
  }

  Serial.println("i'm out");
  delay(500);
}
    
