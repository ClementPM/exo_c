#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float TAUX_CONVERSION = 0.88;
    float montant_euro = 0.0, montant_dollar=0.0;

    printf("Donner un montant en euro : ");
    scanf("%f", &montant_euro);

    montant_dollar = montant_euro * TAUX_CONVERSION;
    printf("%f, euro = %f dollar avec un taux de conversion = %f", montant_euro, montant_dollar,TAUX_CONVERSION);

    return 0;
}
