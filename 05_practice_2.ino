void setup(){
  pinMode(7, OUTPUT);
}

void loop(){
  digitalWrite(7, 0);
  delay(1000);
  int i = 1;
  while (i < 6){
    digitalWrite(7, 1);
    delay(100);
    digitalWrite(7, 0);
    delay(100);
    i += 1;
  }
  digitalWrite(7, 1);
  while(1){}
}
