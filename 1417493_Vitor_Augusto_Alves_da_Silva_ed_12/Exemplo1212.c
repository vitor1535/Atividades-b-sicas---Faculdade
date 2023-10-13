/*
 Exemplo1211 - v1.1. - 16 / 11 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "stdio.h" 
#include "stdlib.h"
#include "io.h" 
#include "time.h"
#include "stdbool.h"
#include "math.h"

int main ()
{
    int x;

    void method11();
    void method12();

    while (x != 0)
    {     
    printf("\n");
    printf("11 - Gerar matriz MxN \n");
    printf("12 - Escalar uma matriz, multiplicando todos os seus valores por uma constante \n");

    printf("0  - Sair \n");

    printf("Escolha um dos metodos acima \n");
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
    }    



    system ("pause");
    return 0;
}

void method11()
{
    int M;
    int N;
    int i1 = 0;
    int i2 = 0;
    int a;
    int b;
    int n;
    int matriz[100][100];

    srand(time(NULL));

    printf("Insira o comprimento e largura da matriz \n");
    scanf("%d %d", &M, &N);

    printf("Insira o valor minimo e maximo de uma posicao da matriz\n");
    scanf("%d %d", &a, &b);

    n = M * N;

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            matriz[i1][i2] = a + rand() % (b - a + 1);
        }
    }

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            printf("%d ", matriz[i1][i2]);
        }
        printf("\n");
    }

    FILE *file;
    file = fopen("DADOS.TXT", "w");

    fprintf(file, "%d \n\n", n);

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            fprintf(file, "%d \n", matriz[i1][i2]);
        }
    }

    fclose(file);
}

void method12()
{
    int n;
    int M;
    int N;
    int i1;
    int i2;
    int matriz[100][100];
    int constante;

    printf("Insira a constante \n");
    scanf("%d", &constante);

    FILE *file;
    file = fopen("DADOS.TXT", "r");

    fscanf(file, "%d", &n);

    M = sqrt(n);
    N = sqrt(n);

    if (M * N != n)
    {
        printf("Matriz nao possui linhas e colunas de mesmo tamanho \n");
        system ("pause");
        exit (0);
    }

    printf("%d  %d \n", M, N);

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            fscanf(file, "%d", &matriz[i1][i2]);
        }
    }

    printf("Matriz normal \n\n");

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            printf("%d ", matriz[i1][i2]);
        }
        printf("\n");
    }

    printf("Matriz escalada por %d \n\n", constante);

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            printf("%d ", matriz[i1][i2] * constante);
        }
        printf("\n");
    }


}