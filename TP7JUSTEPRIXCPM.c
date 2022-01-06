#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  printf("TP 6 - Les Boucles\n");

  //declaration de nos variables
  int nombre_mystere = 0, nombre_utilisateur = 0, tentative = 0;
  const int VALEUR_MIN = 1, VALEUR_MAX = 100, TENTATIVE_MAX = 2;
  char answer = 'x';

  //generation d'un nombre aleatoire
  srand(time(NULL));
  nombre_mystere = (rand() % (VALEUR_MAX - VALEUR_MIN + 1)) + VALEUR_MIN;
  printf("Devinez quel est mon nombre mystere. Indice: c'est un nombre entre %d et %d \n", VALEUR_MIN, VALEUR_MAX);

  //boucle do/while demandant un nombre entier à l'utilisateur
  do {
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre_utilisateur);
        // Comparaison des 2 entiers + incrementation
    if(nombre_utilisateur > nombre_mystere)
    {
      tentative ++; 
      printf("tentative %d > %d\n", tentative, nombre_utilisateur);
      printf("le nombre est trop grand \n");
    }
    else if(nombre_utilisateur < nombre_mystere)
    {
      tentative++;
      printf(" tentative %d > %d\n", tentative, nombre_utilisateur);
      printf(" le nombre est trop petit \n");
    } 
    else if(nombre_utilisateur == nombre_mystere)
    {
      printf(" BRAVO! Les deux nombres sont identiques : %d = %d\n", nombre_utilisateur, nombre_mystere);
    } 
    //Condition des 10 tentatives + fin de partie
    if(tentative == TENTATIVE_MAX)
    {
      printf("\t***YOU LOOSE TRY AGAIN***");
      
      printf("\t Voulez-vous faire une nouvelle partie? O/N : ");
      scanf("\t %c", &answer);

      switch(answer)
      {
      case 'O':
        tentative=0;
        continue;
      break;
      // ERREUR DE SORTIE DE BOUCLE
      case 'N':
        break;
      break;
      default:
        printf("Selectionnez O ou N \n");
        printf("\t Voulez-vous faire une nouvelle partie? O/N");
        scanf("\t %c", &answer);
      break;
      }
    }
  }
  while (nombre_utilisateur != nombre_mystere);

  return 0;
}
