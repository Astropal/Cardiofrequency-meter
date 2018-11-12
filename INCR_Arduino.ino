// Test Module 3
int Incr = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Incr = Incr + 1;
  Serial.println(Incr);
  delay(100);        
}
