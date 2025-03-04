const int (trig1) = 2;
const int (trig2) = 3;
const int (trig3) = 4;
const int (echo1) = 5;
const int (echo2) = 6;
const int (echo3) = 7;
const int enA = 8;
const int enB = 9;
const int in1 = 10;
const int in2 = 11;
const int in3 = 12;
const int in4 = 13;
long time1,time2,time3;
int dist1,dist2,dist3;


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
  time1=pulseIn(echo1,HIGH);
  
  digitalWrite(trig2,HIGH);
  digitalWrite(trig2,LOW);
  time2=pulseIn(echo2,HIGH);

  digitalWrite(trig3,HIGH);
  digitalWrite(trig3,LOW);
  time3=pulseIn(echo3,HIGH);
  
  dist1=time1*0.034/2;
  dist2=time2*0.034/2;
  dist3=time3*0.034/2;

  Serial.print("distance1:");
  Serial.println(dist1);
  Serial.print("distance2:");
  Serial.println(dist2);
  Serial.print("distance3:");
  Serial.println(dist3);
  delay(1000);

  if(dist1==6 && dist2==6)
  {
    right();
    Serial.println("right");
  }
  if(dist1==5 && dist3==5)
  {
   left();
    Serial.println("left");
  }
  if(dist2==5 && dist3==5)
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
  digitalWrite(enA,240);
  digitalWrite(enB,230);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}

void right(){
  digitalWrite(enA,240);
  digitalWrite(enB,230);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  

}
