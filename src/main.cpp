#include <Arduino.h>

//Agregamos las libreriras del servo
#include <ESP32Servo.h>

//Instanciamos nuestro servo
Servo servo;
int pinServo = 33;
//Inicializamos la posicion (en grados) del servo
int pos = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  //Inicializamos la posicion del servo
  servo.attach(pinServo, 620, 2500);
  /*
    int attach(pin, min, max  ) - Attaches to a pin setting min and max
        values in microseconds; enforced minimum min is 500, enforced max
        is 2500. Other semantics are the same as attach().
  */

}

void loop() {
  // put your main code here, to run repeatedly:
  //delay(1000); // this speeds up the simulation
  //Serial.println("Hello, ESP32!");

  // Calibración
  servo.write(0);
  Serial.println("Servo 0");
  delay(2000);
  servo.write(90);
  Serial.println("Servo 90");
  delay(2000);  
  servo.write(180);
  Serial.println("Servo 180");
  delay(2000);

  /*
  //Ciclo que posicionara el servo desde 0 hsta 180 grados
  for (pos = 0; pos <= 180; pos += 1) {
    //Movemos el servo a los grados que le entreguemos
    servo.write(pos);
    //Esperamos 15 milisegundos
    delay(15);
  }
  //Ciclo que posicionara el servo desde 180 hsta 0 grados
  for (pos = 180; pos >= 0; pos -= 1) {
    //Movemos el servo a los grados que le entreguemos
    servo.write(pos);
    //Esperamos 15 milisegundos
    delay(15);
  }
  */



}
