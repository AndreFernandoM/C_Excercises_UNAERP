#include <stdio.h>

int maior_check(int, int, int);
int medio_check(int, int, int);
int menor_check(int, int, int);

int main()
{
    int a, b, c;

    printf("Digite 3 valores para serem testados: ");
    scanf("%i %i %i", &a, &b, &c);

    printf("%i < %i < %i", menor_check(a, b, c), medio_check(a, b, c), maior_check(a, b, c));

    return 0;
}

int maior_check(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
        return num1;
    else if (num2 > num1 && num2 > num3)
        return num2;
    else if (num3 > num1 && num3 > num2)
        return num3;
}

int menor_check(int num1, int num2, int num3)
{
    if (num1 < num2 && num1 < num3)
        return num1;
    else if (num2 < num1 && num2 < num3)
        return num2;
    else if (num3 < num1 && num3 < num2)
        return num3;
}

int medio_check(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 < num3)
        return num1;
    else if (num2 > num1 && num2 < num3)
        return num2;
    else if (num3 > num1 && num3 < num2)
        return num3;
}
