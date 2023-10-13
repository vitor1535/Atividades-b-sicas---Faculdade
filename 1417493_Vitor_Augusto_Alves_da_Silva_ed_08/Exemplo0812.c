/*
 Exemplo0812 - v1.2. - 24 / 10 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "stdio.h"
#include "stdlib.h"
#include "io.h"
#include "string.h"

int main()
{
    int x;

    void method11();
    void method12();

    printf("11 - Ler tamanho de um array do teclado \n");
    printf("12 - Ler arranjo de arquivo \n");

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