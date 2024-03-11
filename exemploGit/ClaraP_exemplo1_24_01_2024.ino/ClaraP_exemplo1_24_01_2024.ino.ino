//Declaração de variáveis de entrada 
 int N1;
 int N2;
 int N3;

//Declaraçao da variável de saída//-
 int S;


void setup() {
  // Configuração inicial do sistema 
 // Será executada apenas no inicio 
  N1 = 1;
  N2 = 2;
  N3 = 3;
  S = 0;

   //Processamento das entradas
  S = N1 + N2 + N3;

}

void loop() {
  // Código que será executado repetidamente
  Serial.print("A soma é: ");
  Serial.print(S);//Mostra o valor da soma e muda o curso de linha 
  delay(1000); //Espera um segundo antes de seguir o loop
}
