void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hi");
  int i = 0;
  while (i < 10){
    Serial.println(i);
    delay(1000);
    i = i + 1;
  }
}
