/*
 Exemplo0711 - v1.1. - 14 / 10 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "io.h"
#include "stdio.h"
#include "stdlib.h"

int main ()
{
    int x;

    void exemplo0711 ();

    while (x !=0)
{
    printf("\nExemplo 11 = Multiplos de 5 e impares gravados em txt \n");

    printf("\nEscolha um dos exemplos de 11 a 20 \n");
    scanf("%d", &x);

    switch (x)
    {
        case (11):
        exemplo0711();
        break;
    }
}

    system ("pause");
    return 0;
}

void exemplo0711 ()
{
    int n;
    int i;
    int numero = 0;
    int vetor [20];

    printf("Insira uma quantidade de numeros \n");
    scanf("%d", &n);

    i = 0;
    while (i < n)
    {
        numero = numero + 5;
        if (numero % 2 != 0)
        {
            vetor [i] = numero;
            i++;
        }
    }

    i = 0;
    while (i < n)
    {
        printf("%d - Multiplo de 5 e impar \n", vetor[i]);
        i++;
    }


    FILE *file;
    file = fopen("Exemplo0711.txt", "w");

    i = 0;
    while (i < n)
    {
    fprintf(file, "%d \n",vetor[i]);
    i++;
    }
    fclose(file);
    
    system ("pause");

}