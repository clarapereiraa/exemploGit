//CONSTANTE PARA O PINO DA BUZZER
#define botao 8
#define buzina 2
int led = 4;
bool status = false;

void setup() {
  Serial.begin(9600);
  pinMode(botao, INPUT);
  pinMode(buzina, OUTPUT);
  pinMode(led, OUTPUT);
  delay(1000);  // parada estrategica
}

void loop() {
  Serial.println(digitalRead(botao));

  if (digitalRead(botao) == 1) {
    status = true;
    tone(buzina, 523);  // liga a buzina, Tom (dó)
    digitalWrite(led, HIGH);
  } else {
    status = false;
    noTone(buzina);  //desliga a buzina
    digitalWrite(led, LOW);
  }
}