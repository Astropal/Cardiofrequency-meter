#include "coeur.h"
#include "param.h"

void setup() {
  pinMode(i, OUTPUT);
}

void loop() {
  if(choice == 1)
  {
        for (i == 2; i <= 10; i++) 
        {
          pinMode(i, OUTPUT);
          digitalWrite(i, HIGH);
        }
        
        i = 2;
        delay(500);
        
        for (i == 2; i <= 10; i++) 
        {
          pinMode(i, OUTPUT);
          digitalWrite(i, LOW);
        }
        
        i = 2;
        delay(500);
    }
    
    else if(choice == 2)
    {
        for (i == 2; i <= 10; i = i+2) 
        {
          pinMode(i, OUTPUT);
          digitalWrite(i, HIGH);
        }
        
        i = 2;
        delay(500);
        
        for (i == 2; i <= 9; i = i+2) 
        {
          pinMode(i, OUTPUT);
          digitalWrite(i, LOW);
        }
        
        i = 2;
        delay(500);
    }
    
    else if(choice == 4) 
    {
        for (i == 2; i <= 9; i++) 
        {
          pinMode(i, OUTPUT);
          digitalWrite(i, HIGH);
          delay(50);
          digitalWrite(i, LOW);
          delay(50);
        }
        i = 2;
    }
    
    else if (choice == 5) {
          for (i == 2; i <= 9; i++) 
          {
            pinMode(i, OUTPUT);
            digitalWrite(i, LOW);
          }
    }
    
    else if(n > 0 || n < 10) 
    {
        for (i == 2; i <= 9; i = i+n) 
        {
          pinMode(i, OUTPUT);
          digitalWrite(i, HIGH);
        }
        
        i = 2;
        delay(500);
        
        for (i == 2; i <= 9; i = i+n) 
        {
          pinMode(i, OUTPUT);
          digitalWrite(i, LOW);
        }
        
        i = 2;
        delay(500);
    }
}
