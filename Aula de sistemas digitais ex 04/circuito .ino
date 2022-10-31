// Declaração das variavies referentes aos pinos digitais

int pinBuzzer = 7; 
int pinSensor = 8;
int pinLed = 12;
int valorSensor = 0;



  void setup(){
  // Inicializar o serial monitor
  Serial.begin(9600);
  // Definir se os pinos são de entrada ou saida
  pinMode(pinBuzzer, OUTPUT);
  pinMode(pinSensor, INPUT);
  pinMode(pinLed, OUTPUT);

}



void loop() {
  // Ler o valor do sensor (1 quando detectar o movimento e 0 quando NÃO detectar)
  valorSensor = digitalRead(pinSensor);
  Serial.print("Valor do sensor:");
  Serial.println(valorSensor);
  // Verificar se ocorreu movimento
  if(valorSensor == 1){
    ligarAlarme();
  }else{
    desligarAlarme();
  }
}




void ligarAlarme(){
  digitalWrite(pinLed, HIGH);
  tone(pinBuzzer, 1500);
  delay (4000);
}


void desligarAlarme(){
  digitalWrite(pinLed, LOW);
  noTone(pinBuzzer);
}

