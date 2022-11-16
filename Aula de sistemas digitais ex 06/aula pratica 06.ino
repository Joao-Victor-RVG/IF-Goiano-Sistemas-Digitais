int BUZZER =  5;
void setup() 
{
    pinMode(BUZZER, OUTPUT); // Define o pino do Buzzer como Saida
}

void loop() 
{
    tone(BUZZER,261);       // Aciona o BUZZER na frequencia relativa ao Dó em Hz
    delay(200);             // Espera um tempo para Desativar
    noTone(BUZZER);         //Desativa o BUZZER
    tone(BUZZER,293);       // Aciona o BUZZER na frequencia relativa ao Ré em Hz
    delay(200);    
    noTone(BUZZER);         // Aciona o BUZZER na frequencia relativa ao Mi em Hz
    tone(BUZZER,329);      
    delay(200);
    noTone(BUZZER);     
    tone(BUZZER,349);       // Aciona o BUZZER na frequencia relativa ao Fá em Hz
    delay(200);    
    noTone(BUZZER); 
    tone(BUZZER,392);       // Aciona o BUZZER na frequencia relativa ao Sol em Hz
    delay(200);
    noTone(BUZZER); 
}