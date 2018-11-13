unsigned long time;

void setup() {
  
 Serial.begin (9600);
}

void loop() {
  
  float x;
  float Rcardiaque;
  
 //*Génerer un nombre random; 
 x = random(700, 750);

 //*Calcul des battements cardiaques
 Rcardiaque =  ( 1000 / x )* 60;
 
 //* Délai d'affichage
 delay(500);
 Serial.println ("Battements cardiaques/minute");
 Serial.println (Rcardiaque);

 //*Ajouter les ports correspondants aux leds du coeur (9)
 digitalWrite(0,HIGH);
 digitalWrite(0,LOW);
 delay(20);

//*
 time = millis();
 (delay)(500);
 Serial.println("Temps écoulé");
 Serial.println(time);
 
}
