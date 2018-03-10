int led = 13;

void setup() {
  // configuração
  pinMode(led, OUTPUT);  

}

void loop() {
  // inicio
  digitalWrite(led, HIGH);
  delay(5000);
  digitalWrite(led, LOW);
  delay(10000);
}
