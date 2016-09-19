 
const int RED_PIN = D1;
const int GREEN_PIN = D2;
const int BLUE_PIN = D3;

int DISPLAY_TIME = 500;  // In milliseconds


void setup()
{
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}


void loop()
{
  simon();
}

void off(){
  
  // To Do
}

void red(){
  
  // To Do
}

void green(){
  
  // To Do
}
void blue(){
  
  // To Do
}
void cyan(){
  // To Do
}
void simon()
{
  red();
  off();
  red();
  green();
  off();
  red();
  green();
  blue();
  off();
  red();
  green();
  blue();
  cyan();
  off();
  off();
  
}

