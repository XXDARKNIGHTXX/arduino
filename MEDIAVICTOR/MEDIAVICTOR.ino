
float notas[] = { 8.5, 6.3, 2.6} ;
int numeroNotas = 3;
float sumaNotas = 0;
float mediaAritmeticaNotas = 0;
float mediaNotas;

void setup() {
  for (int iterador = 0; iterador < numeroNotas; iterador ++) {
    sumaNotas = sumaNotas + notas[iterador];
    Serial.println(sumaNotas);
    }
mediaNotas = sumaNotas / numeroNotas;

Serial.begin(9600); // solo una vez porque esto inicializa
Serial.println("La media de las notas");
Serial.println(mediaNotas);

}
void loop() {
  // put your main code here, to run repeatedly:

}
