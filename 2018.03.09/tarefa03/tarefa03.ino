int led1 = 13;

int led2 = 12;

void setup() {
  // configuração
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 

}

void loop() {
  // inicio
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  digitalWrite(led1, LOW);
  delay(1000);
}
