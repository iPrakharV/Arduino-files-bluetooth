const int trigpin0=12;
const int echopin0=13;
const int trigpin1=2;
const int echopin1=3;
const int trigpin2=4;
const int echopin2=7;
const int in1=11;
const int in2=10;
const int in3=9;
const int in4=8;
const int enA=6;
const int enB=5;
long duration0,duration1,duration2;
int distance0,distance1,distance2;
void setup() {
 pinMode(trigpin0,OUTPUT);
 pinMode(echopin0,INPUT);
 pinMode(trigpin1,OUTPUT);
 pinMode(echopin1,INPUT);
 pinMode(trigpin2,OUTPUT);
 pinMode(echopin2,INPUT);
 Serial.begin(9600);
}

void loop() {
  digitalWrite(trigpin0,LOW);
  delayMicroseconds(2);
 // digitalWrite(trigpin1,LOW);
  //delayMicroseconds(2);
  // digitalWrite(trigpin2,LOW);
  //delayMicroseconds(2);
  digitalWrite(trigpin0,HIGH);
  delayMicroseconds(10);
 // digitalWrite(trigpin1,HIGH);
  //delayMicroseconds(10);
  //digitalWrite(trigpin2,HIGH);
  //delayMicroseconds(10);
  digitalWrite(trigpin0,LOW);
 // digitalWrite(trigpin1,LOW);
 // digitalWrite(trigpin2,LOW);
  duration0=pulseIn(echopin0,HIGH);
  distance0=duration0*0.034/2;
  //duration1=pulseIn(echopin1,HIGH);
  //distance1=duration*0.034/2;
  //duration2=pulseIn(echopin2,HIGH);
  //distance2=duration*0.034/2;
  Serial.println(distance0);
  Serial.println(distance1);
  Serial.println(distance2);
  if(distance0>5)// && distance1>5 && distance2>5)
  {
    Serial.println("forward");
       forward();
  }
  /*if(distance<5||distance==5)
  {
    stopl();
    delay(1000);
    right();
    delay(1000);
    forward();
  }*/
  if(distance0<=5)//&& distance1<=5 && distance2<=5)
  {
   left();
   Serial.println("left");
   delay(125);
   forward();
   delay(125);
   stopl();
   delay(125);
   
  }
}
void forward(){
 digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
   analogWrite(enA,125);
    digitalWrite(in3,LOW);
     digitalWrite(in4,HIGH);
     analogWrite(enB,125);
  
}
void right(){
 digitalWrite(in1,HIGH);
  digitalWrite(in2,HIGH);
   analogWrite(enA,120);
    digitalWrite(in3,LOW);
     digitalWrite(in4,HIGH);
     analogWrite(enB,120);
  
}
void stopl(){
 digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
   analogWrite(enA,0);
    digitalWrite(in3,LOW);
     digitalWrite(in4,LOW);
     analogWrite(enB,0);
  
}
void left(){
   digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
   analogWrite(enA,255);
    digitalWrite(in3,HIGH);
     digitalWrite(in4,HIGH);
     analogWrite(enB,225);
}     


