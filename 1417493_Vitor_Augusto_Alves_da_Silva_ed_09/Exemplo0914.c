/*
 Exemplo0914 - v1.4. - 29 / 10 / 2022
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
    void method13();
    void method14();

    printf("11 - Ler tamanho de uma matriz do teclado \n");
    printf("12 - Gravar uma matriz em arquivo \n");
    printf("13 - Mostrar valores da diagonal principal de uma matriz \n");
    printf("14 - Mostrar valores da diagonal secundaria de uma matriz \n");

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

        case 13:
        method13();
        break;

        case 14:
        method14();
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

void method13()
{
    int i  = 0;
    int i1 = 0;
    int i2 = 0;
    int contador;
    int linha;
    int coluna;

    printf("Insira uma quantidade de linha e de colunas \n");
    scanf("%d %d", &linha, &coluna);

    float matriz [10][10];

    printf("Preencha a matriz \n");

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

    printf("Valores da matriz = \n");

    for (i1 = 0; i1 < linha; i1++)
    {
        printf("\n");
        for (i2 = 0; i2 < coluna; i2++)
        {
            printf("%f    ", matriz[i1][i2]);
        }
    }

    printf("\n\n");

    contador = 1;
    i1 = 0;
    i2 = 0;
    for (i1 = 0; i1 < linha; i1++)
    {
        printf("\n");
        for (i2 = 0; i2 < coluna; i2++)
        {
            if (i1 == i2)
            {
            printf("Valor (%x) da diagonal principal = %f    ", contador, matriz[i1][i2]);
            contador++;
            }
        }
    }

    printf("\n");
}

void method14()
{
    int i  = 0;
    int i1 = 0;
    int i2 = 0;
    int contador;
    int linha;
    int coluna;
    int dif;
    int posX;
    int posY;
    int contadorX;
    int contadorY;
    
    int i1Temp;
    int i2Temp;
    int linhaTemp;
    int colunaTemp;

    printf("Insira uma quantidade de linha e de colunas \n");
    scanf("%d %d", &linha, &coluna);

    float matriz [10][10];

    printf("Preencha a matriz \n");

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

    printf("Valores da matriz = \n");

    for (i1 = 0; i1 < linha; i1++)
    {
        printf("\n");
        for (i2 = 0; i2 < coluna; i2++)
        {
            printf("%f    ", matriz[i1][i2]);
        }
    }

    printf("\n\n");

    posX = 0;
    posY = coluna - 1;
    contadorX = 0;
    contadorY = 0;

    i = 0;
    while (i < linha && i < coluna)
    {
    printf("%f \n\n", matriz[posX + contadorX][posY - contadorY]);
    contadorX++;
    contadorY++;
    i++;
    }
}