int data=0;
int enA=2;
int enB=7;
int in1=3;
int in2=4;
int in3=5;
int in4=6;
void setup(){
  pinMode(enA,OUTPUT);
  pinMode(enB,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  if(Serial.available()>0)
  {
  data=Serial.read();
  Serial.println(data);
  }
  if(data==70)
  {
    forward();
    Serial.println("forward");
  }
  if(data==66)
  {
    backward();
    Serial.println("backward");
  }
  if(data==82)
  {
    right();
    Serial.println("rigth");
  }
  if(data==76)
  {
    left();
    Serial.println("left");
  }
  if(data==83)
  {
    brake();
  }
}
void forward(){
  analogWrite(enA,255);
  analogWrite(enB,255);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void backward(){
  analogWrite(enA,255);
  analogWrite(enB,255);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
void left(){
  analogWrite(enA,255);
  analogWrite(enB,255);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
void right(){
  analogWrite(enA,255);
  analogWrite(enB,255);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void brake(){
  analogWrite(enA,0);
  analogWrite(enB,0);
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}

