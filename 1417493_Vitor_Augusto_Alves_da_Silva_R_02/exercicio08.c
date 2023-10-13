/*
 Recuperacao02 - v0.1. - 01 / 12 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "time.h"
#include "math.h"

int main ()
{
    void method01 ();
    void method02 ();
    void method03 ();
    void method04 ();
    void method05 ();
    void method06 ();
    void method07 ();
    void method08 ();

    int x;

    do 
    {

    printf("(1) - Exercicio 01 \n");
    printf("(2) - Exercicio 02 \n");
    printf("(3) - Exercicio 03 \n");
    printf("(4) - Exercicio 04 \n");
    printf("(5) - Exercicio 05 \n");
    printf("(6) - Exercicio 06 \n");
    printf("(7) - Exercicio 07 \n");
    printf("(8) - Exercicio 08 \n");

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

        case 5:
        method05();
        break;

        case 6:
        method06();
        break;

        case 7:
        method07();
        break;

        case 8:
        method08();
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

void method05()
{
    int i = 0;
    int j = 0;
    int n;
    int vetor[100];
    int resultado = 0;
    int copia;
    int temp = 0;

    FILE *file;
    file = fopen("BINARIOS1.TXT", "r");

    fscanf(file, "%d", &n);

    for (i = 0; i < n; i++)
    {
        fscanf(file, "%d", &vetor[i]);
    }

    for (i = n-1; i > -1; i--)
    {
        if (vetor[i] == 1)
        {
            resultado += pow (2, temp);
            temp++;        
        }
        else
        temp++;
    }

    printf("Resultado = %d \n", resultado);

    fclose(file);

}

void method06()
{
    int i = 0;
    int j = 0;
    int n;
    int matriz[100][100];
    int temp = -1;
    int num = 1;

    FILE *file;
    file = fopen("MATRIZ1.TXT", "r");

    FILE *file2;
    file2 = fopen("MATRIZ2.TXT", "w");

    fprintf(file, "%d ", 4);

    fscanf(file, "%d", &n);

    for (j = 0; j < n; j++)
    {
        temp = temp + 2;
    for (i = 0; i < n; i++)
    {
        if(i + j <= temp && j - i < 2)
        {
            matriz[j][i] = num;
            num++;
        }
        else
        {
        matriz[j][i] = 0;
        }
    }
    }

    for (j = 0; j < n; j++)
    {
        printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", matriz[j][i]);
    }
    }

    printf("\n");

    for (j = 0; j < n; j++)
    {
        fprintf(file2, "\n");
    for (i = 0; i < n; i++)
    {
        fprintf(file2, "%d ", matriz[j][i]);
    }
    }

    fclose(file);
    fclose(file2);

}

void method07()
{
    int i = 0;
    int j = 0;
    int n;
    int matriz[100][100];
    int temp = -1;
    int num = 1;

    FILE *file;
    file = fopen("MATRIZ1.TXT", "r");

    FILE *file2;
    file2 = fopen("MATRIZ2.TXT", "w");

    fprintf(file, "%d ", 4);

    fscanf(file, "%d", &n);

    num = n * 3 - 2;

    for (j = 0; j < n; j++)
    {
        temp = temp + 2;
    for (i = 0; i < n; i++)
    {
        if(i + j <= temp && j - i < 2)
        {
            matriz[j][i] = num;
            num--;
        }
        else
        {
        matriz[j][i] = 0;
        }
    }
    }

    for (j = 0; j < n; j++)
    {
        printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", matriz[j][i]);
    }
    }

    printf("\n");

    for (j = 0; j < n; j++)
    {
        fprintf(file2, "\n");
    for (i = 0; i < n; i++)
    {
        fprintf(file2, "%d ", matriz[j][i]);
    }
    }

    fclose(file);
    fclose(file2);

}

void method08()
{
    int i = 0;
    int j = 0;
    int n;
    int matriz[100][100];
    int umMais = 1;
    int zeroMais = 0;
    int resultante;
    bool resultado;

    FILE *file;
    file = fopen("MATRIZ3.TXT", "r");

    fscanf(file, "%d", &n);

    for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
    {
        fscanf(file, "%d", &matriz[i][j]);
    }

    resultante = pow (umMais, zeroMais);

    for (i = 0; i < n; i++)
    {
    for (j = 0; j < n; j++)
    {
        resultante = pow (umMais, zeroMais);
        if (matriz[i][j] == resultante)
        {
            resultado = true;
            zeroMais++;
        }
        else
        {
            resultado = false;
            i = n;
            j = n;
        }
    }
        umMais++;
        zeroMais = 0;
    }

    if (resultado == true)
    printf("Apresenta potencias por linha \n");
    else
    printf("Nao apresenta potencias por linha \n");

    fclose(file);


}