#include "Cardio.h"
#include "Arduino.h"

float x;
float Rcardiaque;
unsigned long time;

int randome(int x){

  x = random(700,750);
  return x;
}
void affichage(float Rcardiaque, int time){
   //*Affichage format csv
   Serial.print (Rcardiaque);
   delay(500); //*Délai d'affichage
   Serial.print (";");
   delay(500);
   Serial.println(time);
   (delay)(500);
}
int calcul(){
  
  //*Génerer un nombre random; 
  randome(x);
  
 //*Calcul des battements cardiaques
  Rcardiaque =  ( 1000 / x )* 60;

  //*calcul du temps à chaque battement
  time = millis();
 
  affichage(Rcardiaque, time);
  
  return x;
}
