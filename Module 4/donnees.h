#ifndef DONNEES_H_INCLUDED
#define DONNEES_H_INCLUDED

typedef struct donnee donnee;

struct donnee {

int pouls;

int frequance;

donnee *nextDonnee;
};

donnee* chargeFichier();
donnee* creerDonnee(int pouls, int freqance);
int sauveDonnees(donnee *listeDonnee);
void ajouterDonneeListe(donnee *donneeAAjouter, donnee *derniereDonneeDeLaListe);

#endif // DONNEES_H_INCLUDED
