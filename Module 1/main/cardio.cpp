#include "Cardio.h"
#include "Arduino.h"


unsigned long time;

float randome(void){

// Generation d'un nombre aleatoire
 float x = random(800,900);
  return x;
}

int pouls(void) {
  int Rcardiaque;
  float brand;

  // Recuperation du nombre aleatoire pour calculer le pouls 
  brand=randome();
 
 //*Calcul des battements cardiaques
  Rcardiaque = (int) (( 1000 / brand )* 60);

  // Retour de pouls
  return Rcardiaque;
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
  // Envoi des données sur l eport serie
  affichage(RC, time);

}
