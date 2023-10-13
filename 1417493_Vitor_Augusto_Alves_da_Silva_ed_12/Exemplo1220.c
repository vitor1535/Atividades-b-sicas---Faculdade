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
    void method13();
    void method14();
    void method15();
    void method16();
    void method17();
    void method18();
    void method19();
    void method20();

    while (x != 0)
    {     
    printf("\n");
    printf("11 - Gerar matriz MxN \n");
    printf("12 - Escalar uma matriz, multiplicando todos os seus valores por uma constante \n");
    printf("13 - Testar se uma matriz eh a identidade \n");
    printf("14 - Testar a igualdade de duas matrizes \n");
    printf("15 - Somar duas matrizes e mostrar o resultado \n");
    printf("16 - Operar duas linhas da matriz \n");
    printf("17 - Operar duas linhas da matriz (2) \n");
    printf("18 - Dizer em qual linha da matriz se encontra certo valor \n");
    printf("19 - Dizer em qual coluna da matriz se encontra certo valor \n");
    printf("20 - Transpor os dados em uma matriz \n");

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

        case 13:
        method13();
        break;

        case 14:
        method14();
        break;

        case 15:
        method15();
        break;

        case 16:
        method16();
        break;

        case 17:
        method17();
        break;

        case 18:
        method18();
        break;

        case 19:
        method19();
        break;

        case 20:
        method20();
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

    fclose(file);
}

void method13()
{
    int n;
    int M;
    int N;
    int i1;
    int i2;
    int matriz[100][100];
    int constante;
    int resultado = 0;

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

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            fscanf(file, "%d", &matriz[i1][i2]);
        }
    }

    printf("Matriz \n\n");

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            printf("%d ", matriz[i1][i2]);
        }
        printf("\n");
    }

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            if(i1 == i2)
            {
                if(matriz[i1][i2] == 1)
                {
                    resultado++;
                }
            }
            else
            {
                if (matriz[i1][i2] == 0)
                {
                    resultado++;
                }
            }
        }
    }

    if (resultado == n)
    printf("Matriz identidade \n");
    else
    printf("Matriz nao identidade \n");

    fclose(file);
}

void method14()
{
    int n, n2;
    int M, M2;
    int N, N2;
    int i1, j1;
    int i2, j2;
    int matriz[100][100], matriz2[100][100];
    int constante;
    int resultado = 0;

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

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            fscanf(file, "%d", &matriz[i1][i2]);
        }
    }

    printf("Matriz \n\n");

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            printf("%d ", matriz[i1][i2]);
        }
        printf("\n");
    }

    FILE *file2;
    file2 = fopen("DADOS2.TXT", "r");

    fscanf(file2, "%d", &n2);

    M2 = sqrt(n2);
    N2 = sqrt(n2);

    if (M2 * N2 != n2)
    {
        printf("Matriz nao possui linhas e colunas de mesmo tamanho (matrizes diferentes) \n");
        system ("pause");
        exit (0);
    }

    for (i1 = 0; i1 < M2; i1++)
    {
        for (i2 = 0; i2 < N2; i2++)
        {
            fscanf(file2, "%d", &matriz2[i1][i2]);
        }
    }

    printf("Matriz 2 \n\n");

    for (i1 = 0; i1 < M2; i1++)
    {
        for (i2 = 0; i2 < N2; i2++)
        {
            printf("%d ", matriz2[i1][i2]);
        }
        printf("\n");
    }

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            if (matriz[i1][i2] != matriz2[i1][i2])
            {
                printf("Matrizes diferentes \n");
                system("pause");
                exit (0);
            }
        }
    }

    printf("Matrizes iguais \n");

    fclose(file);
    fclose(file2);
}

void method15()
{
    int n, n2;
    int M, M2;
    int N, N2;
    int i1, j1;
    int i2, j2;
    int matriz[100][100], matriz2[100][100];
    int constante;
    int resultado = 0;

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

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            fscanf(file, "%d", &matriz[i1][i2]);
        }
    }

    printf("Matriz \n\n");

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            printf("%d ", matriz[i1][i2]);
            resultado += matriz[i1][i2];
        }
        printf("\n");
    }

    FILE *file2;
    file2 = fopen("DADOS2.TXT", "r");

    fscanf(file2, "%d", &n2);

    M2 = sqrt(n2);
    N2 = sqrt(n2);

    if (M2 * N2 != n2)
    {
        printf("Matriz nao possui linhas e colunas de mesmo tamanho (matrizes diferentes) \n");
        system ("pause");
        exit (0);
    }

    for (i1 = 0; i1 < M2; i1++)
    {
        for (i2 = 0; i2 < N2; i2++)
        {
            fscanf(file2, "%d", &matriz2[i1][i2]);
        }
    }

    printf("Matriz 2 \n\n");

    for (i1 = 0; i1 < M2; i1++)
    {
        for (i2 = 0; i2 < N2; i2++)
        {
            printf("%d ", matriz2[i1][i2]);
            resultado += matriz2[i1][i2];
        }
        printf("\n");
    }

    printf("Somar dos valores das 2 matrizes = %d \n", resultado);

    fclose(file);
    fclose(file2);
}

