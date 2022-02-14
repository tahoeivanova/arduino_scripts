void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  spinningLineLeft(125);
  spinningLineRight(125);
  spinningLineLeft(125);
  spinningLineLeft(125);
  spinningLineLeft(125);
  spinningLineRight(125);
  spinningLineLeft(125);
  spinningLineRight(125);
  spinningLineRight(125);
  spinningLineRight(125);




  
}

void verticalLine() {
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  }

void topLeftDiagonal() {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  }

void horizontallLine() {
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  }

void topRightDiagonal() {
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  }

void spinningLineLeft(int delayTime) {
  verticalLine();
  delay(delayTime);
  
  topRightDiagonal();
  delay(delayTime);

  horizontallLine();
  delay(delayTime);

  topLeftDiagonal();
  delay(delayTime);
  }

void spinningLineRight(int delayTime) {
  verticalLine();
  delay(delayTime);
  
  topLeftDiagonal();
  delay(delayTime);

  horizontallLine();
  delay(delayTime);


  topRightDiagonal();
  delay(delayTime);
  }
