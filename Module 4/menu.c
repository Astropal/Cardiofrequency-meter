#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnees.h"
#include "action.h"
void afficherMenu()
{
    int choice = 1;
    donnee *listeDeDonnee = NULL;

    printf("**** INTERFACE DE CONTROLE ****\n\n");

    while ((choice > 0) && (choice < 7))
    {
          printf("Que souhaitez-vous faire?\n\n");
          printf("(1)     Afficher les donnees du fichier\n");
          printf("(2)     Afficher les donnees du dossier par ordre croissant/decroissant\n");
          printf("(3)     Rechercher et afficher les max/min de pouls (avec le temps associe)\n");
          printf("(4)     Afficher la moyenne de pouls dans une plage de temps donnee\n");
          printf("(5)     Rechercher et afficher une donnee a un temps particulier\n");
          printf("(6)     Afficher le nombre de lignes de donnees actuellement en memoire\n");
          printf("(0) Quitter?\n\n");

          scanf("%d",&choice);

          switch(choice)
  		    {
        			case 1 :
        			{
                        listeDeDonnee = chargeFichier();
                        afficherToutesDonnees(listeDeDonnee);
        				break;
        			}
        			case 2  :
        			{
                        listeDeDonnee = chargeFichier();
                        trierListe(listeDeDonnee);
        				break;
        			}
        			case 3 :
                  {
                    listeDeDonnee = chargeFichier();
                    rechercheMaxEtMin (listeDeDonnee);
                    break;
                  }
                  case 4 :
                  {
                    listeDeDonnee = chargeFichier();
                    moyennePouls (listeDeDonnee);
                    break;
                  }
                  case 5 :
                  {
                    listeDeDonnee = chargeFichier();
                    tempsPrecis (listeDeDonnee);
                    break;
                  }
                  case 6 :
                  {
                    listeDeDonnee = chargeFichier();
                    lignesMemoire(listeDeDonnee);
                    break;
                  }

                default :
                {
                    printf("Fermeture du programme");
                }
  		}
    }



}
