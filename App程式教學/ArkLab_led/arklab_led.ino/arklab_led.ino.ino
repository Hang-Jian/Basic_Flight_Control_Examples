byte cmmd[20];
int insize = 0, RW = 0,addr=0,times=0;
char buf;

void setup() {
  Serial.begin(115200); 
  Serial.setTimeout(50);  
}

void loop() {
analogWrite(3  , cmmd[0 ]);  
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
      if(addr==1){  
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





