#define trigPin 13
#define echoPin 12
#define led 11
#define led2 10
#include <Servo.h>  // servo library

const int buzzerPin = 9;
int t = 0;
int freq[] = {294, 333, 392, 440, 523};
int tempo = 100;
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  //servo1.attach(2);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  
  if (distance >= 80 || distance <= 0){
    Serial.println("Out of range");
  }
  else {
    
    Serial.print(distance);
    Serial.println(" cm");
    //figure out the note
    t = distance / 16;
    tone(buzzerPin, freq[t], tempo * 2);
    delay(tempo * 2);
    //tone(buzzerPin, freq[t], tempo );
    //delay(tempo);
    //tone(buzzerPin, freq[t] * 2, tempo);
   // delay(tempo);
    
    
    
    
  }
  //delay(500);
}

