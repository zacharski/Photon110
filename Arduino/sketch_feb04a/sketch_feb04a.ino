void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hi there");
//  int i = 1;
//  while (i < 11){
//    Serial.println(i);
//    delay(1000);
//    i = i + 1;
//  }

   int bryan;
   for (bryan = 1; bryan < 11; bryan++){
    Serial.println(bryan);
    delay(500);
   }
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
