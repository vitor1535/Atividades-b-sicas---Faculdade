/*
 Exemplo1019 - v1.9. - 29 / 10 / 2022
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
    void method12();
    void method13();
    void method14();
    void method15();
    void method16();
    void method17();
    void method18();
    void method19();

    printf("11 - Gerar valores aleatorios com limite do teclado \n");
    printf("12 - Achar algum valor em um arranjo \n");
    printf("13 - Testar se arranjos sao iguais \n");
    printf("14 - Somar 2 arranjos \n");
    printf("15 - Testar se arranjo esta em ordem crescente \n");
    printf("16 - Gerar matriz transposta de matriz de arquivo \n");
    printf("17 - Testar se matriz de arquivos possui todos os valores igual a 0 \n");
    printf("18 - Testar se duas matrizes de arquivo sao iguais \n");
    printf("19 - Somar valores de 2 matrizes mais uma constante \n");

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

void method12()
{
    int n;
    int i = 0;
    int vetor[100];
    int procurado;
    int temporario;

    FILE* file;
    file = fopen("DADOS.TXT", "r");

    fscanf(file, "%d", &n);

    i = 0;
    while (i < n)
    {
        fscanf(file, "%d \n", &vetor[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {
        printf("%d \n",vetor[i]);
        i++;
    }

    fclose(file);

    printf("Procure um valor no arranjo \n");
    scanf("%d", &procurado);

    i = 0;
    while (i < n)
    {   
        temporario = vetor[i]; 
        if (procurado == temporario)
        {
            printf("Valor existe no arranjo \n");
            system ("pause");
            exit (0);
        }
        else
        {
            i++;
        }
    }

    printf("Valor nao existe no arranjo \n");
}

void method13()
{
    int n;
    int n2;
    int i = 0;
    int vetor[100];
    int vetor2[100];
    int procurado;
    int temporario;

    FILE* file;
    file = fopen("DADOS1.TXT", "r");

    fscanf(file, "%d", &n);

    i = 0;
    while (i < n)
    {
        fscanf(file, "%d \n", &vetor[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {
        printf("%d \n",vetor[i]);
        i++;
    }

    FILE* file2;
    file2 = fopen("DADOS2.TXT", "r");

    fscanf(file2, "%d", &n2);

    i = 0;
    while (i < n)
    {
        fscanf(file2, "%d \n", &vetor2[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {
        printf("%d \n",vetor2[i]);
        i++;
    }

    fclose(file);
    fclose(file2);

    i = 0;
    while (i < n)
    if (vetor[i] == vetor2[i] && n == n2)
    {   
        i++;
    }
    else
    {
        printf("Arranjos sao diferentes \n");
        system("pause");
        exit (0);
    }

    printf("Arranjos sao iguais \n");
}               

void method14()
{
    int n;
    int n2;
    int i = 0;
    int vetor[100];
    int vetor2[100];
    int procurado;
    int temporario;
    int soma = 0;

    FILE* file;
    file = fopen("DADOS1.TXT", "r");

    fscanf(file, "%d", &n);

    i = 0;
    while (i < n)
    {
        fscanf(file, "%d \n", &vetor[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {
        printf("%d \n",vetor[i]);
        i++;
    }

    FILE* file2;
    file2 = fopen("DADOS2.TXT", "r");

    fscanf(file2, "%d", &n2);

    i = 0;
    while (i < n)
    {
        fscanf(file2, "%d \n", &vetor2[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {
        printf("%d \n",vetor2[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {   
        soma += vetor[i];
        i++;
    }

    i = 0;
    while (i < n)
    {   
        soma += vetor2[i];
        i++;
    }

    printf("A soma dos 2 arranjos eh = %d \n", soma);

    fclose(file);
    fclose(file2);
}

void method15()
{
    int n;
    int n2;
    int i = 0;
    int vetor[100];
    int vetor2[100];
    int procurado;
    int temporario;
    int soma = 0;

    FILE* file;
    file = fopen("DADOS1.TXT", "r");

    fscanf(file, "%d", &n);

    i = 0;
    while (i < n)
    {
        fscanf(file, "%d \n", &vetor[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {
        printf("%d \n",vetor[i]);
        i++;
    }

    void crescente(int vetor[], int n);

    crescente(vetor, 10);

    fclose(file);
}

void crescente(int *vetor, int n)
{
    int i = 0;

    i = 0;
    while (i < n)
    {
        if (vetor[i] < vetor[i + 1])
        {
            i++;
        }
        else
        {
            printf("Nao esta em ordem crescente \n");
            system("pause");
            exit (0);
        }
    }

    printf("Esta em ordem crescente \n");
}

void method16()
{
    int n;
    int n2;
    int i = 0;
    int j = 0;
    int vetor[100];
    int vetor2[100];
    int procurado;
    int temporario;
    int soma = 0;
    int linha = 2;
    int coluna = 5;
    int matriz[linha][coluna];
    int transposta[coluna][linha];

    FILE* file;
    file = fopen("DADOS1.TXT", "r");

    fscanf(file, "%d", &n);

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
        fscanf(file, "%d  \n", &matriz[i][j]);
        }
    }

    printf("Matriz normal \n");

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
        printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
        transposta[j][i] = matriz[i][j];
        }
    }

    printf("Matriz composta \n");

    for (i = 0; i < coluna; i++)
    {
        for (j = 0; j < linha; j++)
        {
        printf("%d  ", transposta[i][j]);
        }
        printf("\n");
    }

    fclose(file);
}

void method17()
{
    int n;
    int n2;
    int i = 0;
    int j = 0;
    int vetor[100];
    int vetor2[100];
    int procurado;
    int temporario;
    int soma = 0;
    int linha = 2;
    int coluna = 5;
    int matriz[linha][coluna];
    int transposta[coluna][linha];

    FILE* file;
    file = fopen("DADOS1.TXT", "r");

    fscanf(file, "%d", &n);

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
        fscanf(file, "%d  \n", &matriz[i][j]);
        }
    }

    printf("Matriz \n");

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
        printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
        if (matriz[i][j] != 0)
        {
            printf("A matriz nao possui apenas zeros \n");
            system ("pause");
            exit (0);
        }
        }
    }

    printf("A matriz possui todos os valores igual a zero \n");

    fclose(file);
}

void method18()
{
    int n;
    int n2;
    int i = 0;
    int j = 0;
    int vetor[100];
    int vetor2[100];
    int procurado;
    int temporario;
    int soma = 0;
    int linha = 2;
    int coluna = 5;
    int matriz[linha][coluna];
    int matriz2[linha][coluna];
    int transposta[coluna][linha];

    FILE* file;
    file = fopen("DADOS1.TXT", "r");

    fscanf(file, "%d", &n);

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
        fscanf(file, "%d  \n", &matriz[i][j]);
        }
    }

    printf("Matriz 1\n");

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
        printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    FILE* file2;
    file2 = fopen("DADOS2.TXT", "r");

    fscanf(file2, "%d", &n2);

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
        fscanf(file2, "%d  \n", &matriz2[i][j]);
        }
    }

    printf("Matriz 2\n");

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
        printf("%d  ", matriz2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
        if (matriz[i][j] != matriz2[i][j])
        {
            printf("Matrizes sao diferentes \n");
            system("pause");
            exit (0);
        }
        }
    }

    printf("Matrizes sao iguais \n");

    fclose(file);
    fclose(file2);
}

void method19()
{
    int n;
    int n2;
    int i = 0;
    int j = 0;
    int vetor[100];
    int vetor2[100];
    int procurado;
    int temporario;
    int soma = 0;
    int linha = 2;
    int coluna = 5;
    int matriz[linha][coluna];
    int matriz2[linha][coluna];
    int transposta[coluna][linha];
    int total;

    FILE* file;
    file = fopen("DADOS1.TXT", "r");

    fscanf(file, "%d", &n);

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
        fscanf(file, "%d  \n", &matriz[i][j]);
        }
    }

    printf("Matriz 1\n");

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
        printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    FILE* file2;
    file2 = fopen("DADOS2.TXT", "r");

    fscanf(file2, "%d", &n2);

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
        fscanf(file2, "%d  \n", &matriz2[i][j]);
        }
    }

    printf("Matriz 2\n");

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
        printf("%d  ", matriz2[i][j]);
        }
        printf("\n");
    }

    int somarMatriz(int matriz1[2][5], int matriz2[2][5], int constante);

    total = somarMatriz(matriz,matriz2, 10);

    printf("Soma das duas matrizes = %d \n", total);

    fclose(file);
    fclose(file2);
}

int somarMatriz(int matriz1[2][5], int matriz2[2][5], int constante)
{
    

    int i = 0;
    int j = 0;
    int resultado = 0;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
        resultado += matriz1[i][j];
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
        resultado += matriz2[i][j];
        }
    }

    resultado += constante;
    
    return resultado;
}