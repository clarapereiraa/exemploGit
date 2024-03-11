//Declaraçao de variaveis para números decimais 
 float sal_atual, novo_sal;

void setup() {
  // Configuração inicial do sistema 
 // Será executada apenas no inicio 
  
 sal_atual = 1200;
 
//Verificando o valor do salário com a condicional 
 if(sal_atual <= 500 && sal_atual > 0)
 {//Inicio
 novo_sal = sal_atual * 1.2;
 }//Fim
  else if (sal_atual > 500)
{
   novo_sal = sal_atual * 1,1;
}
 else{
   novo_sal = -1;
}

 //Iniciando a comunicação com o Monitor Serial
 Serial.begin(9600);
}

void loop() {
  // Código que será executado repetidamente
  // Serial.printIn("Hoje é o ultimo dia do mes de janeiro!!!"); //Mostra a frase no monitor

  if(novo_sal == 0){
     Serial.print("Digite um salário válido!!!");
}

 else{

  // Exibindo o novo salário
  Serial.print("Novo Salário: ");
  Serial.print(novo_sal);
  Serial.print("-------------------------");

 }

}
  

  

