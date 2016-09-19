
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

void setup() {
  int nums[] = {10, 40, 20, 30};

  int nums2[] = {50, 10, 40, 20, 30};
  
  Serial.begin(9600);
  int result = high(nums, 4);
   Serial.println(result);

   result = high(nums2, 5);
   Serial.println(result);
}

void loop() {
  // put your main code here, to run repeatedly:

}
