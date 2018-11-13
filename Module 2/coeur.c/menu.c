#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

void afficherMenu(int choice)
{
    choice = 1;

    printf("Choix du mode de clignotement\n\n");

    while ((choice > 0) && (choice < 5))
    {
        // afficher les différents choix
        printf("Quel mode de clignotement voulez vous ?\n\n");
        printf("(1)     Battement\n");
        printf("(2)     1 Led sur 2\n");
        printf("(3)     1 Led sur 3\n");
        printf("(4)     Chenille\n");
        printf("(Autre) Eteindre\n\n");

        scanf("%d",&choice);

        // choix de l'action à effectuer
        switch(choice)
		{
			case 1 :
			{
			    param(choice = 1);
				break;
			}
			case 2  :
			{
			    param(choice);
				break;
			}
            case 3 :
            {
                param(choice);
                break;
			}
			case 4 :
			{
			    param(choice);
				break;
			}
			default :
			{
				printf("Leds eteintes\n");
			}
		}
    }
}

