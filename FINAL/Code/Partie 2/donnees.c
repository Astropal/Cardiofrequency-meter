#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include <string.h>


donnee* creerDonnee(int pouls, int temps)
{
    donnee *donneeCreation ;

    donneeCreation = malloc(sizeof(donnee));
    donneeCreation->pouls = pouls;
    donneeCreation->temps = temps;
    donneeCreation->nextDonnee = NULL;
    return donneeCreation;
}
void ajouterDonneeListe(donnee *donneeAAjouter, donnee *derniereDonneeDeLaListe)
{
    derniereDonneeDeLaListe->nextDonnee = donneeAAjouter;
}

donnee *chargeFichier() {

    donnee *listeDonnee = NULL;
    donnee *lastDonnee = NULL;
    donnee *currDonnee = NULL;

    int checkCloture = 1;
    int pouls;
    int temps;
    char line[255];

    FILE *f;

    listeDonnee = malloc(sizeof(donnee));
    currDonnee = listeDonnee;

    f = fopen("ConvertisseurSerialCSV/Battements.csv", "r");

        if( f == NULL)
        {
            printf("Echec d'ouverture du fichier\n");
        }
        else
            {
            printf("Succes ouverture du fichier\n");

            memset(line, '\0', 255);


            while(fgets(line,255,f))
            {

                sscanf(line,"%d;%d\n", &temps, &pouls);
                lastDonnee = creerDonnee(pouls, temps);
                ajouterDonneeListe( lastDonnee, currDonnee);
                currDonnee = lastDonnee;
            }



            }
        checkCloture = fclose(f);
        if( checkCloture == 0)
        {
            printf("Succes fermeture du fichier\n\n");
        }
        else
        {
            printf("Echec fermeture du fichier\n");
        }
        return listeDonnee;

}


