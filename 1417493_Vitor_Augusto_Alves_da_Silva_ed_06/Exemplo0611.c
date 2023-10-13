/*
 Exemplo0611 - v1.1. - 08 / 10 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "io.h"
#include "stdio.h"
#include "stdlib.h"

int n;
int valorInicial;

int main ()
{
    int exemplo11();

    int x;

    while (x != 0)
{
    printf("\n (11) - Apartir do 9, acrescentando multiplos de 2 \n");

    printf("\n Escolha um dos exemplos de 11 a 20. \n");
    scanf("%d", &x);

    switch (x)
    {
        case 11:
        exemplo11();
        break;

        default:
        printf("Invalido \n");
        break;
    }
}

    system ("pause");
    return 0;
}

int exemplo11 ()
{
    int exemplo11a();

    printf("Digite uma quantidade de numeros \n");
    scanf("%d", &n);

    exemplo11a (n);
    
}

int exemplo11a (int x)
{
int resultado;
int mais2 = 0;
int i = 0;

while (i < x)
{
resultado = 9 + mais2;
printf("Valor = %d \n", resultado);
mais2++;
mais2++;
i++;
}

}