//* Coraline Sipra
//* 13 Novembre 2018
//* Cesi EXIA Groupe 5
//* Calcul des battements cardiaques + calcul du temps

//#include "cardio.h"*

float x;
float Rcardiaque;
unsigned long time;

void setup() {
  
 Serial.begin (9600);
}

  void random_() {
  
  //*Génerer un nombre random; 
  x = random(700, 750);

}

  void calcul(){

   random_ ();
  
 //*Calcul des battements cardiaques
 Rcardiaque =  ( 1000 / x )* 60;

}

  void  temps (){
  //*calcul du temps à chaque battement
  time = millis();
}


    void Affichage () {
    
    calcul ();
    temps ();

 
   //*Affichage format csv
   Serial.print (Rcardiaque);
   (delay)(500); //*Délai d'affichage
   Serial.print (";");
   delay(500);
   Serial.println(time);
   (delay)(500);

}

void loop(){}
