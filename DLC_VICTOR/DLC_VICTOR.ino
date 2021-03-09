#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;
void setup() {
  lcd.begin(16,2);
  pinMode(switchPin,INPUT);
  lcd.print("que dice");
  lcd.setCursor(0,1);
  lcd.print("15");
}
void loop(){
switchState = digitalRead(switchPin);
if(switchState!=prevSwitchState){
  if(switchState == LOW){
    reply = random(8);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("MiMejorAmigo:");
    lcd.setCursor(0, 1);
switch(reply){
  case 0:
  lcd.print("S");
  break;
  case 1:
  lcd.print("T");
  break;
  case 2:
  lcd.print("I");
  break;
  case 3:
  lcd.print("T");
  break;
  case 4:
  lcd.print("C");
  break;
  case 5:
  lcd.print("H");
  break;
  case 6:
  lcd.print("STITCH");
  break;
  case 7:
  lcd.print("@_.elrodriiguuez06 seguirme en insta");
  break;
}
  }
}
prevSwitchState = switchState;
  }
