#ifndef Card_h 
#define Card_h 

/* Retourne un float aleatoire compris entre 800 et 900*/
float randome(void);

/* Retourne le pouls en battement par minute */
int pouls(void);

/* Envoie sur le port serie les donees qu format csv demande
 *  au travers de la fonction interne affichage
 */
void calcul(void);

#endif
