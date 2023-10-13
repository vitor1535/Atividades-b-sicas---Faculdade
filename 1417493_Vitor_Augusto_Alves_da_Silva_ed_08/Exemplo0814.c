/*
 Exemplo0814 - v1.4. - 24 / 10 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "stdio.h"
#include "stdlib.h"
#include "io.h"
#include "string.h"
#include "time.h"

int main()
{
    int x;

    void method11();
    void method12();
    void method13();
    void method14();

    printf("11 - Ler tamanho de um array do teclado \n");
    printf("12 - Ler arranjo de arquivo \n");
    printf("13 - Numeros aleatorios entre 10 e 100, gravados no arquivo DADOS.TXT \n");
    printf("14 - Ler arquivo DADOS.TXT e descobrir o menor numero impar do arranjo \n");

    printf("\nEscolha uma opcao de 11 a 20 \n");
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

    system ("pause");
    return 0;    
}

void method11 ()
{
    int arranjo[100];
    int i = 0;
    int n = 100;
    int tam = 0;
    int numero;


    printf("Insira um arranjo de numeros inteiros, positivos e impares, 0 para parar.\n");

    i = 0;
    while (numero != 0)
    {  
    scanf("%d", &numero);
    if(numero > 0 && numero % 2 != 0) 
    {
    arranjo[i] = numero;
    i++;
    tam++;
    }
    }

    printf("Arranjo de numeros \n");

    i = 0;
    while (i < (tam))
    {
    printf("%d \n", arranjo[i]);
    i++;
    }

    if(tam <= 0)
    printf("Tamanho nulo \n");
    else
    printf("Tamanho do arranjo = %d \n", tam);
}

void method12 ()
{
    int arranjo[100];
    int i = 0;
    int n = 100;
    int tam = 0;
    int numero;

    FILE *file;
    file = fopen("ARRAY0812a.txt", "r");

    i = 0;
    while (numero != 7)
    {  
    fscanf(file, "%d", &numero);
    if(numero > 0 && numero % 2 != 0) 
    {
    arranjo[i] = numero;
    i++;
    tam++;
    }
    }


    FILE *file2;
    file2 = fopen("ARRAY0812b.txt", "w");

    fprintf(file2, "Tamanho = %d \n", tam);

    i = 0;
    while (i < (tam))
    {
    fprintf(file2, "%d \n", arranjo[i]);
    i++;
    }

    fclose(file);
    fclose(file2);
}

void method13()
{
    void sortearNumero();

    sortearNumero(10, 100);

}
void sortearNumero(int menor, int maior)
{
    int n;
    int i = 0;
    int valor[100];

    printf("Insira a quantidade de numeros aleatorios \n");
    scanf("%d", &n);

    srand(time(null));

    i = 0;
    while (i < n)
    {
        valor[i] = menor + rand() % (maior - menor);
        i++;
    }

    i = 0;
    while (i < n)
    {
        printf("Posicao %d = %d \n", i, valor[i]);
        i++;
    }

    FILE* file;
    file = fopen ("DADOS.TXT", "w");

    fprintf(file, "Quantidade de numeros aleatorios = %d \n\n",n);

    i = 0;
    while (i < n)
    {
    fprintf(file, "Posicao %d = %d \n", i, valor[i]);
    i++;
    }

    fclose(file);
}

void method14()
{
    void acharMenorImpar();

    acharMenorImpar();
}

void acharMenorImpar()
{
    int n;
    int i = 0;
    int valor[100];
    int menor = 100;

    FILE* file;
    file = fopen ("DADOS.TXT", "r");

    fscanf(file, "%d" ,&n);

    i = 0;
    while (i < n)
    {
        fscanf(file, "%d", &valor[i]);
        i++;
    }

    i = 1;
    while (i < n)
    {
    if (valor[i] % 2 != 0 && valor[i] < menor)
    {
        menor = valor[i];
        i++;
    }
    else
    i++;
    }

    i = 0;
    while (i < n)
    {
        printf("%d \n",valor[i]);
        i++;
    }

    printf("Menor valor impar do arranjo = %d \n", menor);

    fclose(file);
}