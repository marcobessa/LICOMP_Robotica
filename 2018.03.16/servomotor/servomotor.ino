// Projeto do braço mecânico
// saindo do servo motor :     P    V   B     Preto Vermelho Branco
//                             M    V   L     Marron Vermelho Laranja
//                             GND  5V  Controle(5)
//
// Quando executar - abrir o monitor da serial (botao superior direito da ide)
// inserir os codigos ... aaa ou ssss ou d
// enviar pra porta serial
//////////////////////////////////////////////////////////////////////////
#include <Servo.h>  // inclui a biblioteca de manipulação de servos motores.
Servo motor1;
int anguloM1 = 0;

void setup() {
  Serial.begin(9600);
  motor1.attach(5);  // declarando qual porta o motor estará ligado
}

void loop() {
  char tecla;
  tecla = Serial.read();
  
  //se pressionando
  if (tecla == 'a') {
    anguloM1 += 10;
    motor1.write(anguloM1);
    Serial.write(anguloM1);
  }
  else if (tecla == 's') {
    anguloM1 -= 10;
    motor1.write(anguloM1);
    Serial.write(anguloM1);
  }

  if (tecla =='d') {
    motor1.write(0);
  }

  delay(1000);
}
