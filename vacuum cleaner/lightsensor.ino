void setup(){
  Serial.begin(9600);
  Serial.begin(9600);
  pinMode(8, INPUT);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
}

void loop(){
  Serial.print("left ");
  Serial.println(digitalRead(8));
  Serial.print("middle ");
  Serial.println(digitalRead(7));
  Serial.print("right ");
  Serial.println(digitalRead(6));
  delay(300);

}
