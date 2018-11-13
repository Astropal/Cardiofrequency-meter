#include <stdio.h>
#include <stdlib.h>
#include "action.h"

void afficherDonnee(donnee *maDonne){

    printf("Pouls : %d\nFrequance : %d\n\n",
            maDonne->pouls,
            maDonne->frequance);
}

void afficherToutesDonnees(donnee *listeDonnee)
{
    donnee *donneeAAfficher = listeDonnee->nextDonnee;
    while(donneeAAfficher->nextDonnee != NULL)
    {
        afficherDonnee(donneeAAfficher);
        donneeAAfficher = donneeAAfficher->nextDonnee;
    }
    afficherDonnee(donneeAAfficher);
}
