int mad(int list[], int len){
   int i = 0;
   int t = 0;
   while (i < len){
      t = t + list[i];
      i++; 
   }
   return t;
}

int madder(int list[], int len){
   int i = 0;
   int t = 0;
   while (i < len){
      t = t + list[i];
      i++; 
   }
   return t / len;
}

int high(int list[], int len){
   int i = 0;
   int t = 0;
   for (int i = 0;i < len; i++){
      if (list[i] > t){
          t = list[i];
      }
   }
   return t;
}

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
  
  Serial.begin(9600);
  //int result = mad(nums, 4);
  //Serial.println(result);

   //int result = madder(nums, 4);
   //Serial.println(result);

   //result = madder(nums2, 5);
   //Serial.println(result);


   int result = high(nums, 4);
   Serial.println(result);

   result = high(nums2, 5);
   Serial.println(result);
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
