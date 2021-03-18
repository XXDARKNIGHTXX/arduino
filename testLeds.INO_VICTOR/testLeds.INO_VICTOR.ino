const int led1Pin = 11;
const int led2Pin = 5;
const int led3Pin = 3;

void setup() {
  // put your setup code here, to run once:
pinMode(led1Pin,OUTPUT);
pinMode(led2Pin,OUTPUT);
pinMode(led3Pin,OUTPUT);

}

void loop() {
digitalWrite(led1Pin,HIGH);
digitalWrite(led2Pin,HIGH);
digitalWrite(led3Pin,HIGH);
delay(500);
digitalWrite(led1Pin,LOW);
digitalWrite(led2Pin,LOW);
digitalWrite(led3Pin,LOW);
delay(500);
}
