/*
 Recuperacao01 - v0.3. - 08 / 11 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

int main ()
{
    int x;

    void exercicio01();
    void exercicio02();
    void exercicio03();
    

    while (x != 0)
    {
    printf("1 - Exercicio01 \n");
    printf("2 - Exercicio02 \n");
    printf("3 - Exercicio03 \n");

    printf("\n0 - Sair \n");

    printf("Escolha um numero \n");

    scanf("%d", &x);

    switch (x)
    {
        case 1:
        exercicio01();
        break;

        case 2:
        exercicio02();
        break;

        case 3:
        exercicio03();
        break;

    }
    }

    system ("pause");
    return 0;
}

void exercicio01()
{
    int somaDivisores(int x);

    int i = 0;
    int n;
    int vetor [100];
    int vetorSoma[100];

    printf("Insira uma quantidade de numeros \n");
    scanf("%d", &n);

    printf("Insira os numeros \n");

    i = 0;
    while (i < n)
    {
        scanf("%d", &vetor[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {
        vetorSoma[i] = somaDivisores(vetor[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {
        printf("Soma dos divisores = %d \n", vetorSoma[i]);
        i++;
    }

}

int somaDivisores(int x)
{
    int i = 0;
    int temp = 2;
    int soma = 0;

    while (temp != x)
    {
    if (x % temp == 0)
    {
        soma += temp;
        temp++;
    }
    else
    {
        temp++;
    }
    }

    return soma;
}

void exercicio02 ()
{
    int primo (int x);

    int n;
    int i = 0;
    int vetor[100];
    int resultado[100];
    

    printf("Insira uma quantidade de numeros \n");
    scanf("%d", &n);

    printf("Insira os numeros \n");

    while (i < n)
    {
        scanf("%d", &vetor[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {
        resultado[i] = primo (vetor[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {
        if (resultado[i] == true)
        {
        printf("Numero primo \n");
        i++;
        }
        else
        {
        printf("Numero nao primo \n");
        i++;
        }
    }

}

int primo (int x)
{
    int temp = 1;
    int resultado = 0;
    bool variavelBool;
    int i = 0;

    while (temp < x)
    {
    if (x % temp == 0)
    {
        resultado++;
        temp++;
    }
    else
    {
        temp++;
    }
    }

    if (x <= 0)
    {
        variavelBool = false;
    }
    else if(resultado == 1)
    {
        variavelBool = true;
    }
    else
    {
        variavelBool = false;
    }

    return variavelBool;
}

void exercicio03()
{
    char string[100];
    int i = 0;
    char caractere;

    printf("Insira uma palavra \n");

    scanf("%s", &string);

    i = 0;
    while (string[i] != '\0')
    {
        if      (string[i] == '&' ||string[i] == '|' ||string[i] == '!')
        {
        printf("Operador logico \n");
        i++;
        }
        else if (string[i] == '+' ||string[i] == '-' ||string[i] == '/' ||string[i] == '*' ||string[i] == '%')
        {
        printf("Aritmetico \n");
        i++;
        }
        else if (string[i] == '>' ||string[i] == '<' ||string[i] == '=')
        {
        printf("Relacional \n");
        i++;
        }
        else if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z')
        {
        printf("Letra \n");
        i++;
        }
        else
        {
        printf("Outro simbolo \n");
        i++;
        }
    }

}
