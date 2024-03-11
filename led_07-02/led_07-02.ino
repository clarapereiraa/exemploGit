//Declaração das variaveis que representam os pinos dos leds
int ledAmarelo = 8;
int ledVermelho = 9;
int ledVerde = 10;
int ledAmarelo1 = 13;
int ledVermelho1 = 12;
int ledVerde1 = 11;

void setup() {
  //Definindo os tipos dos pinos
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo1, OUTPUT);
  pinMode(ledVermelho1, OUTPUT);
  pinMode(ledVerde1, OUTPUT);

  delay(1000);
}

void loop() {

  // Semáforo 1

  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledVermelho1, HIGH);

  delay(3000);

  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, HIGH);

  delay(3000);

  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledVermelho1, LOW);
  digitalWrite(ledVerde1, HIGH);

  delay(3000);

  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledAmarelo1, HIGH);

  delay(3000);

  digitalWrite(ledAmarelo1, LOW);
  digitalWrite(ledVermelho1, HIGH);
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledVermelho, LOW);

  delay(3000);
}