#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age_utiisateur = 19, code_pin = 1234, argent_utilisateur = 255;


    if ((age_utiisateur < 18))
    {
        printf("Vous devez être majeur\n");
    }
    else
    {
      if(code_pin != 1234)
      {
        printf("Vous devez avoir le code secret");
      }
      else {
        if(argent_utilisateur < 250){
          printf("Vous devez avoir au moins 250€ \n");
        }
        else{
        printf("Welcome to the club \n");
        }
      }
    }

    return 0;
}
