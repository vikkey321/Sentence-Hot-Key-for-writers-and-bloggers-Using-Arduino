#include "Keyboard.h"

const int buttonPin1 = 9;          // input pin for pushbutton1
const int buttonPin2 = 8;          // input pin for pushbutton2
const int buttonPin3 = 7;          // input pin for pushbutton3
const int buttonPin4 = 6;          // input pin for pushbutton4
const int buttonPin5 = 5;          // input pin for pushbutton5

//---------  ********************** ---------------//
//--------- Change your messages here -------------//
//---------  ********************** ---------------//
String message1= "555 Timer IC";                                //Message1
String message2 = "Arduino tutorial" ;                          //Message2
String message3 = "Basic Electronics" ;                         //Message3
String message4 = "Huston" ;                                    //Message4
String message5 = "Don't forget to subscribe to my channel" ;   //Message5
//---------  ********************** ---------------//

void setup() {
  // make the pushButtons pin an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  // read the pushbuttons:
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);
  int buttonState3 = digitalRead(buttonPin3);
  int buttonState4 = digitalRead(buttonPin4);
  int buttonState5 = digitalRead(buttonPin5);
  
  // if the button state has changed,
  if (buttonState1 == HIGH) {
   Keyboard.println(message1);
  }
  else if (buttonState2 == HIGH) {
   Keyboard.println(message2);
  }
  else if (buttonState3 == HIGH) {
   Keyboard.println(message3);
  }
  else if (buttonState4 == HIGH) {
   Keyboard.println(message4);
  }
  else if (buttonState5 == HIGH) {
   Keyboard.println(message5);
  }
  delay(300);
}
