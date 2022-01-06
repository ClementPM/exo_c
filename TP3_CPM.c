#include <stdio.h> 
#include <stdlib.h>

int main() 
{
printf("TP3: operations sur variables\n"); 

int carre=0;
int perimetre = 0;
int surface = 0;
int largeur = 0;

printf("Quelle est la hauteur et largeur d'un rectangle?\n");
scanf("%d%d", &carre, &largeur);

perimetre = 2 * carre;
surface = carre * carre;

printf("Ce carre a pour perimetre = %d\n", perimetre);
printf("Ce carre a pour surface = %d", surface);

return 0;
}