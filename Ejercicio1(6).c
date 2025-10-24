/*Schrader Rodtriguez Luis Antonio
clase 3 ejercicio 6*/
#include <stdio.h>
#include <math.h>

void main()
{
    int x = 0, res = 0;

    printf("Dame un numero: ");
    scanf("%d", &x);

    if (x <= 0)
    {
        res = x + 3;
    }
    else
    {
        res = pow(x, 2) + (x * 2);
    }

    printf("El resultado es: %d\n", res);
}
