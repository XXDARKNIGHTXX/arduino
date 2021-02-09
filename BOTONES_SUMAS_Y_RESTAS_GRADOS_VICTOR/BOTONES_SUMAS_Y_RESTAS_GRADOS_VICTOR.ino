#include <Servo.h>
Servo myServo;
int angle =0;
const int pinButton1 = 2;
//2
const int pinButton2 = 4;
//3
int button1State=0;
int button2State=0;

void setup() {
  myServo.attach(9);
  Serial.begin(9600);
  pinMode(pinButton1, INPUT);
  pinMode(pinButton2, INPUT);
}
void loop() {

//Leer el estado del botón y guardarlo en la variable Button1State

button1State = digitalRead(pinButton1);


//Mandamos mensaje a ordenador

Serial.print("El botón uno me dice que su estado es: ");
Serial.print(button1State);

//tomamos la decisión de que si ButtonState1 es igual a 1 

if (button1State ==1){
//El angulo valdra lo mismo pero +10
  angle = angle +10;
}
//Mandamos mensaje a ordenador

Serial.print(", angle: ");
Serial.println(angle);
//Si el angulo es mayor 179 entonces lo dejamos en 179

if (angle > 179){
  angle = 179;
}
//Leer el estado del botón y guardarlo en la variable Button2State

button2State = digitalRead(pinButton2);


//Mandamos mensaje a ordenador





Serial.print("El botón dos me dice que su estado es: ");
Serial.print(button2State);

//tomamos la decisión de que si ButtonState1 es igual a 1
if (button1State ==1){
//El angulo valdra lo mismo pero -0
  angle = angle - 10;
}
//Mandamos mensaje a ordenador

Serial.print(", angle: ");
Serial.println(angle);
//Si el angulo es menor 0 entonces lo dejamos en 0

if (angle < 0){
  angle = 0;
}
//Leer el estado del botón y guardarlo en la variable Button2State





//Le decimos al Servo que se vaya al angulo calculado 
myServo.write(angle);
delay(15);
//Y tenemos un retraso de 15 milisSegundos
}
