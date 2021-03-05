//*  Documentación del programa
//*  Autore: Victor
//*  Fecha: 1/3/2021
//*  Código referencia: (url)
//*  Descripción del programa:
// Hardware necesario:


//Definiciones de constantes de pines
const int pinBoton = 3; 
const int pinEjeY = A1; 
const int pinEjeX = A0; 

const int pinAltavoz = 8;
const int pinLed = 9;

int valorEjeX = 0;
int valorEjeY = 0;
// nota
int frecuenciaNota = 440;
int duracionSonido = 250;

void setup() {
//inicializaciones
  pinMode(pinBoton, INPUT);
  digitalWrite(pinBoton, HIGH);
  Serial.begin(9600);

}

void loop() {
 valorEjeX = analogRead(pinEjeX);
 //>800, >1000, <800, >1023
  if (valorEjeX <100 && valorEjeX <200){
    digitalWrite(pinLed, HIGH);
  }
else{
  digitalWrite(pinLed, LOW);
}
valorEjeY = analogRead(pinEjeY);
if (valorEjeY < 223)
{
  tone(pinAltavoz,frecuenciaNota, duracionSonido);
  // tone(8, 440, 250)
}
else{
  noTone(pinAltavoz);
}
}
