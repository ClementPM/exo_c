#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("TP 4 - Complément sur les variables\n");

    //declaration des variables
    int rayon=0, diametre=0, hauteur =0;
    float circonference=0, aire=0, volume_cyl=0, volume_cone=0;

    // recuperation du rayon
    printf("Donnez le rayon d'un cercle : ");
    scanf("%d", &rayon);

    //calcul du diametre, circonference et aire
    diametre = rayon * 2;
    circonference = 2 * M_PI * rayon;
    aire = M_PI * rayon * rayon;
  
    //Affichage des résultats
    printf("Ce cercle a pour diametre %d\n", diametre);
    printf("Ce cercle a pour circonference %f\n", (float)circonference);
    printf("Ce cercle a pour aire %f\n", (float)aire);

  //Pour aller + loin
    printf("Quelle est la hauteur du volume? : ");
    scanf("%d", &hauteur);

      //Pour aller + loin
    volume_cyl = M_PI * rayon * rayon * hauteur;
    volume_cone = M_PI * rayon * rayon * hauteur / 3;

    printf("Ce cylindre a pour volume %f\n", (float)volume_cyl);
    printf("Ce cone a pour volume %f\n", (float)volume_cone);

    return 0;
}
