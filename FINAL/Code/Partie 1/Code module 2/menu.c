#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

void afficherMenu(int choice, int n)
{
    choice = 1;
    n = 1;

    printf("Choix du mode de clignotement\n\n");

    while ((choice > 0) && (choice < 6))
    {
        // afficher les diff�rents choix
        printf("Quel mode de clignotement voulez vous ?\n\n");
        printf("(1)     Battement\n");
        printf("(2)     1 Led sur 2\n");
        printf("(3)     1 Led sur X\n");
        printf("(4)     Chenille\n");
        printf("(5)     Eteindre\n\n");

        scanf("%d",&choice);

        // choix de l'action � effectuer
        switch(choice)
		{
			case 1 :
			{
			    generation(choice, n);
				break;
			}
			case 2  :
			{
			    generation(choice, n);
				break;
			}
            case 3 :
            {
                generation(choice, n);
                printf("Allumer une led sur combien ? (entre 0 et 9) \n\n");

                    if((n > 0) && (n < 9))
                    {
                        scanf("%d", &n);
                        generation(choice, n);
                    }
                    else
                    {
                        printf("Veuillez choisir un nombre entre 0 et 9 \n\n");
                    }

                break;
			}
			case 4 :
			{
			    generation(choice, n);
				break;
			}
			case 5 :
			{
			    generation(choice, n);
				break;
			}
			default :
			{
				printf("Erreur\n");
			}
		}
    }
}
