#include <Arduino.h>

int contador = 0;

String saludo = "Hola mundo";
bool activado;

void setup(){

  Serial.begin(9600);
  delay(100);
  Serial.println(saludo);
  delay(2000);
  saludo = "Adios alumnos";
  Serial.println(saludo);


}

void loop(){

  contador = contador+1;
  Serial.print("El valor de cuenta es -->"+String(contador));
  delay(1000);

}
