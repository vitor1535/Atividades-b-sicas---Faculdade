/*
 Prova - v0.1. - 07 / 11 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "stdio.h"
#include "stdlib.h"

int main ()
{
    int x;

    void questao06();
    void questao07();
    void questao08();

    while (x != 0)
    {
    printf("6 - Questao 6 \n");
    printf("7 - Questao 7 \n");
    printf("8 - Questao 8 \n");
    printf("\n0 - Sair \n");

    printf("Escolha um numero \n");

    scanf("%d", &x);

    switch (x)
    {
        case 6:
        questao06();
        break;

        case 7:
        questao07();
        break;

        case 8:
        questao08();
        break;

    }
    }

    system ("pause");
    return 0;
}

void questao06 ()
{
    int n;
    int i = 0;
    int numero[100];
    int temp;
    int somaAbundante [100];

    printf("Insira a quantidade de numeros inteiros \n");
    scanf("%d", &n);

    i = 0;
    while (i < n)
    {
        scanf("%d", &numero[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {
        somaAbundante[i] = 0;
        i++;
    }


    i = 0;
    while (i < n)
    {
    temp = 2;
    while (temp != numero[i])
    {
        if (numero[i] % temp == 0)
        {
            somaAbundante[i] += temp;
            temp++;
        }
        else
        {
            temp++;
        }
    }
    i++;
    }

    i = 0;
    while (i < n)
    {
    printf("%d \n", somaAbundante[i]);
    i++;
    }

    i = 0;
    while (i < n)
    {
    if (somaAbundante[i] < numero[i])
    {
        printf("%d - Numero abundante \n", numero[i]);
        i++;
    }
    else
    {
        printf("%d - Nao eh numero abundante \n", numero[i]);
        i++;
    }
    }

}

void questao07()
{
    int i = 0;
    char palavra[100];

    i = 0;
    while (palavra[i] != 'P' && palavra[i+1] != 'A' && palavra[i+2] != 'R' && palavra[i+3] != 'A' && palavra[i+4] != 'R')
    {
    printf("Insira uma palavra \n");
    scanf("%s", palavra);

    while (palavra[i] != '\0')
    if (palavra[i] == '-')
    {
        printf("Palavara composta \n");
        system ("pause");
        exit (0);
    }
    else
    {
        i++;
    }
    i = 0;
    printf("Palavra nao composta \n");
    }

    printf("%s \n", palavra);


}

void questao08 ()
{
    int fatorial (int x);

    int n;
    int k;

    int resultado1;
    int resultado2;
    int resultado3;
    int resultadoFinal;

    printf("Insira os valores de n e k \n");
    scanf("%d %d", &n, &k);

    resultado1 = fatorial (n);
    resultado2 = fatorial (k);
    resultado3 = fatorial (n - k);

    resultadoFinal = resultado1 / resultado2 + resultado3;

    printf("%d \n", resultado1);
    printf("%d \n", resultado2);
    printf("%d \n", resultado3);

    printf("Resultado = %d \n", resultadoFinal);

}

int fatorial (int x)
{
    int resultado;

    if(x == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = x * fatorial(x-1);
    }

    return resultado;
}