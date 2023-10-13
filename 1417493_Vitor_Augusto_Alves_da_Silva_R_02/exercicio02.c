/*
 Recuperacao02 - v0.1. - 01 / 12 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "time.h"

int main ()
{
    void method01 ();
    void method02 ();

    int x;

    do 
    {

    printf("(1) - Exercicio 01 \n");
    printf("(2) - Exercicio 02 \n");

    printf("Escolha um metodo acima \n\n");

    scanf("%d", &x);

    switch (x)
    {
        case 1:
        method01();
        break;

        case 2:
        method02();
        break;

    }
    }
    while (x != 0);


    system ("pause");
    return 0;
}

void method01()
{
    int i = 0;
    int j = 0;
    int n;
    int vetor[100];
    bool resultado;
    int copia;

    FILE *file;
    file = fopen("DADOS.TXT", "r");

    FILE *file2;
    file2 = fopen("DECRESCENTE.TXT", "w");

    fscanf(file, "%d", &n);

    for (i = 0; i < n; i++)
    {
        fscanf(file, "%d", &vetor[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        if(vetor[i] < vetor[i+1])
        {
            resultado = false;
            i = n;
        }
        else
        resultado = true;
    }

    if (resultado == false)
    {
        for (j = 0; j < n    ; j++)
        for (i = 0; i < n - 1; i++)
        {
            if(vetor[i] < vetor[i+1])
            {
                copia = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = copia;
            }
        }
    }

    for (i = 0; i < n; i++)
        {
            printf("%d \n", vetor[i]);
        }

    fprintf(file2, "%d \n\n", n);

    for (i = 0; i < n; i++)
        {
            fprintf(file2, "%d \n", vetor[i]);
        }

    fclose(file);
    fclose(file2);

}

void method02()
{
    int i = 0;
    int j = 0;
    int n;
    int vetor[100];
    bool resultado;
    int copia;

    FILE *file;
    file = fopen("DECRESCENTE.TXT", "r");

    FILE *file2;
    file2 = fopen("INVERSO.TXT", "w");

    fscanf(file, "%d", &n);

    for (i = 0; i < n; i++)
    {
        fscanf(file, "%d", &vetor[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        copia = vetor[i];
        vetor[i] = vetor[n - i - 1];
        vetor[n - i - 1] = copia;
    }

    fprintf(file2, "%d \n\n", n);

    for (i = 0; i < n; i++)
        {
            fprintf(file2, "%d \n", vetor[i]);
        }

    fclose(file);
    fclose(file2);

}