#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main ()
{
    void exemplo0511();
    void exemplo0512();
    void exemplo0513();
    void exemplo0514();
    void exemplo0515();

    int x;

    printf("(11) - Multiplos de 9 \n");
    printf("(12) - Multiplos de 9 impares \n");
    printf("(13) - Multiplos de 9 pares, decrescente \n");
    printf("(14) - Multiplos de 9, por sequencia dos inversos, denominador crescente \n");
    printf("(15) - Multiplos de 9, por sequencia dos inversos, denominador crescente aumentando o expoente \n");

    printf("\n Escolha um dos exemplos de 11 a 20. \n");
    scanf("%d", &x);

    switch (x)
    {
        case 11:
        exemplo0511();
        break;

        case 12:
        exemplo0512();
        break;

        case 13:
        exemplo0513();
        break;

        case 14:
        exemplo0514();
        break;

        case 15:
        exemplo0515();
        break;
    }









    system ("pause");
    return 0;
}

void exemplo0511 ()
{
    int n;
    int valor = 9;
    int i = 0;
    int multiplos[20];

    printf("Digite a quantidade de multiplos de 9 que serao mostrados \n");
    scanf("%d", &n);

    while (i < n)
    {
        multiplos[i] = valor;
        valor = valor + 9;
        printf("%d \n" , multiplos[i]);
        i++;
    }
}

void exemplo0512 ()
{
    int n;
    int valor = 9;
    int i = 0;
    int multiplos[20];

    printf("Digite a quantidade de multiplos de 9 que serao mostrados \n");
    scanf("%d", &n);

    while (i < n)
    {
        multiplos[i] = valor;
        valor = valor + 9;
        if (!(multiplos[i] % 2 == 0))
        {
        printf("%d \n" , multiplos[i]);
        i++;
        }
    }
}

void exemplo0513 ()
{
    int n;
    int valor = 18;
    int i = 0;
    int multiplos[20];

    printf("Digite a quantidade de multiplos de 9 que serao mostrados \n");
    scanf("%d", &n);

    while (i < n)
    {
        multiplos[i] = valor;
        if ((multiplos[i] % 2 == 0))
        {
        valor = valor + 18;
        i++;
        }
    }

    for (i = 0;i < n;n--)
    {
        printf("Multiplos de 9 pares em ordem decrescente = %d \n", multiplos[n-1]);
    }
}

void exemplo0514 ()
{
    int n;
    int valor = 9;
    int i = 0;
    int multiplos[20];

    printf("Digite a quantidade de multiplos de 9, que serao mostrados por sequencia dos inversos, de forma crescente nos denominadores. \n");
    scanf("%d", &n);

    while (i < n)
    {
        multiplos[i] = valor;
        valor = valor + 9;
        i++;
    }

    float resultado[20];

    for (i = 0;i < n;i++)
    {
        resultado[i] = 1 / (float)multiplos[i];
    }

    for (i = 0;i < n;i++)
    {
        printf("Multiplos de 9 por sequencia dos inversos, em ordem crescente nos denominadores = 1/%d \n", multiplos[i]);
    }
}

void exemplo0515 ()
{
    int n;
    int valor = 9;
    int i = 0;
    int multiplos[20];
    float x;

    printf("Digite a quantidade de multiplos de 9, que serao mostrados por sequencia dos inversos, de forma crescente nos denominadores. \n");
    scanf("%d", &n);

    printf("Digite o valor do denominador \n");
    scanf("%f", &x);

    while (i < n)
    {
        multiplos[i] = pow (x, i);
        i++;
    }

    for (i = 0;i < n;i++)
    {
        printf("1/%d \n", multiplos[i]);
    }
}    