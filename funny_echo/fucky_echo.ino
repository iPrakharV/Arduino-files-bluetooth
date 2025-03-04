int trig1=8;
int echo1=9;
long time;
int dis;
void setup() {
 pinMode(trig1,OUTPUT);
 pinMode(echo1,INPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(trig1,HIGH);
  digitalWrite(trig1,LOW);

  time=pulseIn(echo1,HIGH);
  dis=time*0.034/2;
  Serial.print("distance=");
  Serial.println(dis);
 
  delay(500);

}
