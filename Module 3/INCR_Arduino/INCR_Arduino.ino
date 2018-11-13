// Test Module 3
int Incr = 0;
int pouls = 70;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Incr = Incr + 1;
  pouls = pouls + 1;
  if(pouls == 75){
    pouls = pouls - 5;
  }

   
  Serial.print(pouls);
  Serial.print(";");
  Serial.print(Incr);
  Serial.print("\n");
  delay(100);        
}
