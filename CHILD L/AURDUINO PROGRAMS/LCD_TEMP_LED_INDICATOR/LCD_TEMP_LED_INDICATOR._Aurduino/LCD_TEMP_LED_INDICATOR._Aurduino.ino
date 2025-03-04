#include<LiquidCrystal.h>
LiquidCrystal MyLCD(12,11,5,4,3,2);
const double LM_35=A0;
int input_val=0;
float temp=A0;
const int LED1=6;
const int LED2=7;
const int LED3=8;
void setup() {
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
input_val=analogRead(LM_35);
temp=(5.0*input_val*100.0)/1024;
MyLCD.begin(16,2);
MyLCD.home();
MyLCD.print("TEMPERATURE IS:");
MyLCD.setCursor(0,1);
MyLCD.print(temp);
}

void loop() {
  if(temp<=25){
    digitalWrite(LED1,HIGH);
  }
  else if(temp>=50){
    digitalWrite(LED2,HIGH);
  }else{
    digitalWrite(LED3,HIGH);
  }
   
  // put your main code here, to run repeatedly:

}
