#include "coeur.h"
#include "cardio.h"
void battement()
{
    for (i == 2; i <= 10; i++) 
    {
      pinMode(i, OUTPUT);
      digitalWrite(i, HIGH);
    }
    
    i = 2;
    delay(poulseconde());
    
    for (i == 2; i <= 10; i++) 
    {
      pinMode(i, OUTPUT);
      digitalWrite(i, LOW);
    }
    
    i = 2;
    delay(poulseconde());
}

void uneLedSurDeux()
{
    for (i == 2; i <= 10; i = i+2) 
    {
      pinMode(i, OUTPUT);
      digitalWrite(i, HIGH);
    }
    
    i = 2;
    delay(poulseconde());
    
    for (i == 2; i <= 9; i = i+2) 
    {
      pinMode(i, OUTPUT);
      digitalWrite(i, LOW);
    }
    
    i = 2;
    delay(poulseconde());
}

void uneLedSurX(int n) 
{
    for (i == 2; i <= 9; i = i+n) 
    {
      pinMode(i, OUTPUT);
      digitalWrite(i, HIGH);
    }
    
    i = 2;
    delay(10);
    
    for (i == 2; i <= 9; i = i+n) 
    {
      pinMode(i, OUTPUT);
      digitalWrite(i, LOW);
    }
    
    i = 2;
    delay(poulseconde());  
}

void chenille()
{
    for (i == 2; i <= 9; i++) 
    {
      pinMode(i, OUTPUT);
      digitalWrite(i, HIGH);
      delay(10);
      digitalWrite(i, LOW);
      delay(poulseconde());
    }
    i = 2;
}

void ledEteinte()
{
    for (i == 2; i <= 9; i++) 
    {
      pinMode(i, OUTPUT);
      digitalWrite(i, LOW);
    }
}

void choix() {

 if(choice == 1)
  {
    battement();
  }
    
  else if(choice == 2)
  {
    uneLedSurDeux();
  }

  else if(choice == 3) 
  {
    uneLedSurX(n);
  }
    
  else if(choice == 4) 
  {
    chenille();
  }
    
  else if (choice == 5) 
  {
    ledEteinte();
  }
}
