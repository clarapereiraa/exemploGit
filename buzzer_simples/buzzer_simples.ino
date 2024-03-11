//constante para o pino da buzzer
#define pinoBuzzer 2
 #define pinoledVermelho 3
 
void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoledVermelho, OUTPUT);
  delay(1000);  // parada estrategica
}

void loop() {
  tone(pinoBuzzer,523);//nota musical dó
  digitalWrite(pinoledVermelho, HIGH);
  delay(1000);
  noTone(pinoBuzzer);//desliga a buzzer
  digitalWrite(pinoledVermelho, LOW);// apaga o LED
  delay(1000);
}
