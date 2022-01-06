#include <stdio.h>
#include <stdlib.h>

int main()
{
  int saisie_utilisateur = 0;
  do
  {
    printf("Entrez un nombre :");
    scanf("%d", &saisie_utilisateur);
  }
  while (saisie_utilisateur < 1 || saisie_utilisateur > 100);
  return 0;
}
