/**************************
˙程式：hi Arduino A/D
˙日期：2012.11.27
Dalin
***************************/
#include <NewSoftSerial.h>
#include <ParallaxLCD.h>
#define signInPin 6
double Value = 0;

void setup()
{
  
Serial.begin(9600);    //鮑率9600
Serial.write(12);
}

void loop()
{
Value = analogRead(signInPin);//置入讀數到Value變數
Value = 0.25*Value + 0.25*Value + 0.25*Value + 0.25*Value; 
Value = (Value/1023)*491;
Serial.print("Tampercher Value =");
Serial.print(Value);
Serial.println("(C)");
Serial.write(13);
Serial.write(17);
delay(2000);
Serial.write(12);//　青空LCD
delay(1000);
}
