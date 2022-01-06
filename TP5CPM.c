#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("TP 5 - Les Conditions\n");

  //declaration des variables
    int nb_1=0, nb_2=0, resultat = 0;
    char operateur = 'X';

    // Saisie utilisateur + stockage de la saisie
    printf("Veuillez saisir un premier chiffre, un operateur, et un second chiffre[sans espace] : ");
    scanf("%d%c%d", &nb_1, &operateur, &nb_2);

    // Switch selon saisie + calcul
    switch (operateur)
    {
        case '+':
            resultat = nb_1 + nb_2;
        break;

        case '-':
            resultat = nb_1 - nb_2;
        break;

        case '*':
            resultat = nb_1 * nb_2;
        break;

        case '/':
            resultat = nb_1 / nb_2;
        break;

        default:
            printf("Operateur inconnu, please try again!");
        break;
    }
        printf("Le résultat est: %d %c %d = %d.\n", nb_1, operateur, nb_2, resultat);

    return 0;
}
