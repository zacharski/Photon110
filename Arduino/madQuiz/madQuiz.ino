int mad(int list[], int len){
   int i = 0;
   int t = 0;
   while (i < len){
      t = t + list[i];
      i++; 
   }
   return t;
}


void setup() {
  int nums[] = {10, 40, 20, 30};

  int nums2[] = {50, 10, 40, 20, 30};
  
  Serial.begin(9600);
  int result = mad(nums, 4);
  Serial.println(result);
 
}

void loop() {
  // put your main code here, to run repeatedly:

}