#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saisie_utiisateur = 0;
    const int CODE_PIN = 1234;

    printf("Entrez un code PIN : ");
    scanf("%d", &saisie_utiisateur);
    
    if (saisie_utiisateur == CODE_PIN)
    {
        printf("Code correct!! \n");
    }
    else
    {
        printf("Code incorrect, please try again!! \n");
    }

    return 0;
}
