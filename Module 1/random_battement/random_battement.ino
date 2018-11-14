//* Coraline Sipra
//* 13 Novembre 2018
//* Projet 1 CESI EXIA Groupe 5
//* Calculs des battements cardiaques et du temps mis en oeuvre


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

 //*Ajouter les ports correspondants aux leds du coeur (9) A completer demain avec Antoine
 digitalWrite(0,HIGH);
 digitalWrite(0,LOW);
 delay(20);

//* Affichage du temps lors de chaque battements
 time = millis();
 (delay)(500);
 Serial.println("Temps écoulé");
 Serial.println(time);
 
}
