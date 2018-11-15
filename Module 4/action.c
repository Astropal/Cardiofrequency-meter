#include <stdio.h>
#include <stdlib.h>
#include "action.h"

void afficherDonnee(donnee *maDonne){

    printf("Pouls : %d ; Temps(s) : %d\n\n",
            maDonne->pouls,
            maDonne->temps);
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
void trisAuChoix (donnee *listeDonne)
{
    int pick = 0;

    printf("Quel tri voulez vous effectuer ?\n");
    printf("(1) Pouls Croissant\n");
    printf("(2) Pouls Decroissant\n");
    printf("(3) Temps Decroissant\n");
    printf("(0) Quitter\n");

    scanf("%d", &pick);

    switch(pick)
    {
    case 1 :
        {
            listeDonne = chargeFichier();
            trisPoulsCroissant(listeDonne);
            break;
        }
    case 2 :
        {
            listeDonne = chargeFichier();
            trisPoulsDecroissant(listeDonne);
            break;
        }
    case 3 :
        {
            listeDonne = chargeFichier();
            trisTempsDecroissant(listeDonne);
            break;
        }
    default :
        {
            printf("Fermeture du tri\n");
        }


    }
}
void echange (donnee *encours , donnee *encoursGrand){
   int temps;
   int pouls;

    pouls = encoursGrand->pouls;
    encoursGrand->pouls = encours->pouls;
    encours->pouls = pouls;

    temps = encoursGrand->temps;
    encoursGrand->temps = encours->temps;
    encours->temps = temps;
}

void trisTempsDecroissant(donnee *listeDonnees){

int permutation ;
donnee *encours;
donnee *encoursGrand;
encoursGrand = NULL;

    if (listeDonnees == NULL)
        return;

    do
    {
        permutation  = 0 ;
        encours = listeDonnees->nextDonnee;

        while (encours->nextDonnee != encoursGrand)
        {
            if (encours->temps < encours->nextDonnee->temps)
            {
                echange(encours,encours->nextDonnee);
                permutation = 1 ;
            }
            encours = encours->nextDonnee;
        }
        encours = encoursGrand;
    }
    while (permutation);
    afficherToutesDonnees(listeDonnees);
}
void trisPoulsCroissant(donnee *listeDonnees){

int permutation ;
donnee *encours;
donnee *encoursGrand;
encoursGrand = NULL;

    if (listeDonnees == NULL)
        return;

    do
    {
        permutation  = 0 ;
        encours = listeDonnees->nextDonnee;

        while (encours->nextDonnee != encoursGrand)
        {
            if (encours->pouls > encours->nextDonnee->pouls)
            {
                echange(encours,encours->nextDonnee);
                permutation = 1 ;
            }
            encours = encours->nextDonnee;
        }
        encours = encoursGrand;
    }
    while (permutation);
    afficherToutesDonnees(listeDonnees);
}
void trisPoulsDecroissant(donnee *listeDonnees){

int permutation ;
donnee *encours;
donnee *encoursGrand;
encoursGrand = NULL;

    if (listeDonnees == NULL)
        return;

    do
    {
        permutation  = 0 ;
        encours = listeDonnees->nextDonnee;

        while (encours->nextDonnee != encoursGrand)
        {
            if (encours->pouls < encours->nextDonnee->pouls)
            {
                echange(encours,encours->nextDonnee);
                permutation = 1 ;
            }
            encours = encours->nextDonnee;
        }
        encours = encoursGrand;
    }
    while (permutation);
    afficherToutesDonnees(listeDonnees);
}
void rechercheMaxEtMin (donnee *listeDonees)
{
   int max[5];
   int min[5];
   max[0] = 0;
   min[0] = 1000;

   listeDonees = listeDonees->nextDonnee;

   while(listeDonees->nextDonnee != NULL )
   {
       if( max[0] < listeDonees->pouls)
       {
            max[0] = listeDonees->pouls;
            max[1] = listeDonees->temps;
           //printf("La valeur maximum du pouls est %d atteinte a %d s\n", max->pouls, max->temps);
       }

       if( min[0] > listeDonees->pouls)
       {
            min[0] = listeDonees->pouls;
            min[1] = listeDonees->temps;
           //printf("La valeur maximum du pouls est %d atteinte a %d s\n", max->pouls, max->temps);
       }
       listeDonees = listeDonees->nextDonnee;
   }
    printf("La valeur maximum du pouls est %d atteinte a %d s\n", max[0], max[1]);
    printf("La valeur minimum du pouls est %d atteinte a %d s\n", min[0], min[1]);
}

void moyennePouls (donnee *listeDonnees)
{
    float moyenne;
    int somme = 0;
    int n = 0;

    while(listeDonnees->nextDonnee != NULL){

        somme = somme + listeDonnees->pouls;
        listeDonnees = listeDonnees->nextDonnee;
        n++;

    }
    somme = somme + listeDonnees->pouls;
    moyenne = somme/n;
    printf("La moyenne du pouls est : %f\n", moyenne);
}

void tempsPrecis (donnee *listeDonnees)
{
    int k;
    int x;

    printf("A quel temps voulez vous vous rendre ?(nombre entier s'il vous plait)\n\n");
    scanf("%d", &k);



        while(k != listeDonnees->temps)
        {
            x = listeDonnees->pouls;

            if(listeDonnees->nextDonnee != NULL)
            {

                listeDonnees = listeDonnees->nextDonnee;

            }

            else
            {
                printf("//!\\Temps non trouve");
                break;
            }
        }
        printf("La pouls coresspondant a ce temps est : %d\n", x);
    }
void lignesMemoire(donnee *listeDonnees)
{
    int i = 0;

    while(listeDonnees->nextDonnee != NULL)
    {
        i++;
        listeDonnees = listeDonnees->nextDonnee;
    }

    printf("Il y a actuellement %d lignes en memoire\n", i);
}


/*void donneesEntreDeux (donnee *listeDonnees)
{
    int debut;
    int fin;

    printf("Entres quelles temps voulez vous voir les valeurs du pouls ?\n");
    printf("Temps debut : ");
    scanf("%d", &debut);
    printf("Temps fin : ");
    scanf("%d", &fin);
    donnee *a = listeDonnees;
    donnee *b = listeDonnees;
    int listA[150];
    int listB[150];
    int i = 0;
    int j = 0;
    int g = 0;

    listeDonnees = listeDonnees->nextDonnee;

    while(a->nextDonnee != NULL){

                listA[i] = a->pouls;

                a = a->nextDonnee;

                i++;

            }

    while(b->nextDonnee != NULL){

        listB[j] = b->temps;

        b = b->nextDonnee;

        j++;

    }

    while(debut>listeDonnees->temps<fin)
    {

        printf("Entre %d s et %d s les pouls sont :\n", debut, fin);
        printf("%d\n", listA[g]);
        listeDonnees->temps = listeDonnees->nextDonnee->temps;
        g++;

    }
}*/


