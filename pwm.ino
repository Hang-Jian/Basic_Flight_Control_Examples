void setup(){
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT); 
  pinMode(9,OUTPUT);  
}

void loop(){
  analogWrite(3,50);
  analogWrite(5,50);
  analogWrite(6,50);
  analogWrite(9,50);
  delay(1000);
  analogWrite(3,100);
  analogWrite(5,100);
  analogWrite(6,100);
  analogWrite(9,100);
  delay(1000);
  analogWrite(3,20);
  analogWrite(5,20);
  analogWrite(6,20);
  analogWrite(9,20);
  delay(1000);  
}
