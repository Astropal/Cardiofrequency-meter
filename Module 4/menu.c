#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnees.h"
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
          printf("(3)     Rechercher et afficher une donnee a un temps particulier\n");
          printf("(4)     Afficher la moyenne de pouls dans une plage de temps donn�e\n");
          printf("(5)     Afficher le nombre de lignes de donn�es actuellement en m�moire\n");
          printf("(6)     Rechercher et afficher les max/min de pouls (avec le temps associ�)\n");
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

        				break;
        			}
        			case 3 :
                  {

                    break;
                  }
                  case 4 :
                  {

                    break;
                  }
                  case 5 :
                  {

                    break;
                  }
                  case 6 :
                  {

                    break;
                  }

                default :
                {
                    printf("Fermeture du programme");
                }
  		}
    }



}
