const int led1Pin = 11;
const int led2Pin = 5;
const int led3Pin = 3;
const int pinBoton = 7; 
const int pinBoton2 = 9;
const int pinEjeY = A1; 
const int pinEjeX = A0; 

bool tengoQueParpadear = true;

void setup() {
  // put your setup code here, to run once:
pinMode(led1Pin,OUTPUT);
pinMode(led2Pin,OUTPUT);
pinMode(led3Pin,OUTPUT);
pinMode(pinBoton2, INPUT);
pinMode(pinBoton, INPUT);
digitalWrite(pinBoton, HIGH);
}

void loop() {

int valorBoton= digitalRead(pinBoton);
int valorBoton2 = digitalRead(pinBoton2);
if(valorBoton == LOW || valorBoton2 == LOW){
  tengoQueParpadear = true;
}
else{
  tengoQueParpadear = false;
}
if(tengoQueParpadear){
  parpadear();
}

}

void parpadear() {
digitalWrite(led1Pin,HIGH);
digitalWrite(led2Pin,HIGH);
digitalWrite(led3Pin,HIGH);
delay(500);
digitalWrite(led1Pin,LOW);
digitalWrite(led2Pin,LOW);
digitalWrite(led3Pin,LOW);
delay(500);
}
