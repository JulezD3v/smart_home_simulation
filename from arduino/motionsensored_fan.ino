void setup(){
  pinMode(2, INPUT);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop(){
  if (digitalRead(2) == 1) {
    digitalWrite(10,HIGH);
    digitalWrite(6,HIGH);

  }
  if (digitalRead(2) == 0) {
    digitalWrite(10,LOW);
    digitalWrite(6,LOW);

  }

}