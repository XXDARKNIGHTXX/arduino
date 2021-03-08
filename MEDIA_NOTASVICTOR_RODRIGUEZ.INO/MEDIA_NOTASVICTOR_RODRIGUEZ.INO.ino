int notas[]= {3,8,9,5,6};
int numeroNotas = 5;
//VICTOR RODRIGUEZ
void setup(){
 int notaMinima = 10;
  int sumaNotas = 0;
  for(int i = 0;i <numeroNotas;i++){
    sumaNotas= sumaNotas+notas[i];
  //sumaNotas = sumaNotas+Notas[0]
  //sumaNotas = sumaNotas+ sumaNotas[13]
  if(notas[i]<notaMinima){
    notaMinima = notas[i];
  }
  Serial.print("Notamedia");
  Serial.print(notaMinima);
  //asi repetibamente sumando +1 hasta que se quede sin elementos.
  }
float mediaNotas = sumaNotas/numeroNotas;
 Serial.begin(9600);
 Serial.print("Nota media):");
 Serial.println(mediaNotas);
 Serial.print("nota MINIMA):");
 Serial.println(notaMinima);
 Serial.println("Calculo de si tocar hacer el examen con el operador Y");
 if (mediaNotas < 5 || notaMinima <= 3) {
  Serial.println("toca hacer el examen de acceso");
 }
else {
  Serial.println("No toca hacer el examen de acceso");
}

}
 void loop(){
  //put your main code here, to run reapeatedly;
 
 }
