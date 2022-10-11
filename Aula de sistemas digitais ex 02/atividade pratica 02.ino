// variavel global que armazena a posição lida nos eixos do joystick

int joystick =0;
int eixoX = A0;
int eixoY = A1;
int eixoZ = 2;


void setup() {
  pinMode(eixoZ,INPUT);
  // ativando o serial monitor que exibira os valores lidos pelo joystick
  Serial.begin(9600);
}

void loop() {
  // ler o valor do eixo x

  joystick = analogRead(eixoX);

  // imprimir o valor do eixo x
  Serial.println(" x= ");
  Serial.print(joystick);

  joystick = analogRead(eixoY);
  Serial.println(" y= ");
  Serial.print(joystick);

  joystick = digitalRead(eixoZ);
  Serial.println(" z= ");
  Serial.print(joystick);

  delay (500);






  
}
