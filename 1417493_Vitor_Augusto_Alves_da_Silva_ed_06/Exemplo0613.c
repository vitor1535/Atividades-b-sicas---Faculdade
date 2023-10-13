/*
 Exemplo0613 - v1.3. - 08 / 10 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "io.h"
#include "stdio.h"
#include "stdlib.h"

int main ()
{
    int exemplo11();
    int exemplo12();
    int exemplo13();

    int x;

    while (x != 0)
{
    printf("\n (11) - Apartir do 9, acrescentando multiplos de 2 \n");
    printf("\n (12) - Multiplos de 9, em ordem decrescente \n");
    printf("\n (13) - Multiplos de 9, em ordem crescente, comecando em 1. \n");

    printf("\n Escolha um dos exemplos de 11 a 20. \n");
    scanf("%d", &x);

    switch (x)
    {
        case 11:
        exemplo11();
        break;

        case 12:
        exemplo12();
        break;

        case 13:
        exemplo13();
        break;

        default:
        printf("Invalido \n");
        break;
    }
}

    system ("pause");
    return 0;
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

int exemplo11 ()
{
    int exemplo11a();
    int n;

    printf("Digite uma quantidade de numeros \n");
    scanf("%d", &n);

    exemplo11a (n);
    
}

int exemplo12a (int x)
{
    int i = 0;
    int cont = 1;
    int multiplosDe9[20];
    int resultado [20];

    while (i < x)
    {
        multiplosDe9[i] = 9 * cont;
        resultado[i] = multiplosDe9 [i];
        i++;
        cont++;
    }
    i = 0;
    while (i < x)
    {
        printf("Valor = %d \n" ,resultado[x - 1]);
        x--;
    }
}

int exemplo12()
{
    int exemplo12a();
    int n;

    printf("Digite uma quantidade de numeros \n");
    scanf("%d", &n);

    exemplo12a (n);
}

int exemplo13a(int x)
{
    int multiplosDe9[20];
    int i = 0;
    int cont = 1;

    while(i < x)
    {
    multiplosDe9[i] = 9 * cont;
    i++;
    cont++;
    }

    printf("Valor = 1 \n");
    i = 0;
    while (i < x)
    {
        printf("Valor = %d \n", multiplosDe9[i]);
        i++;
    }
}

int exemplo13()
{
    int exemplo13a();
    int n;

    printf("Digite uma quantidade de numeros \n");
    scanf("%d", &n);

    exemplo13a(n);
}