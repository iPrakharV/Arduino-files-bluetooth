char data = 0;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available() >0)
  {
    data = Serial.read();

    Serial.print(data);
    Serial.print("\n");
  }
  // put your main code here, to run repeatedly:

}
