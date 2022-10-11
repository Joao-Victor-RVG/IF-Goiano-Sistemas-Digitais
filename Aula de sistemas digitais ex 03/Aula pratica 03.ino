byte pinosLed[] = {7,8,9,10,11};
int ledDelay;
int dir = 1;
int ledAtual = 0;

unsigned long intervaloTempo;
int pinoPot = A2;

void setup() {
  for(int x =0; x<5; x++) {//para x = 0 ate meno que/ 5 x é incrementado
    pinMode(pinosLed[x], OUTPUT); // Declarando o pino como saida
  }
  intervaloTempo = millis();

}

void loop() {
  ledDelay = analogRead(pinoPot);
  if((millis() - intervaloTempo) > ledDelay){ // se millis menos intervalor de tempo gerado pelo potenciometro é este valor vai definir a velocidade 
      trocaLed();
      intervaloTempo = millis();
  } 
}

void trocaLed(){
  for(int x=0; x<5; x++){
    digitalWrite(pinosLed[x], LOW);
  }
  digitalWrite(pinosLed[ledAtual], HIGH);
  ledAtual += dir;
  if(ledAtual == 5) {dir= -1;}
  if(ledAtual == 0) {dir= 1;}
}