//LED light blinks
//#include <Arduino.h>
// int red = 7;
// void setup() {
//   pinMode(red, OUTPUT);   // Built-in LED
// }

// void loop() {
//   digitalWrite(red, HIGH);
//   digitalWrite(8,LOW);
//   delay(1000);
//   digitalWrite(red, LOW);
//   digitalWrite(8, HIGH);
//   delay(1000);
// }

// motion sensored fun

#include <Arduino.h>
//#include "fun.h"
//fun controll
int motorA = 10;
int motorB = 11;

void setup(){
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
}

void loop(){
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);

    delay(3000);

    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    delay(3000);

    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    delay(4000);

}

//void loop(){} Fun still running
