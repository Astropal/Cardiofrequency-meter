#include <stdio.h>
#include <stdlib.h>
#include "action.h"

void afficherDonnee(donnee *maDonne){

    printf("Pouls : %d ; Temps(s) : %d\n\n",
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

void trierListe(donnee *listeDonnee)
{
    donnee *a = listeDonnee;
    donnee *b = listeDonnee;
    int listA[150];
    int listB[150];
    int i = 0;
    int j = 0;
    int g = 0;
    int N = 50;


    while(a->nextDonnee != NULL){

                listA[i] = a->pouls;

                a = a->nextDonnee;

                i++;

            }

    while(b->nextDonnee != NULL){

        listB[j] = b->frequance;

        b = b->nextDonnee;

        j++;

    }

     tricroissant(listA, N);
     tricroissant(listB, N);

    for(int g = 0; g<50; g++)
    {
        printf("Une fois trie on a :\n");
        printf("Pouls : %d ; Temps(s) : %d\n", listA[g], listB[g]);
    }
}
void tricroissant( int a[], int b )
{
    int i=0;
    int x=0;
    int j=0;

    for(i=0;i<b;i++)
    {
        for(j=1;j<b;j++)
        {
            if(a[i]<a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
                j--;
                }

        }

        }

    x=a[0];
    for(i=0;i<b;i++)
    a[i]=a[i+1];
    a[b-1]=x;

}
void rechercheMaxEtMin (donnee *listeDonees)
{

    int max;
    int min;
    int tempsMax;
    int tempsMin;

    while (listeDonees->nextDonnee != NULL)
    {
        if (max < listeDonees->pouls){

            max = listeDonees->pouls;

            tempsMax = listeDonees->frequance;
        }

        if (min > listeDonees->pouls){

            min = listeDonees->pouls;

            tempsMin = listeDonees->frequance;
        }

        listeDonees = listeDonees->nextDonnee;
    }

    printf("La valeur maximum du pouls est %d atteinte a %d s\n", max, tempsMax);
    printf("La valeur minimum du pouls est %d atteinte a %d s\n", min, tempsMin);
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

    moyenne = somme/n;
    printf("La moyenne du pouls est : %f\n", moyenne);
}

void tempsPrecis (donnee *listeDonnees)
{
    int k;
    int x;

    printf("A quel temps voulez vous vous rendre ?(nombre entier s'il vous plait)\n\n");
    scanf("%d", &k);



        while(k != listeDonnees->frequance)
        {
            x = listeDonnees->pouls;

            if(listeDonnees->nextDonnee != NULL)
            {

                listeDonnees = listeDonnees->nextDonnee;

            }

            else
            {
                printf("//!\\Temps non trouve");
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

        listB[j] = b->frequance;

        b = b->nextDonnee;

        j++;

    }

    while(debut>listeDonnees->frequance<fin)
    {

        printf("Entre %d s et %d s les pouls sont :\n", debut, fin);
        printf("%d\n", listA[g]);
        listeDonnees->frequance = listeDonnees->nextDonnee->frequance;
        g++;

    }
}*/


