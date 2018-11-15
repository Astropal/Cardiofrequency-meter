#ifndef ACTION_H_INCLUDED
#define ACTION_H_INCLUDED
#include "donnees.h"

void afficherDonnee(donnee *maDonne);
void afficherToutesDonnees(donnee *listeDonnee);
void trisTempsDecroissant(donnee *listeDonnees);
void echange (donnee *encours , donnee *encoursGrand);
void trisPoulsCroissant(donnee *listeDonnees);
void trisPoulsDecroissant(donnee *listeDonnees);
void rechercheMaxEtMin (donnee *listeDonees);
void moyennePouls (donnee *listeDonnees);
void tempsPrecis (donnee *listeDonnees);
void lignesMemoire(donnee *listeDonnees);
//void donneesEntreDeux (donnee *listeDonnees);
#endif // ACTION_H_INCLUDED
