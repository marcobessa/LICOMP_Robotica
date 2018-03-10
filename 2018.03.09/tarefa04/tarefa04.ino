int led1 = 13;
int led2 = 12;
int led3 = 11;

void setup() {
  // configuração
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 
  pinMode(led2, OUTPUT); 
}

void loop() {
  // inicio
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(1000);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(1000);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(1000);
}
