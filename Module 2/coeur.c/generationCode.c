#include "generationCode.h"
#include <stdio.h>

int param(int choice)
{
    FILE* f = NULL;

    f = fopen("param.h", "w");

    if (f != NULL)
    {
        switch(choice)
        {
            case 1 :
			{
			    printf("Battement\n\n");
                fprintf(f, "battement");
				break;
			}
			case 2  :
			{
                printf("uneLedSurDeux\n\n");
                fprintf(f, "uneledsurdeux");
				break;
			}
            case 3 :
            {
                printf("uneLedSurTrois\n\n");
                fprintf(f, "uneledsurtrois");
                break;
			}
			case 4 :
			{
                printf("chenille\n\n");
                fprintf(f, "chenille");
				break;
			}
			default :
			{
				printf("Leds eteintes\n");
				fprintf(f, "eteinte");
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

