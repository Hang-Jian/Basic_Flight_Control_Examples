/***************************


******************************/

String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;  // whether the string is complete
int output;

char text[5] = { 0, 0, 0, 0, 0};// 封包 5 byte

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);pinMode(9, OUTPUT);pinMode(10, OUTPUT);pinMode(11, OUTPUT);
  analogWrite(3, 0);analogWrite(9, 0);analogWrite(10, 0);analogWrite(11, 0);
  
}



void loop() {

  if (stringComplete) {
     Serial.print(inputString); 
     inputString.toCharArray(text, 5);
    Serial.print("flag is:"); Serial.println(text[0]);
    Serial.println("you type:"); Serial.println(text[1]);
     Serial.println(text[2]);
     Serial.println(text[3]);
     //Serial.println(text[4]);
     
     if(text[0] == '!'){
      output = str2DEC();
       analogWrite(3, output);
       Serial.print("Output is:"); Serial.println(output);
     } 
      inputString = "";
      stringComplete = false;    
  }
  
 
}  



void serialEvent() {  
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read(); 
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag
    // so the main loop can do something about it:
    if (inChar == '\n') {
      stringComplete = true;
    } 
  }
}

int str2DEC(){
  int tmp;  
 tmp= (text[1]-48)*100 + (text[2]-48)*10 + (text[3]-48);
return tmp;
}
