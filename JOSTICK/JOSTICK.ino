const  int pinBoton = 3 ;
const  int pinEjeY = A1;
const  int pinEjeX = A0;
 
 configuración vacía () {
  pinMode (pinBoton, ENTRADA);
  digitalWrite (pinBoton, ALTO);
  De serie. comenzar ( 9600 );
}
 
 bucle vacío () {
  De serie. imprimir ( " Boton:   " );
  De serie. imprimir ( digitalRead (pinBoton));
  De serie. imprimir ( " \ n " );
  De serie. imprimir ( " Eje X: " );
  De serie. imprimir ( analogRead (pinEjeX));
  De serie. imprimir ( " \ n " ); // esto es un salto de linea
  De serie. print ( " Eje Y: " );
  De serie. println ( analogRead (pinEjeY));
  De serie. imprimir ( " \ n \ n " );
  retraso ( 150 );
}


    int duracionNota = 1000 / duracionDeNotas[estaNota];
    tone(pinAltavoz, frecuenciasMelodia[estaNota], duracionNota);
    digitalWrite(pinLed,LOW);
    int pausaEntreNotas = duracionNota * 1.30;
    delay(pausaEntreNotas);
    digitalWrite(pinLed,HIGH);
    noTone(pinAltavoz);
  }
  iniciarDatosAleatorios();
}
