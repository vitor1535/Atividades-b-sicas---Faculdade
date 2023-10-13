/*
 Recuperacao01 - v0.6. - 08 / 11 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "math.h"

int main ()
{
    int x;

    void exercicio01();
    void exercicio02();
    void exercicio03();
    void exercicio04();
    void exercicio05();
    void exercicio06();

    while (x != 0)
    {
    printf("1 - Exercicio01 \n");
    printf("2 - Exercicio02 \n");
    printf("3 - Exercicio03 \n");
    printf("4 - Exercicio04 \n");
    printf("5 - Exercicio05 \n");
    printf("6 - Exercicio06 \n");

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

        case 4:
        exercicio04();
        break;

        case 5:
        exercicio05();
        break;

        case 6:
        exercicio06();
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

void exercicio04()
{
    char string[100];
    int i = 0;
    char caractere;
    int operadores = 0;
    int letraMaiuscula = 0;
    int letraMinuscula = 0;
    int digito = 0;
    int outro = 0;

    printf("Insira uma palavra \n");

    scanf("%s", &string);

    i = 0;
    while (string[i] != '\0')
    {
        if      (string[i] == '&' ||string[i] == '|' ||string[i] == '!'||string[i] == '+' ||string[i] == '-' ||string[i] == '/' ||string[i] == '*' ||string[i] == '%'||string[i] == '>' ||string[i] == '<' ||string[i] == '=')
        {
        printf("Operadores\n");
        operadores++;
        i++;
        }
        else if (string[i] >= 'A' && string[i] <= 'Z')
        {
        printf("Letra maiuscula \n");
        letraMaiuscula++;
        i++;
        }
        else if (string[i] >= 'a' && string[i] <= 'z')
        {
        printf("Letra minuscula \n");
        letraMinuscula++;
        i++;
        }
        else if (string[i] >= '0' && string[i] <= '9')
        {
        printf("Digito \n");
        digito++;
        i++;
        }
        else
        {
        printf("Outro \n");
        outro++;
        i++;
        }
    }

    printf("Letras maisculas = %d \n", letraMaiuscula);    
    printf("Letras minusculas = %d \n", letraMinuscula);    
    printf("Digitos = %d \n", digito);    
    printf("Operadores = %d \n", operadores);    
    printf("Outro = %d \n", outro);    
}

void exercicio05()
{
    float calcularMedia(float vetor[], int posicoes);

    int n;
    int i = 0;
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    float vetorGeral[100];
    float vet1[100];
    float vet2[100];
    float vet3[100];
    float resultado1 = 0;
    float resultado2 = 0;
    float resultado3 = 0;

    printf("Insira uma quantidade \n");
    scanf("%d", &n);

    printf("Insira os valores \n");

    while (i < n)
    {
        scanf("%f", &vetorGeral[i]);
        i++;
    }

    i = 0;
    while (i < n)
    {
        if (vetorGeral[i] < -23.75)
        {
        vet1[i1] = vetorGeral[i];
        i++;
        }
        else if (vetorGeral[i] <= -23.75 || vetorGeral[i] <= 65.25)
        {
        vet2[i2] = vetorGeral[i];
        i++;
        }
        else
        {
        vet3[i3] = vetorGeral[i];
        i++;
        }
    }

    resultado1 = calcularMedia(vet1, i1 + 1);
    resultado2 = calcularMedia(vet2, i2 + 1);
    resultado3 = calcularMedia(vet3, i3 + 1);

    if (resultado1 > resultado2 && resultado1 > resultado3)
    printf("Maior media = %f \n", resultado1);

    else if (resultado2 > resultado1 && resultado2 > resultado3)
    printf("Maior media = %f \n", resultado2);

    else
    printf("Maior media = %f \n", resultado3);

}

float calcularMedia(float vetor[], int posicoes)
{
    float soma;
    int i = 0;
    float media = 0;

    while (i < posicoes)
    {
        soma += vetor[i];
        i++;
    }

    media = soma / (float)posicoes;

    return media;

}

void exercicio06 ()
{
    float somaInverso(int vetor[], int n);

    int a;
    int b;
    int i = 0;
    int i1 = 0;
    int vetor [100];
    int vetorIntervalo[100];
    int tam;
    float resultado;

    printf("Insira dois numeros inteiros \n");
    scanf("%d %d", &a, &b);

    printf("Insira numeros inteiros, (-1) para parar.\n");

    i = 0;
    while (vetor[i-1] != -1)
    {
        scanf("%d", &vetor[i]);
        i++;
    }

    i  = 0;
    i1 = 0;
    while (vetor[i-1] != -1)
    {
        if (vetor[i] > a && vetor[i] < b && vetor[i] != 0)
        {
        vetorIntervalo[i1] = vetor[i];
        i1++;
        i++;
        }
        else
        {
        i++;
        }
    }

    tam = i1;

    i = 0;
    while (i < i1)
    {
    printf("%d \n",vetorIntervalo[i]);
    i++;
    }

    resultado = somaInverso(vetorIntervalo, tam);

    printf("Resultado = %f \n", resultado);

}

float somaInverso(int vetor[], int n)
{
    int i = 0;
    float soma = 0;
    float temp;

    while (i < n)
    {
    if (vetor[i] % 2 == 0)
    {
        temp = pow((float)vetor[i], -3);
        soma += temp;
        i++;
    }
    else
    {
        i++;
    }
    }

    return soma;
}