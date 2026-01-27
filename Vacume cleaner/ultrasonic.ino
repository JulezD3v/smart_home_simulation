float checkdistance_12_13() {
  digitalWrite(12, LOW);
  delayMicroseconds(2);
  digitalWrite(12, HIGH);
  delayMicroseconds(10);
  digitalWrite(12, LOW);
  float distance = pulseIn(13, HIGH) / 58.00;
  delay(10);
  return distance;
}

void setup(){
  Serial.begin(9600);
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(13, INPUT);
}

void loop(){
  Serial.print("distance");
  Serial.println(checkdistance_12_13());
  delay(500);

}