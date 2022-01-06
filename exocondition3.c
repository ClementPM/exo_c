#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix_utilisateur = 0;
    printf("Que voulez-vous manger? 1-Croissant, 2-Pain au choc, 3-Eclair : ");
    scanf("%d", &choix_utilisateur);

    switch (choix_utilisateur)
    {
      case 1:
        printf("Vous avez pris un croissant");
      break;

      case 2:
        printf("Vous avez pris un pain au choc");
      break;

      case 3:
        printf("Vous avez pris un eclair");
      break;

      default:
        printf("Nous ne faisons pas ça ici!");
      break;
    }
    return 0;
}
