#include <stdio.h>
#include <stdlib.h>

int somatoria(int);

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%i", &num);

    printf("\nO somatoria %i", somatoria(num));

    return 0;
}

int somatoria(int n)
{
    int i, soma=0;

    if (n < 0)
        return -1;
    for (i = 0; i <= n; i++)
    {
        soma += i;
    }
    return soma;
}