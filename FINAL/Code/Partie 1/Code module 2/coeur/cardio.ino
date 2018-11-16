#include "Cardio.h"
#include "Arduino.h"


unsigned long time;

float randome(void){

// Generation d'un nombre aleatoire
 float x = random(800,900);
  return x;
}

int pouls() {
  int Rcardiaque;
  float brand;
  int Rseconde;
  int toto;

  // Recuperation du nombre aleatoire pour calculer le pouls
  brand=randome();

 // Calcul des battements cardiaques par minute
  Rcardiaque = (int) (( 1000 / brand )* 60);

  // Retour des battements en minute
  return Rcardiaque;
  
}

int poulseconde (void){
   int toto;
   int Rseconde;

   // Recuperation des battements en minute pour calculer le pouls en seconde
   toto = pouls();
   
   // Calcul des battements en seconde
   Rseconde = (int) (toto/60);

   // Retour des battements en seconde
   return Rseconde;
}

  
void affichage(int Rcardiaque, unsigned long time){
   // Affichage format csv  temps;pouls

   // affichage du temps
   Serial.print(time);
   // affichage du ;
   Serial.print(";");
   // affichage du pouls
   Serial.println(Rcardiaque);

}

void calcul(void){

  int RC;

  // Recuperation du temps systeme
  time = millis();
  // Calcul du pouls
  RC = pouls();
  // Boucle d'attente en millliseconde
  (delay) (900);
  // Envoi des donn�es sur l eport serie
  affichage(RC, time);

}
