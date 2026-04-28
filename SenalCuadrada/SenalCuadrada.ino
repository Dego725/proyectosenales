#include <TimerOne.h>

#define T_uS 500000 //Periodo en microsegundos: 500ms
#define duty_cycle 512
#define salida1 9
#define entrada1 0

int estado = 0;

void setup() {
  
  Serial.begin(115200); //Inicializar monitor serial

  Timer1.initialize(T_uS);  //Inicializar el timer
  Timer1.pwm(salida1, duty_cycle); //Inicializar pwm

  pinMode(entrada1, INPUT);


}

void loop() {
  
  estado = analogRead(entrada1);
  Serial.println(estado);
  delay(10);

}
