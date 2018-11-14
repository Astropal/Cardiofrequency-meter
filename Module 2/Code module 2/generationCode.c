#include "generationCode.h"
#include <stdio.h>
#include <stdlib.h>

int generation(int choice, int n)
{
    FILE* f = NULL;

    f = fopen("coeur.c/param.h", "w");

    if (f != NULL)
    {
        switch(choice)
        {
            case 1 :
			{
			    printf("Vous avec choisi le mode Battement\n\n");
                fprintf(f, "int choice = 1; \nint n;");
				break;
			}
			case 2  :
			{
                printf("Vous avec choici le mode une led sur deux\n\n");
                fprintf(f, "int choice = 2; \nint n;");
				break;
			}
            case 3 :
            {
                printf("Vous avez choici le mode une led sur X\n\n");
                fprintf(f, "int choice = 3; \nint n = %d;", n);
                break;
			}
			case 4 :
			{
                printf("Vous avez choisi le mode chenille\n\n");
                fprintf(f, "int choice = 4; \nint n;", n);
				break;
			}
			case 5 :
			{
                printf("Vous avez eteint les leds eteintes\n\n");
                fprintf(f, "int choice = 5; \nint n;");
				break;
			}
			default :
			{
				printf("Erreur\n");
				fprintf(f, "int choice = 6; \nint n;");
			}
        }
        fclose(f);
    }
    else
    {
        printf("Impossible d'ouvrir le fichier test.txt");
    }

    return 0;
}
