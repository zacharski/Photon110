
int sensorPin = 0;    // The potentiometer is connected to
                      // analog pin 0
                      
int ledPin = 13;      // The LED is connected to digital pin 13



void setup() // this function runs once when the sketch starts up
{
  
  pinMode(ledPin, OUTPUT);
	
}


void loop() // this function runs repeatedly after setup() finishes
{
  int sensorValue;
  sensorValue = analogRead(sensorPin);   // this reads a value from 0 to 1023 

  digitalWrite(ledPin, HIGH);     // Turn the LED on
  delay(sensorValue);             // Pause for sensorValue
  digitalWrite(ledPin, LOW);      // Turn the LED off
  delay(sensorValue);             // Pause for sensorValue
}

