void setup() {
  // put your setup code here, to run once:
pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   breath();
}

void breath(){
  int tmp;
  for(int i=0; i<20;i++){
    tmp +=1;
       digitalWrite(7,HIGH);
        delay(tmp);
        digitalWrite(7,LOW);
        int dark = 20-tmp;
        delay(dark);    
  }
  delay(20);  
 tmp =0;
    for(int i=0; i<20;i++){
     tmp +=1;
     int dark = 20-tmp;
       digitalWrite(7,HIGH);
        delay(dark);
        digitalWrite(7,LOW);
       
        delay(tmp);    
  }
  delay(20);  
}

