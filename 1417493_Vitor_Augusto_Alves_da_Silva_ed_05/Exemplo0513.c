#include <stdio.h> 
#include <stdlib.h>

int main ()
{
    void exemplo0511();
    void exemplo0512();
    void exemplo0513();

    int x;

    printf("(11) - Multiplos de 9 \n");
    printf("(12) - Multiplos de 9 impares \n");
    printf("(13) - Multiplos de 9 pares, decrescente \n");

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