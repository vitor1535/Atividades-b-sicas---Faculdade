/*
 Exemplo0718 - v1.8. - 14 / 10 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "io.h"
#include "stdio.h"
#include "stdlib.h"

int main ()
{
    int x;

    void exemplo0711 ();
    void exemplo0712 ();
    void exemplo0713 ();
    void exemplo0714 ();
    void exemplo0715 ();
    void exemplo0716 ();
    void exemplo0717 ();
    void exemplo0718 ();

    while (x !=0)
{
    printf("Exemplo 11 = Multiplos de 5 e impares, gravados em txt \n");
    printf("Exemplo 12 = Multiplos de 7 e pares em oredem decrescentes, gravados em txt \n");
    printf("Exemplo 13 = Potencias de 3, gravados em txt \n");
    printf("Exemplo 14 = Potencias ao inverso de 4, gravados em txt \n");
    printf("Exemplo 15 = Potencias sobre x a determinado expoente, gravados em txt \n");
    printf("Exemplo 16 = Somar 3 valores do exemplo 15, gravados em txt \n");
    printf("Exemplo 17 = Somar 3 valores do exemplo 14, gravados em txt \n");
    printf("Exemplo 18 = Somar 3 valores do exemplo 14, gravados em txt \n");

    printf("\nEscolha um dos exemplos de 11 a 20 \n");
    scanf("%d", &x);

    switch (x)
    {
        case (11):
        exemplo0711();
        break;
        
        case (12):
        exemplo0712();
        break;

        case (13):
        exemplo0713();
        break;

        case (14):
        exemplo0714();
        break;

        case (15):
        exemplo0715();
        break;

        case (16):
        exemplo0716();
        break;

        case (17):
        exemplo0717();
        break;

        case (18):
        exemplo0718();
        break;

    }
}

    system ("pause");
    return 0;
}

void exemplo0711 ()
{
    int n;
    int i;
    int numero = 0;
    int vetor [20];

    printf("Insira uma quantidade de numeros \n");
    scanf("%d", &n);

    i = 0;
    while (i < n)
    {
        numero = numero + 5;
        if (numero % 2 != 0)
        {
            vetor [i] = numero;
            i++;
        }
    }

    i = 0;
    while (i < n)
    {
        printf("%d - Multiplo de 5 e impar \n", vetor[i]);
        i++;
    }


    FILE *file;
    file = fopen("Exemplo0711.txt", "w");

    i = 0;
    while (i < n)
    {
    fprintf(file, "%d \n",vetor[i]);
    i++;
    }
    fclose(file);
    
    system ("pause");

}

void exemplo0712 ()
{
    int n;
    int i;
    int numero = 7;
    int vetor [20];
    int contador = 1;

    printf("Insira uma quantidade de numeros \n");
    scanf("%d", &n);

    i = 0;
    while (i < n)
    {
        numero = numero + 7;
        if (numero % 2 == 0)
        {
            vetor [i] = numero;
            i++;
        }
    }

    i = 0;
    while (i < n)
    {
        printf("%d - Multiplo de 5 e impar \n", vetor[n - contador]);
        contador++;
        i++;
    }


    FILE *file;
    file = fopen("Exemplo0712.txt", "w");

    i = 0;
    contador = 1;
    while (i < n)
    {
    fprintf(file, "%d \n",vetor[n - contador]);
    i++;
    contador++;
    }
    fclose(file);
    
    system ("pause");

}

void exemplo0713 ()
{
    int n;
    int i;
    int numero = 3;
    int vetor [20];
    int contador = 1;
    int cont = 0;
    int potencia;

    printf("Insira uma quantidade de numeros \n");
    scanf("%d", &n);

    i = 0;
    while (i < n)
    {
        potencia = pow(numero, cont);
        vetor [i] = potencia;
        i++;
        cont++;
    }

    i = 0;
    while (i < n)
    {
        printf("%d - Potencias de 3 \n", vetor[i]);
        i++;
    }


    FILE *file;
    file = fopen("Exemplo0713.txt", "w");

    i = 0;
    while (i < n)
    {
    fprintf(file, "%d \n",vetor[i]);
    i++;
    }
    fclose(file);
    
    system ("pause");

}

void exemplo0714 ()
{
    int n;
    int i;
    int numero = 4;
    int vetor [20];
    int contador = 1;
    int cont = 0;
    int potencia;
    float potenciaInverso[20];

    printf("Insira uma quantidade de numeros \n");
    scanf("%d", &n);

    i = 0;
    while (i < n)
    {
        potencia = pow(numero, cont);
        vetor [i] = potencia;
        i++;
        cont++;
    }

    i = 0;
    while (i < n)
    {
        potenciaInverso [i] = (1 / (float)vetor[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {
        printf("%f - Potencias de 4 ao inverso \n", potenciaInverso[i]);
        i++;
    }


    FILE *file;
    file = fopen("Exemplo0714.txt", "w");

    i = 0;
    while (i < n)
    {
    fprintf(file, "%f \n",potenciaInverso[i]);
    i++;
    }
    fclose(file);
    
    system ("pause");

}

void exemplo0715 ()
{
    int n;
    int i;
    int numero = 4;
    int vetor [20];
    int contador = 1;
    int cont = 1;
    int potencia;
    float potenciaInverso[20];
    float x;

    printf("Insira uma quantidade de numeros \n");
    scanf("%d", &n);

    printf("Insira o numero que dividira o 1 \n");
    scanf("%f", &x);

    vetor[0] = 1;

    i = 0;
    while (i < n)
    {
        potencia = pow(x , cont);
        vetor [i + 1] = potencia;
        i++;
        cont = cont + 2;
    }

    i = 0;
    while (i < n)
    {
        potenciaInverso [i] = (1 / (float)vetor[i]);
        i++;
    }


    i = 0;
    while (i < n)
    {
        printf("%f - Potencia \n", potenciaInverso[i]);
        i++;
    }


    FILE *file;
    file = fopen("Exemplo0715.txt", "w");

    i = 0;
    while (i < n)
    {
    fprintf(file, "%f \n",potenciaInverso[i]);
    i++;
    }
    fclose(file);
    
    system ("pause");

}

void exemplo0716 ()
{
    float x, y, z;
    float resultado;

    FILE *file;
    file = fopen("Exemplo0715.txt", "r");

    fscanf(file, "%f %f %f", &x, &y, &z);

    fclose(file);

    resultado = x + y + z;
    printf("%f \n", resultado);
   

    FILE *file2;
    file2 = fopen ("RESULTADO06.txt", "w");
    fprintf (file2, "Soma dos 3 primeiros valores - %f", resultado);

    fclose(file2);
    
    system ("pause");

}

void exemplo0717 ()
{
    float x, y, z;
    float resultado;

    FILE *file;
    file = fopen("Exemplo0714.txt", "r");
    fscanf(file, "%f %f %f", &x, &y, &z);

    fclose(file);

    resultado = x + y + z;
    printf("%f \n", resultado);

    FILE *file2;
    file2 = fopen ("RESULTADO07.txt", "w");
    fprintf (file2, "Soma dos 3 primeiros valores - %f", resultado);

    fclose(file2);
    
    system ("pause");

}

void exemplo0718 ()
{
    int numero = 0;
    int vetor[20];
    int i = 0;
    int n;

    while (numero < 1000)
    {
    numero = numero + 2;
    if (numero == 2 || numero == 8 || numero == 34 || numero == 144 ||numero == 610)
    {
        vetor[i] = numero;
        i++;
    }
    }
    
    printf("Insira uma quantidade de numeros \n");
    scanf("%d", &n);

    i = 0;
    while (i < n)
    {
    printf("%d \n", vetor[i]);
    i++;
    }


    float x, y, z;
    float resultado;


    FILE *file2;
    file2 = fopen ("RESULTADO08.txt", "w");

    i = 0;
    while (i < n)
    {
    fprintf (file2, "Valores de Fibonacci - %d \n", vetor[i]);
    i++;
    }

    fclose(file2);
    
    system ("pause");

}