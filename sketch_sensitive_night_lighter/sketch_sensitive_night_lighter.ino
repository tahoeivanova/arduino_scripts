// ночник, меняющий цвет и реагирующий на степень освещенности

int calibrationValue;
int lightValue;
int delay_time;


void increase_light() {

  delay_time = 50;
  int i;
  for (i=1; i<=170; i++) {
    lightValue = analogRead(A0);

    if (lightValue < calibrationValue -50) {
      analogWrite(11, 210); //красный
      analogWrite(10, 60); //зеленый
      analogWrite(9, i); //синий
      delay(delay_time);
      }
    }
  };

void decrease_light() {

  delay_time = 50;
  int i;
  for (i=170; i>=1; i--) {
    lightValue = analogRead(A0);

    if (lightValue < calibrationValue -50) {

      analogWrite(11, 210); //красный
      analogWrite(10, 60); //зеленый
      analogWrite(9, i); //синий
      delay(delay_time);
      }
    }
  };

void manage_colors() {
  increase_light();
  decrease_light();
  };

void setup() {
  pinMode(11, OUTPUT); // красный
  pinMode(10, OUTPUT); // зеленый
  pinMode(9, OUTPUT); // синий
  calibrationValue = analogRead(A0);

}

void loop() {

    lightValue = analogRead(A0);
    if (lightValue < calibrationValue -50) {

      manage_colors();
    }

    else {
    analogWrite(11, 0); //красный
    analogWrite(10, 0); //зеленый
    analogWrite(9, 0); //синий
      }


}
