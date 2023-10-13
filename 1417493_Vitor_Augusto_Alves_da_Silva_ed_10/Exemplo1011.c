/*
 Exemplo1011 - v1.1. - 29 / 10 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "stdio.h"
#include "stdlib.h"
#include "io.h"
#include "time.h"

int main ()
{
    int x;

    void method11();

    printf("11 - Gerar valores aleatorios com limite do teclado \n");

    printf("Escolha um dos metodos acima \n");
    scanf("%d", &x);

    switch (x)
    {
        case 11:
        method11();
        break;

    }

    system ("pause");
    return 0;
}

void method11 ()
{   
    int n;
    int i = 0;
    int numero1;
    int numero2;
    int vetor[100];

    printf("Insira quantos numeros gerados voce quer \n");
    scanf("%d", &n);

    printf("Insira 2 numeros para serem os limites inferiores e superiores (Entre 0 e 100) \n");
    scanf("%d %d", &numero1, &numero2);

    if(numero1 < 0 || numero1 > 100 || numero2 < 0 || numero2 > 100)
    {
        printf("Numero invalido \n");
        system ("pause");
        exit (0);
    }
    

    srand(time(NULL));

    i = 0;
    while (i < n)
    {
        vetor[i] = numero1 + rand() % (numero2 - numero1 + 1);
        i++;
    }

    i = 0;
    while (i < n)
    {
    printf("Posicao %d = %d \n", i, vetor[i]);
    i++;
    }
    
    FILE* file;
    file = fopen("DADOS.TXT", "w");

    fprintf(file, "%d \n\n", n);

    i = 0;
    while (i < n)
    {
    fprintf(file, "%d \n", vetor[i]);
    i++;
    }

    fclose(file);
}