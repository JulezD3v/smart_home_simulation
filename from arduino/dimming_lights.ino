void setup(){

}

void loop(){
  for (int i = 0; i <= 250; i = i + (50)) {
    analogWrite(3,i);
    delay(1000);
  }
  for (int i = 250; i >= 0; i = i + (-50)) {
    analogWrite(3,i);
    delay(1000);
  }

}
//D3 is red for a mordern effect reduce range of step from 50
//0 - 250 