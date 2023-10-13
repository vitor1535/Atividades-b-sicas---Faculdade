/*
 Exemplo0817 - v1.7. - 24 / 10 / 2022
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
    void method15();
    void method16();
    void method17();

    printf("11 - Ler tamanho de um array do teclado \n");
    printf("12 - Ler arranjo de arquivo \n");
    printf("13 - Numeros aleatorios entre 10 e 100, gravados no arquivo DADOS.TXT \n");
    printf("14 - Ler arquivo DADOS.TXT e descobrir o menor numero impar do arranjo \n");
    printf("15 - Ler arquivo DADOS.TXT e descobrir o maior numero par do arranjo \n");
    printf("16 - Ler arquivo DADOS.TXT e fazer a media, separar numeros > e < que a media em TXT \n");
    printf("17 - Ler arquivo DADOS.TXT e dizer se esta em ordem decrescente \n");

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

    case 15:
    method15();
    break;

    case 16:
    method16();
    break;

    case 17:
    method17();
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

void method15 ()
{
    void acharMaiorPar();

    acharMaiorPar();
}

void acharMaiorPar()
{
    int n;
    int i = 0;
    int valor[100];
    int maior = 0;

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
    if (valor[i] % 2 == 0 && valor[i] > maior)
    {
        maior = valor[i];
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

    printf("Maior valor par do arranjo = %d \n", maior);

    fclose(file);
}

void method16 ()
{
    int n;
    int i = 0;
    int i2 = 0;
    int i3 = 0;
    int valor[100];
    int maior = 0;
    float media;
    int soma = 0;
    int menorQueMedia[100];
    int maiorQueMedia[100];

    FILE* file;
    file = fopen ("DADOS.TXT", "r");

    fscanf(file, "%d" ,&n);

    i = 0;
    while (i < n)
    {
        fscanf(file, "%d", &valor[i]);
        soma += valor[i];
        i++;
    }

    media = (float)soma / (float)n;

    i = 0;
    while (i < n)
    {
    if (valor[i] < media)
    {
        menorQueMedia[i2] = valor[i];
        i2++;
        i++;
    }
    else
    {
        maiorQueMedia[i3] = valor[i];
        i3++;
        i++;
    }
    }

    printf("Todos os valores \n\n");
    i = 0;
    while (i < n)
    {
        printf("%d \n",valor[i]);
        i++;
    }

    printf("Media = %f \n\n", media);

    i = 0;
    while (i < i2)
    {
    printf("Valores maiores que a media = %d \n" , maiorQueMedia[i]);
    i++;
    }

    printf("\n \n");

    i = 0;
    while (i < i3)
    {
    printf("Valores menores que a media = %d \n" , menorQueMedia[i]);
    i++;
    }

    fclose(file);    
}

void method17()
{
    int i = 0;
    int n;
    int valor[100];

    FILE* file;
    file = fopen ("DADOS.TXT", "r");

    fscanf(file, "%d" ,&n);

    i = 0;
    while (i < n)
    {
        fscanf(file, "%d", &valor[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {
    if (valor[i] > valor[i + 1])
    {
        printf("%d = Maior que o proximo valor \n", valor[i]);
        i++;
    }
    else
    {
        printf("%d = Menor que o proximo valor \n", valor[i]);
        i++;
    }
    }

    fclose(file);
}