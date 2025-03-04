 const int DataPin = 2;
  const int ClockPin = 3;
   const int LatchPin = 4;
 
 void setup() {
  // put your setup code here, to run once:
  pinMode(DataPin, OUTPUT);
  pinMode(ClockPin, OUTPUT);
  pinMode(LatchPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LatchPin, LOW);
  shiftOut(DataPin, ClockPin, LSBFIRST,225);
  digitalWrite(LatchPin, HIGH);
  delay(1000);
  digitalWrite(LatchPin, LOW);
  shiftOut(DataPin, ClockPin, LSBFIRST,225);
  digitalWrite(LatchPin, HIGH);
  delay(1000);
  

}
