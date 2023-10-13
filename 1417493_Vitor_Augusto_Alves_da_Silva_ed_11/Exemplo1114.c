/*
 Exemplo1114 - v1.4. - 11 / 11 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "stdio.h" 
#include "stdlib.h"
#include "io.h" 
#include "time.h"
#include "stdbool.h"

int main ()
{
    int x;

    void method11();
    void method12();
    void method13();
    void method14();

    while (x != 0)
    {     
    printf("\n");
    printf("11 - Gerar valores aleatorios com limite do teclado \n");
    printf("12 - Procurar o maior valor par em um arranjo \n");
    printf("13 - Procurar o menor valor ímpar em um arranjo. \n");
    printf("14 - Somar todos os valores em um arranjo entre duas posicoes dadas \n");

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

    }
    }    



    system ("pause");
    return 0;
}

void method11()
{
    int n;
    int i = 0;
    int vetor[100];
    int a;
    int b;

    printf("Insira quantos valores voce quer \n");
    scanf("%d", &n); 

    printf("Insira o limite inferior e superior \n");
    scanf("%d %d", &a, &b);

    srand(time(NULL));

    for(i = 0; i < n; i++)
    {
    vetor[i] = a + rand() % (b - a + 1);
    }

    for(i = 0; i < n; i++)
    {
    printf("%d \n", vetor[i]);
    }

    FILE *file;
    file = fopen("DADOS.TXT", "w");

    fprintf(file, "%d \n\n", n);

    for(i = 0; i < n; i++)
    {
    fprintf(file, "%d \n", vetor[i]);
    }
    
    fclose(file);
}

void method12()
{
    int maiorPar(int vetor[], int n);

    int i = 0;
    int n;
    int vetor[100];
    int maior;

    FILE *file;
    file = fopen("DADOS.TXT", "r");

    fscanf(file, "%d", &n);

    for(i = 0; i < n; i++)
    {
    fscanf(file, "%d", &vetor[i]);
    }
    
    maior = maiorPar(vetor, n);

    printf("Maior valor do arranjo = %d \n", maior);

    fclose(file);  

}

int maiorPar(int vetor[], int n)
{
    int i = 0;
    int maior;

    maior = vetor[0];
    
    for(i = 1; i < n; i++)
    {
    if(vetor[i] > maior && vetor[i] % 2 == 0)
    {
        maior = vetor[i];
    }
    }

    return maior;    
}

void method13()
{
    int menorImpar(int vetor[], int n);

    int i = 0;
    int n;
    int vetor[100];
    int menor;

    FILE *file;
    file = fopen("DADOS.TXT", "r");

    fscanf(file, "%d", &n);

    for(i = 0; i < n; i++)
    {
    fscanf(file, "%d", &vetor[i]);
    }
    
    menor = menorImpar(vetor, n);

    printf("Menor valor impar do arranjo = %d \n", menor);

    fclose(file);  

}

int menorImpar(int vetor[], int n)
{
    int i = 0;
    int menor;

    menor = vetor[0];
    
    for(i = 1; i < n; i++)
    {
    if(vetor[i] < menor && vetor[i] % 2 != 0)
    {
        menor = vetor[i];
    }
    }

    return menor;    
}

void method14()
{
    int somarDoArranjo(int vetor[], int n);

    int i = 0;
    int n;
    int vetor[100];
    int menor;
    int soma;

    FILE *file;
    file = fopen("DADOS.TXT", "r");

    fscanf(file, "%d", &n);

    for(i = 0; i < n; i++)
    {
    fscanf(file, "%d", &vetor[i]);
    }
    
    soma = somarDoArranjo(vetor, n);

    printf("Soma dos valores que estao entre os valores escolhidos = %d \n", soma);

    fclose(file);  

}

int somarDoArranjo(int vetor[], int n)
{
    int a;
    int b;
    int soma = 0;

    printf("Insira o limite inferior e o superior \n");
    scanf("%d %d", &a, &b);

    int i = 0;

    for(i = 0; i < n; i++)
    {
    if (vetor[i] > a && vetor[i] < b)
    {
        soma += vetor[i];
    }                    
    }    

    return soma;
}