unsigned int waitTime; // hold a pause before turn on light
unsigned int startTime; // время начала отсчета
unsigned int reactTime; // вычислительное время реакции

void setup() 
{
  Serial.begin(9600); // устанавливаем последовательный режим связи
  pinMode(13, OUTPUT); // конфигурируем 13 вывод для вывода данныз для управления светодиодом
  pinMode(12, OUTPUT); // конфигурируем 12 вывод для вывода данныз для управления красным светодиодом
  pinMode(11, OUTPUT); // конфигурируем 11 вывод для вывода данныз для управления зеленым светодиодом

  pinMode(3, INPUT); // когфигурируем 13 вывод для ввода данных с кнопки
  randomSeed(analogRead(A5));
}
void loop() {
  Serial.println("Когда загорится светодиод, нажмите кнопку!");
  Serial.println("Наблюдайте за светодиодом. Готовы?");
  waitTime = random(2000, 4000); // произвольное время выдержки перед включением светодиода от 2000 до 4000 мс
  delay(waitTime);
  // включаем светодиод
  digitalWrite(13, HIGH);

  startTime = millis(); //устанавливаем начальное время

  // выполняем ничего не делающий цикл, пока не будет нажата кнопка
  while(digitalRead(3)== HIGH)
    {
      }

  reactTime = millis() - startTime; //вычисляем время реакции

  digitalWrite(13, LOW); // выключаем светодиод

  if (reactTime<=215) {
     digitalWrite(11, HIGH); // включаем зеленый светодиод
     digitalWrite(12, LOW); // выключаем красный светодиод

    }
  else {

     digitalWrite(12, HIGH); // включаем зеленый светодиод
     digitalWrite(11, LOW); // выключаем красный светодиод
    }
  //отображаем результат на мониторе порта (Serial Monitor)

  Serial.print("Отлично справились! Ваше время реакции: ");
  Serial.print(reactTime);
  Serial.print(" миллисекунд\n");
  delay(1000); // выдерживаем короткую паузу, прежде чем начинать снова
  
  
}
