#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("TP 3 - Les operations sur variables\n");

    //declaration des variables
    int largeur=0, carre=0;
    int perimetre=0, surface=0;

    // recuperation de la largeur et hauteur
    printf("Donnez la taille du carre \n");
    scanf("%d", &carre);

    //calcul du perimetre et de la surface du rectangle
    perimetre = 2*carre;
    surface = carre * carre;

    //Affichage des résultats
    printf("Le rectange fait %dx%d \n", carre, carre);
    printf("\t perimetre = %d", perimetre);
    printf("\t surface = %d", surface);

    return 0;
}
