/*
 Recuperacao01 - v0.1. - 08 / 11 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "stdio.h"
#include "stdlib.h"

int main ()
{
    int x;

    void exercicio01();

    while (x != 0)
    {
    printf("1 - Exercicio01 \n");

    printf("\n0 - Sair \n");

    printf("Escolha um numero \n");

    scanf("%d", &x);

    switch (x)
    {
        case 1:
        exercicio01();
        break;

    }
    }

    system ("pause");
    return 0;
}

void exercicio01()
{
    int somaDivisores(int x);

    int i = 0;
    int n;
    int vetor [100];
    int vetorSoma[100];

    printf("Insira uma quantidade de numeros \n");
    scanf("%d", &n);

    printf("Insira os numeros \n");

    i = 0;
    while (i < n)
    {
        scanf("%d", &vetor[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {
        vetorSoma[i] = somaDivisores(vetor[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {
        printf("Soma dos divisores = %d \n", vetorSoma[i]);
        i++;
    }

}

int somaDivisores(int x)
{
    int i = 0;
    int temp = 2;
    int soma = 0;

    while (temp != x)
    {
    if (x % temp == 0)
    {
        soma += temp;
        temp++;
    }
    else
    {
        temp++;
    }
    }

    return soma;
}