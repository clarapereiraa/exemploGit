/*Declaração de constante que armazena o pino do push button*/
#define pinoButton 8 

//declaração da variavel de estado do botão
bool status = false;

void setup() {
 //Definir a modalidade do pino
 pinMode(pinoButton, INPUT);

 Serial.begin(9600);

 delay(1000); //parada estrategica

}

void loop() {
  //Lendo o pino digital atraves da constante
  Serial.println(digitalRead(pinoButton));
  
  if(digitalRead(pinoButton) == 1 && status == false){
    Serial.println("Botao apertado ON...");
    status = true;
  }
  else if(digitalRead(pinoButton) == 1 && status == true){
    Serial.println("Botao apertado OFF...");
    status = false;
  }


  delay(1000); //parada estrategica para leitura 
}