void method16()
{
    int n, n2;
    int M, M2;
    int N, N2;
    int i1, j1;
    int i2, j2;
    int matriz[100][100], matriz2[100][100], matriz3[100][100];
    int constante;
    int resultado = 0;

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

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            fscanf(file, "%d", &matriz[i1][i2]);
        }
    }

    printf("Matriz \n\n");

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            printf("%d ", matriz[i1][i2]);
            resultado += matriz[i1][i2];
        }
        printf("\n");
    }

    FILE *file2;
    file2 = fopen("DADOS2.TXT", "r");

    fscanf(file2, "%d", &n2);

    M2 = sqrt(n2);
    N2 = sqrt(n2);

    if (M2 * N2 != n2)
    {
        printf("Matriz nao possui linhas e colunas de mesmo tamanho (matrizes diferentes) \n");
        system ("pause");
        exit (0);
    }

    for (i1 = 0; i1 < M2; i1++)
    {
        for (i2 = 0; i2 < N2; i2++)
        {
            fscanf(file2, "%d", &matriz2[i1][i2]);
        }
    }

    printf("Matriz 2 \n\n");

    for (i1 = 0; i1 < M2; i1++)
    {
        for (i2 = 0; i2 < N2; i2++)
        {
            printf("%d ", matriz2[i1][i2]);
        }
        printf("\n");
    }

    printf("Matriz 3 \n\n");

    for (i1 = 0; i1 < M2; i1++)
    {
        for (i2 = 0; i2 < N2; i2++)
        {
            matriz3[i1][i2] = matriz[i1][i2] + matriz2[i1][i2] * constante;
            printf("%d ", matriz3[i1][i2]);
        }
        printf("\n");
    }

    fclose(file);
    fclose(file2);
}

void method17()
{
    int n, n2;
    int M, M2;
    int N, N2;
    int i1, j1;
    int i2, j2;
    int matriz[100][100], matriz2[100][100], matriz3[100][100];
    int constante;
    int resultado = 0;

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

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            fscanf(file, "%d", &matriz[i1][i2]);
        }
    }

    printf("Matriz \n\n");

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            printf("%d ", matriz[i1][i2]);
            resultado += matriz[i1][i2];
        }
        printf("\n");
    }

    FILE *file2;
    file2 = fopen("DADOS2.TXT", "r");

    fscanf(file2, "%d", &n2);

    M2 = sqrt(n2);
    N2 = sqrt(n2);

    if (M2 * N2 != n2)
    {
        printf("Matriz nao possui linhas e colunas de mesmo tamanho (matrizes diferentes) \n");
        system ("pause");
        exit (0);
    }

    for (i1 = 0; i1 < M2; i1++)
    {
        for (i2 = 0; i2 < N2; i2++)
        {
            fscanf(file2, "%d", &matriz2[i1][i2]);
        }
    }

    printf("Matriz 2 \n\n");

    for (i1 = 0; i1 < M2; i1++)
    {
        for (i2 = 0; i2 < N2; i2++)
        {
            printf("%d ", matriz2[i1][i2]);
        }
        printf("\n");
    }

    printf("Matriz 3 \n\n");

    for (i1 = 0; i1 < M2; i1++)
    {
        for (i2 = 0; i2 < N2; i2++)
        {
            matriz3[i1][i2] = matriz[i1][i2] - (matriz2[i1][i2] * constante);
        }
    }

    for (i1 = 0; i1 < M2; i1++)
    {
        for (i2 = 0; i2 < N2; i2++)
        {
            printf("%d ", matriz3[i1][i2]);
        }
        printf("\n");
    }

    fclose(file);
    fclose(file2);
}

void method18()
{
    int n, n2;
    int M, M2;
    int N, N2;
    int i1, j1;
    int i2, j2;
    int matriz[100][100], matriz2[100][100], matriz3[100][100];
    int constante;
    int resultado = 0;
    int valor;

    printf("Procure um valor \n");
    scanf("%d", &valor);

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

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            fscanf(file, "%d", &matriz[i1][i2]);
        }
    }

    printf("Matriz \n\n");

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            printf("%d ", matriz[i1][i2]);
        }
        printf("\n");
    }

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            if (matriz[i1][i2] == valor)
            {
                printf("Valor encontrado na linha %d \n", i1 + 1);
                system("pause");
                exit (0);
            }
        }
    }

    printf("Valor nao encontrado \n");

    fclose(file);
}

void method19()
{
    int n, n2;
    int M, M2;
    int N, N2;
    int i1, j1;
    int i2, j2;
    int matriz[100][100], matriz2[100][100], matriz3[100][100];
    int constante;
    int resultado = 0;
    int valor;

    printf("Procure um valor \n");
    scanf("%d", &valor);

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

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            fscanf(file, "%d", &matriz[i1][i2]);
        }
    }

    printf("Matriz \n\n");

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            printf("%d ", matriz[i1][i2]);
        }
        printf("\n");
    }

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            if (matriz[i1][i2] == valor)
            {
                printf("Valor encontrado na coluna %d \n", i2 + 1);
                system("pause");
                exit (0);
            }
        }
    }

    printf("Valor nao encontrado \n");

    fclose(file);
}

void method20()
{
    int n, n2;
    int M, M2;
    int N, N2;
    int i1, j1;
    int i2, j2;
    int matriz[100][100], matriz2[100][100], matriz3[100][100];
    int constante;
    int resultado = 0;
    int valor;
    int temp;

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

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            fscanf(file, "%d", &matriz[i1][i2]);
        }
    }

    printf("Matriz \n\n");

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            printf("%d ", matriz[i1][i2]);
        }
        printf("\n");
    }

    printf("Matriz transposta \n");

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            temp = matriz[i1][i2];
            matriz2[i1][i2] = matriz[i2][i1];
            matriz2[i2][i1] =  temp;
        }
    }

    for (i1 = 0; i1 < M; i1++)
    {
        for (i2 = 0; i2 < N; i2++)
        {
            printf("%d ", matriz2[i1][i2]);
        }
        printf("\n");
    }

    fclose(file);
}