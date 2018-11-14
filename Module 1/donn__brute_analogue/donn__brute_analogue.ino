/*Capteur infrarouge pour calcul du pouls
On enregistre les données brutes pendant 2,5 secondes */

unsigned long time;


void setup() {

  Serial.begin(9600);
  
  time = millis();
 
  while((millis()-time)<5000){
    analogRead(0);
  }

  time = millis();

  // on affiche au moniteur série pendant 2,5 secondes
  while((millis()-time)< 2500){
    delay(100);
    Serial.println(analogRead(0));
  }

}


void loop() {


}
