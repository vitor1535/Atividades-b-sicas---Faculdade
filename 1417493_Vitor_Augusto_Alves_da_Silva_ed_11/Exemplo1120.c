/*
 Exemplo1120 - v2.0. - 11 / 11 / 2022
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
    void method15();
    void method16();
    void method17();
    void method18();
    void method19();
    void method20();

    while (x != 0)
    {     
    printf("\n");
    printf("11 - Gerar valores aleatorios com limite do teclado \n");
    printf("12 - Procurar o maior valor par em um arranjo \n");
    printf("13 - Procurar o menor valor ímpar em um arranjo. \n");
    printf("14 - Somar todos os valores em um arranjo entre duas posicoes dadas \n");
    printf("15 - Achar a media dos valores em um arranjo entre duas posicoes dadas \n");
    printf("16 - Verificar se todos os valores sao positivos em um arranjo \n");
    printf("17 - Dizer se esta ordenado, ou nao, em ordem decrescente \n");
    printf("18 - Dizer se determinado valor esta presente em arranjo, entre duas posicoes indicadas \n");
    printf("19 - Escalar dados em arranjo, entre duas posicoes dadas, multiplicando cada valor por uma constante \n");
    printf("20 - Colocar valores em arranjo em ordem decrescente \n");

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

void method15()
{
    float mediaDoArranjo(int vetor[], int n);

    int i = 0;
    int n;
    int vetor[100];
    int menor;
    float media;

    FILE *file;
    file = fopen("DADOS.TXT", "r");

    fscanf(file, "%d", &n);

    for(i = 0; i < n; i++)
    {
    fscanf(file, "%d", &vetor[i]);
    }
    
    media = mediaDoArranjo(vetor, n);

    printf("Soma dos valores que estao entre os valores escolhidos = %f \n", media);

    fclose(file);  

}

float mediaDoArranjo(int vetor[], int n)
{
    int a;
    int b;
    int soma = 0;
    float media;
    int contador = 0;

    printf("Insira o limite inferior e o superior \n");
    scanf("%d %d", &a, &b);

    int i = 0;

    for(i = 0; i < n; i++)
    {
    if (vetor[i] > a && vetor[i] < b)
    {
        soma += vetor[i];
        contador++;
    }                    
    }

    media = (float)soma / (float)contador;

    return media;
}

void method16()
{
    bool positivosNoArranjo(int vetor[], int n);

    int i = 0;
    int n;
    int vetor[100];
    int menor;
    float media;
    int resultado;

    FILE *file;
    file = fopen("DADOS.TXT", "r");

    fscanf(file, "%d", &n);

    for(i = 0; i < n; i++)
    {
    fscanf(file, "%d", &vetor[i]);
    }

    resultado = positivosNoArranjo(vetor, n);

    if (resultado == 0)
    printf("Ha 1 ou mais valores nao positivo(s)\n");

    if (resultado == 1)
    printf("Todos os valores sao positivos \n");


    fclose(file);  

}

bool positivosNoArranjo(int vetor[], int n)
{
    int a;
    int b;
    int soma = 0;
    float media;
    int contador = 0;
    bool resultado;

    int i = 0;

    for(i = 0; i < n; i++)
    {
    if (!(vetor[i] > 0))
    {
        resultado = false;
        break;
    }
    else
    {
        resultado = true;
    }                    
    }

    return resultado;
}

void method17()
{
    bool ordemCrescente(int vetor[], int n);

    int i = 0;
    int n;
    int vetor[100];
    int menor;
    float media;
    int resultado;

    FILE *file;
    file = fopen("DADOS.TXT", "r");

    fscanf(file, "%d", &n);

    for(i = 0; i < n; i++)
    {
    fscanf(file, "%d", &vetor[i]);
    }

    resultado = ordemCrescente(vetor, n);

    if (resultado == 0)
    printf("Arranjo nao esta em ordem crescente \n");

    if (resultado == 1)
    printf("Arranjo esta em ordem crescente \n");

    fclose(file);  

}

bool ordemCrescente(int vetor[], int n)
{
    int a;
    int b;
    int soma = 0;
    float media;
    int contador = 0;
    bool resultado;

    int i = 0;

    for(i = 0; i < (n-1); i++)
    {
    if (vetor[i] > vetor[i+1])
    {
        return false;
    }              
    }

    return true;    
}

void method18()
{
    bool acharValor(int procurado, int vetor[], int n);

    int i = 0;
    int n;
    int vetor[100];
    int menor;
    float media;
    int resultado;
    int procurado;

    FILE *file;
    file = fopen("DADOS.TXT", "r");

    fscanf(file, "%d", &n);

    for(i = 0; i < n; i++)
    {
    fscanf(file, "%d", &vetor[i]);
    }

    printf("Procure um valor no arranjo \n");
    scanf("%d", &procurado);

    resultado = acharValor(procurado, vetor, n);

    if (resultado == 1)
    printf("Valor existe no arranjo \n");

    if (resultado == 0)
    printf("Valor nao existe no arranjo \n");

    fclose(file);  

}

bool acharValor(int procurado, int vetor[], int n)
{
    int a;
    int b;
    int soma = 0;
    float media;
    int contador = 0;
    bool resultado;

    int i = 0;

    printf("Insira o limite inferior e superior \n");
    scanf("%d %d", &a, &b);

    for(i = 0; i < n; i++)
    {
    if (vetor[i] == procurado && procurado > a && procurado < b)
    {
        return true;
    }              
    }

    return false;    
}

void method19()
{


    int i = 0;
    int n;
    int vetor[100];
    int menor;
    float media;
    int resultado;
    int procurado;
    int a;
    int b;
    int i2 = 0;
    int escala;
    int vetor2[100];

    FILE *file;
    file = fopen("DADOS.TXT", "r");

    fscanf(file, "%d", &n);

    for(i = 0; i < n; i++)
    {
    fscanf(file, "%d", &vetor[i]);
    }

    printf("Insira o limite inferior e superior \n");
    scanf("%d %d", &a, &b);

    printf("Insira a escala \n");
    scanf("%d", &escala);

    for(i = 0; i < n; i++)
    {
    if (vetor[i] > a && vetor[i] < b)
    {
        vetor2[i2] = vetor[i] * escala;
        i2++;
    }              
    }

    for(i = 0; i < i2; i++)
    {
    printf("%d \n", vetor2[i]);               
    }


    fclose(file);  

}

void method20()
{
    int i = 0;
    int n;
    int vetor[100];
    int menor;
    float media;
    int resultado;
    int procurado;
    int a;
    int b;
    int i2 = 0;
    int escala;
    int vetor2[100];
    int copia;
    int j = 0;

    FILE *file;
    file = fopen("DADOS.TXT", "r");

    fscanf(file, "%d", &n);

    for(i = 0; i < n; i++)
    {
    fscanf(file, "%d", &vetor[i]);
    }

    printf("Arranjo normal \n\n");

    for(i = 0; i < n; i++)
    {
    printf("%d \n", vetor[i]);
    }

    for(j = 0; j < n; j++)
    {
    for(i = 0; i < n-1; i++)
    {
    if(vetor[i] < vetor[i+1])
    {
        copia = vetor[i];
        vetor[i] = vetor[i+1];
        vetor[i+1] = copia;
    }
    }
    }

    printf("Arranjo em ordem decrescente \n\n");

    for(i = 0; i < n; i++)
    {
    printf("%d \n", vetor[i]);
    }


    fclose(file);  

}