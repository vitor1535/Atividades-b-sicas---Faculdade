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
    void method03 ();
    void method04 ();

    int x;

    do 
    {

    printf("(1) - Exercicio 01 \n");
    printf("(2) - Exercicio 02 \n");
    printf("(3) - Exercicio 03 \n");
    printf("(4) - Exercicio 04 \n");

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

        case 3:
        method03();
        break;

        case 4:
        method04();
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

void method03()
{
    int i = 0;
    int j = 0;
    int n;
    int vetor[100];
    int resultado;
    int resultado2;
    int copia;
    int valor;
    int cont = 0;
    int jtemp;

    FILE *file;
    file = fopen("DADOS1.TXT", "r");

    fscanf(file, "%d", &n);

    for (i = 0; i < n; i++)
    {
        fscanf(file, "%d", &vetor[i]);
    }

    printf("Insira o valor \n");
    scanf("%d", &valor);

    for (j = 0; j < valor; j++)
    for (i = 0; i < n    ; i++)
    {
        if(valor == vetor[i] + j)
        {
            resultado = vetor[i];
            jtemp = j;
            i = n;
            j = valor;
        }
    }
    
    for (j = jtemp + 1; j < valor; j++)
    for (i = 0        ; i < n    ; i++)
    {
        if(valor == vetor[i] + j)
        {
            resultado2 = vetor[i];
            i = n;
            j = valor;
        }
    }

    printf("Resultado = %d \n", resultado2);

    fclose(file);   
}

void method04()
{
    int i = 0;
    int j = 0;
    int k = 0;
    int n1;
    int n2;
    int vetor1[100];
    int vetor2[100];
    int iguais[100];
    bool resultado;
    int copia;
    int maiorN;
    int temp;
    int jtemp;

    FILE *file1;
    file1 = fopen("DADOS1.TXT", "r");

    FILE *file2;
    file2 = fopen("DADOS2.TXT", "r");

    fscanf(file1, "%d", &n1);

    fscanf(file2, "%d", &n2);

    for (i = 0; i < n1; i++)
    {
        fscanf(file1,"%d", &vetor1[i]);
    }

    for (i = 0; i < n2; i++)
    {
        fscanf(file2,"%d", &vetor2[i]);
    }

    if(n1 > n2)
    maiorN = n1;
    else
    maiorN = n2;

    for (k = 0; k < maiorN; k++)
    for (i = 0; i < maiorN; i++)
    {
        if (vetor1[k] == vetor2[i])
        {
            iguais[j] = vetor1[k];
            j++;
        }
    }

    jtemp = j;

    for (k = 0; k < jtemp - 1; k++)
    for (i = 0; i < jtemp - 1; i++)
    {
        if (iguais[k] == iguais[i] && i != k)
        {
            temp = iguais[k];
            iguais[k] = iguais[k+1];
            iguais[k+1] = temp;
        }
    }

    FILE *file3;
    file3 = fopen("FILTRADOS.TXT", "w");

    fprintf (file3, "%d \n\n", j);  

    for (i = 0; i < j; i++)
    {
        fprintf (file3, "%d \n", iguais[i]);     
    }


    fclose(file1);
    fclose(file2);
    fclose(file3);
}