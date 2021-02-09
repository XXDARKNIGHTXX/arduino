int buttonPin = 10;
int buttonPin2 = 13;
bool play = false;
bool isTheButtonBeingPressed = false;
int switchState =0;
#include <Servo.h>
Servo myServo;
int potVal;
int angle;
void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  Serial.begin(9600);
  pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
checkButton();
if (play) {
potVal = analogRead(buttonPin);
Serial.print("potVal: ");
  Serial.print(potVal);
  angle = map(potVal,0,1023,0,179);
  Serial.print(",angle:");
  Serial.print(angle);
  myServo.write(angle);
  delay(15);
}
}
void checkButton(){
  switchState = digitalRead(buttonPin);
  if(switchState == HIGH){
    if(isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
    }
}
else{isTheButtonBeingPressed = false;
}
switchState = digitalRead(buttonPin2);
  if(switchState == HIGH){
    if(isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
    }
}
else{isTheButtonBeingPressed = false;
}
}
