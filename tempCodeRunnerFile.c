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