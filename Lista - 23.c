#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float somatoria(float n)
{
    float S = 0;

    for (int i = 1; i <= n; i++)
    {

        S += (pow(i, 2) + 1) / (i + 3);
    }

    return S;
}

int main()
{
    int numero;
    float res;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    res = somatoria(numero);
    
    printf("Somatoria : %.2f", res);

    return 0;
}
