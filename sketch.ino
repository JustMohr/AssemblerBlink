extern"C"{
  void start();
}

void setup() {
  //Pin 45
  start();
}

void loop() {
  
  digitalWrite(45, HIGH);
  delay(1000);
  digitalWrite(45, LOW);
  delay(1000);

  }
