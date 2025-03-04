const int Temperature = A0;
int input_val = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  input_val = analogRead(Temperature);
  Serial.print("Temperature value is : ");
  Serial.println(input_val);
  delay(1000); 
}

