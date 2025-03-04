const int trig1=8;
const int echo1=9;
const int trig2=10;
const int echo2=11;
const int trig3=12;
const int echo3=13;
const int enA=2;
const int in1=3;
const int in2=4;
const int in3=5;
const int in4=6;
const int enB=7;
long waqt1,waqt2,waqt3;
int dis1,dis2,dis3;
 void setup() {
  pinMode(trig1,OUTPUT);
  pinMode(echo1,INPUT);
  pinMode(trig2,OUTPUT);
  pinMode(echo2,INPUT);
  pinMode(trig3,OUTPUT);
  pinMode(echo3,INPUT);
  pinMode(enA,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(enB,OUTPUT);
  Serial.begin(9600);

}

void loop() {


  digitalWrite(trig1,HIGH);
  digitalWrite(trig1,LOW);
  waqt1=pulseIn(echo1,HIGH);
  
  digitalWrite(trig2,HIGH);
  digitalWrite(trig2,LOW);
  waqt2=pulseIn(echo2,HIGH);

  digitalWrite(trig3,HIGH);
  digitalWrite(trig3,LOW);
  waqt3=pulseIn(echo3,HIGH);
  
  dis1=waqt1*0.034/2;
  dis2=waqt2*0.034/2;
  dis3=waqt3*0.034/2;

  Serial.print("distance1:");
  Serial.println(dis1);
  Serial.print("distance2:");
  Serial.println(dis2);
  Serial.print("distance3:");
  Serial.println(dis3);
  delay(1000);

  if(dis1==6 && dis2==6)
  {
    right();
    Serial.println("right");
  }
  if(dis1==5 && dis3==5)
  {
   left();
    Serial.println("left");
  }
  if(dis2==5 && dis3==5)
{
 forward();
  Serial.println("forward");
}
}

void forward(){
  digitalWrite(enA,255);
  digitalWrite(enB,255);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
/*void backward(){
  digitalWrite(enA,255);
  digitalWrite(enB,255);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}*/
void left(){
  digitalWrite(enA,255);
  digitalWrite(enB,255);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}

void right(){
  digitalWrite(enA,255);
  digitalWrite(enB,255);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}



