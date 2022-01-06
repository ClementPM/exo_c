#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));
// declaration de nos variables
int jeu_ordinateur = 0, jeu_utilisateur = 0;
const int VALEUR_MIN = 1, VALEUR_MAX = 3;
// generation d'un nombre aleatoire
jeu_ordinateur = (rand() % VALEUR_MAX) + VALEUR_MIN;

do {
    printf("Choisissez entre 1-Pierre, 2-Papier, 3-Ciseaux : ");
    scanf("%d", &jeu_utilisateur);

    if(jeu_utilisateur == jeu_ordinateur)
    {
        printf("Match nul");
        break;
    }
    else if(jeu_utilisateur > jeu_ordinateur)
    {
        printf("Utilisateur a gagné");
        break;
    }
    else
    {
        printf("Ordinateur a gagné");
        break;
    }
}
    while ((jeu_utilisateur >= VALEUR_MIN) && (jeu_utilisateur <= VALEUR_MAX));
    return 0;
}
