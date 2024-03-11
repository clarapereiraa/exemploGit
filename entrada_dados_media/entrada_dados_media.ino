/*Declaração das variaveis / números Reais*/
float nota1, nota2, nota3, peso1, peso2, peso3, media; 

void setup() {
   //Inicia a comunicação om o Serial Monitor
   Serial.begin(9600);
 
  delay(1000); //Espera a estratégia
}

void loop() {
  Serial.print("digite a nota 1:");
  //while = comando de repetição "enquanto"
  while(Serial.available() == 0){
    //Aguarda a entrada de valores do usuário
    
  }
  //Lê o valor do serial e guarda na variavel nota1
  nota1 = Serial.parseFloat();
  Serial.println
 ("digite a nota 1:")

  Serial.print("Digite a nota 2:");
  while(Serial.available() == 0){
    //Aguarda a entrada da nota 2
  }
  nota2 = Serial.parseFloat();
 
 Serial.println("Digite a nota 3: ");
 while(Serial.available() == 0){
  //Aguarda a entrada da nota 3
}
 peso1 = Serial.parseFloat();

 //PESO 2
 Serial.println("Digita o peso 2:");
 while(Serial.available() == 0){
  //Aguarda a entrada do peso 2
}
 peso2 = Serial.parseFloat();

 //PESO 3
 Serial.println("Digita o peso 3:");
 while(Serial.available() == 0){
  //Aguarda a entrada do peso 3
}
 peso3 = Serial.parseFloat();

//Calculo da media ponderada;
 media = (nota1*peso1 + nota2*peso2 + nota3*peso3) /
 (peso1 + peso2 + peso3);

 //Exibe o valor da media calculada
 Serial.print("A media ponderada e; ");
 Serial.println(media);
 delay(1000);
}
  
//criando uma funcao chamada
 float aguardaEntrada(){
 white(!Serial.available()){
    //Aguarda ate que um valor seja digitado
  }

  //Retornar o valor digitado no serial em tipo floar
  return Serial.parseFloat();
}
