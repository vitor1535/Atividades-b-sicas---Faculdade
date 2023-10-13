/*
 Exemplo0912 - v1.2. - 29 / 10 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "stdio.h"
#include "stdlib.h"
#include "io.h"

int main ()
{   
    int x;

    void method11();
    void method12();

    printf("11 - Ler tamanho de uma matriz do teclado \n");
    printf("12 - Ler tamanho de uma matriz do de arquivo \n");

    printf("\nEscolha uma opcao \n");
    scanf("%d", &x);

    switch (x)
    {
        case 11:
        method11();
        break;
        
        case 12:
        method12();
        break;

    }

    system("pause");
    return 0;
}

void method11()
{
    int i1 = 0;
    int i2 = 0;
    int linha;
    int coluna;

    printf("Insira uma quantidade de linha e de colunas \n");
    scanf("%d %d", &linha, &coluna);

    printf("Preencha a matriz \n");

    float matriz [10][10];

    for (i1 = 0; i1 < linha; i1++)
    {
        for (i2 = 0; i2 < coluna; i2++)
        {
            scanf("%f", &matriz[i1][i2]);
            if(matriz[i1][i2] < 0)
            {
                printf("Valor invalido \n");
                system ("pause");
                exit (0);
            }
        }
    }

    for (i1 = 0; i1 < linha; i1++)
    {
        for (i2 = 0; i2 < coluna; i2++)
        {
            printf("%f \n", matriz[i1][i2]);
        }
    }

    printf("Dimensao da matriz = %d * %d \n", linha, coluna);
}

void method12()
{
    int i1 = 0;
    int i2 = 0;
    int linha;
    int coluna;

    printf("Insira uma quantidade de linha e de colunas \n");
    scanf("%d %d", &linha, &coluna);

    printf("Preencha a matriz \n");

    float matriz [10][10];

    for (i1 = 0; i1 < linha; i1++)
    {
        for (i2 = 0; i2 < coluna; i2++)
        {
            scanf("%f", &matriz[i1][i2]);
            if(matriz[i1][i2] < 0)
            {
                printf("Valor invalido \n");
                system ("pause");
                exit (0);
            }
        }
    }

    FILE* file;
    file = fopen("MATRIZ_01.TXT", "w");

    for (i1 = 0; i1 < linha; i1++)
    {   
        fprintf(file, "\n");
        for (i2 = 0; i2 < coluna; i2++)
        {
            fprintf(file, "%f    ", matriz[i1][i2]);
        }
    }

    printf("Dimensao da matriz = %d * %d \n", linha, coluna);

    fclose(file);
}