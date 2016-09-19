

int power(int base, int exponent){
  int result = 1;
  for (int i = 0; i< exponent; i++){
     result = result * 2;
  }
  return result;
}
int freq(String note, int octave){
    String notes[] = {"C", "E", "G", "A"};
    int fr[] = {32, 41, 49, 55};

    int mult = power(2, octave - 1);
    int baseFreq = 0;
    
    for (int i = 0; i < 5; i++){
       if (notes[i] == note){
           baseFreq = fr[i];
       }
    }
    return baseFreq * mult;
}


void setup() {
   int nums[] = {10, 40, 20, 30};
   int nums2[] = {50, 10, 40, 20, 30};
   int result;
   Serial.begin(9600);
   Serial.println (power(2, 0));
   Serial.println (power(2, 1));
   Serial.println (power(2, 2));
   Serial.println (power(2, 3));

   result = freq("A", 4);
   Serial.println(result);
}

void loop() {
  // put your main code here, to run repeatedly:

}
