byte cmmd[20];
int insize = 0, RW = 0,addr=0,times=0;
char buf;

void setup() {
  Serial.begin(115200); 
  Serial.setTimeout(50);
  pinMode(3, OUTPUT);  
    pinMode(9, OUTPUT);  
       pinMode(10, OUTPUT);  
          pinMode(11, OUTPUT);  
}

void loop() {
analogWrite(3  , cmmd[0 ]);
  analogWrite( 9 , cmmd[1 ]);
  analogWrite( 10 , cmmd[2 ]);
  analogWrite( 11 , cmmd[3 ]);
}

void serialEvent() {
   while ( insize = Serial.available() > 0) {
    buf = Serial.read();
    switch (buf)
    {
      case '!':
        RW = 1;
        Serial.print(times++);  Serial.print("\t");
        Serial.print("!");  Serial.print("\t");
        break;      
      case '*':
      if(addr==4){  
        Serial.println("*");
        addr = 0;
        RW = 0;
      }
        break;
      default:
        if (RW = 1)  {
          cmmd[ addr] = buf;    
           Serial.print(cmmd[  addr]); Serial.print("\t");
          addr++;
        }    
        }
    }
  }





