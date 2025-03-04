 const int LED = 3;
 const int LED1 = 4;
 const int LED2 = 5;
 
 void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LED1, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(2000);
  digitalWrite(LED, LOW);
  delay(2000);
  digitalWrite(LED1, HIGH);
  delay(2000);
  digitalWrite(LED1, LOW);
  delay(2000);
  digitalWrite(LED2, HIGH);
  delay(2000);
  digitalWrite(LED2, LOW);

}
