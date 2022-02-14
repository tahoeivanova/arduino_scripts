byte redPin = 13;
byte ylwPin = 12;
byte grnPin = 11;

void setup() {
  // red light
  pinMode(redPin, OUTPUT);
  // yellow light
  pinMode(ylwPin, OUTPUT);
  // green light
  pinMode(grnPin, OUTPUT);

}

void loop() {
  // turn on red light
  digitalWrite(redPin, HIGH);
  digitalWrite(ylwPin, LOW);
  digitalWrite(grnPin, LOW);
  delay(2000);

  // turn on green light
  digitalWrite(redPin, LOW);
  digitalWrite(ylwPin, LOW);
  digitalWrite(grnPin, HIGH);
  delay(1500);

  // turn on yellow light
  digitalWrite(redPin, LOW);
  digitalWrite(ylwPin, HIGH);
  digitalWrite(grnPin, LOW);
  delay(500);
  

}
