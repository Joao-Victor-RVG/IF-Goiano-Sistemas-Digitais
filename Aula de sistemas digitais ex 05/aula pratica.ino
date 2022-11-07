// inclusao da biblioteca Servo
#include <servo.h>

// Criar um Objeto da Biblioteca 
Servo servo_motor;

void setup(){
  servo_motor.attach(9);

}

void loop(){
  // comando para mandar o servo para posiçao 180 graus
  servo_motor.write(180);
  delay(500);
  servo_motor.write(0);
  delay(500);
  servo_motor.write(90);
  delay(500);

}

