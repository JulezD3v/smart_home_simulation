void setup(){
  pinMode(12, INPUT);
  pinMode(7, OUTPUT);
}

void loop(){
  if (digitalRead(12) == LOW) {
    digitalWrite(7,HIGH);

  }
  if (digitalRead(12) == HIGH) {
    digitalWrite(7,LOW);

  }

}
//buttons 12 controls LED 7