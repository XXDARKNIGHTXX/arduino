/*
 * Nombre: VICTOR RODRIGUEZ ESTEBAN 
 * Fecha: 22/02/2021
 * 
 * Esta es una variación del ejercio 2 del "hiperespacio" del Starter kit
 * 
 * Esta varianción hace lo siguiente:
 * 
 * Si no pulsas, los 3 leds están apagados
 * 
 * Si pulsas, se encienden 2, espera 250 milisegundos, enciende los tres y espera dos segundos y medio. 
 * 
 */

int switchState = 0;

void setup() {
 
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,INPUT);
}

void loop() {
switchState = digitalRead(2);
if (switchState == LOW) {
  //BOTON NO PRESIONAD0
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5, LOW);
   }
   else { //boton presionado
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);

    delay(250); //espera 1 cuarto de segundo
    //permuta leds
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(2500); //espera 1 cuarto de segundo
   }
} //vuelve al bucle
