void setup() {
 Serial.begin(9600);

}

void loop() {
  float sal, perc, aumento, novosal;

  //Recebendo o salario e o percentual
  Serial.println("Digite o salario do funcionario: ");
  while (!Serial.available());
  sal = Serial.parseFloat();

  Serial.println("Digite o percentual de aumento ");
  while (!Serial.available());
  perc = Serial.parseFloat();

  aumento = sal + perc / 100;

  novosal = sal + aumento;

  Serial.println("Valor  do aumento e ");
  Serial.println(aumento);
  Serial.print("Novo salario do funcionari e ");
  Serial.print(novosal);

  delay(1000);
}