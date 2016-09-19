int led = 13;
int wait = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void dot(){
  digitalWrite(led, HIGH);
  delay(wait);
  digitalWrite(led, LOW);
  delay(wait);
}

void dash(){
  digitalWrite(led, HIGH);
  delay(wait * 3);
  digitalWrite(led, LOW);
  delay(wait);
}

void doS(){
  dot();
  dot();
  dot();
  delay(wait * 2);

}

void doO(){
  dash();
  dash();
  dash();
}
void loop() {
  // put your main code here, to run repeatedly:
  doS();
  doO();
  doS();
  delay(1000);  
}
