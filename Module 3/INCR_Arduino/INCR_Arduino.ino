// Test Module 3
int Incr = 0;
int pouls = 70;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Incr = Incr + 1;
  if(pouls == 70){
    pouls = 70 + 5;
     Serial.println(pouls);
  }
  if(pouls == 75){
   pouls = 75 - 5; 
   Serial.println(pouls);
  }
  
  Serial.println(Incr);
  delay(100);        
}
