/*
 Recuperacao01 - v1.0. - 08 / 11 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "math.h"
#include "string.h"

int main ()
{
    int x;

    void exercicio01();
    void exercicio02();
    void exercicio03();
    void exercicio04();
    void exercicio05();
    void exercicio06();
    void exercicio07();
    void exercicio08();
    void exercicio09();
    void exercicio10();

    while (x != 0)
    {
    printf("1  - Exercicio01 \n");
    printf("2  - Exercicio02 \n");
    printf("3  - Exercicio03 \n");
    printf("4  - Exercicio04 \n");
    printf("5  - Exercicio05 \n");
    printf("6  - Exercicio06 \n");
    printf("7  - Exercicio07 \n");
    printf("8  - Exercicio08 \n");
    printf("9  - Exercicio09 \n");
    printf("10 - Exercicio10 \n");

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

        case 7:
        exercicio07();
        break;

        case 8:
        exercicio08();
        break;

        case 9:
        exercicio09();
        break;

        case 10:
        exercicio10();
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

void exercicio07()
{
    float porcentagem (int x, int y);

    int a;
    int b;
    int i = 0;
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    int vetor [100];
    int vetorIntervalo[100];
    int vetorAbaixoIntervalo[100];
    int vetorAcimaIntervalo[100];
    int tam;
    float resultado;
    float porcentagemAbaixo;
    float porcentagemAcima;

    printf("Insira dois numeros inteiros \n");
    scanf("%d %d", &a, &b);

    printf("Insira numeros inteiros, (0) para parar.\n");

    i = 0;
    do
    {
        scanf("%d", &vetor[i]);
        i++;
    }
    while (vetor[i-1] != 0);

    i  = 0;
    while (vetor[i] != 0)
    {
        if (vetor[i] > a && vetor[i] < b && vetor[i] != 0)
        {
        vetorIntervalo[i1] = vetor[i];
        i1++;
        i++;
        }
        else if (vetor[i] <= a)
        {
        vetorAbaixoIntervalo[i2] = vetor[i];
        i2++;
        i++;
        }
        else if (vetor[i] >= b)
        {
        vetorAcimaIntervalo[i3] = vetor[i];
        i3++;
        i++;
        }
    }

    tam = i;

    i = 0;
    while (i < i2)
    {
    printf("Valor fora do intervalo - %d \n",vetorAbaixoIntervalo[i]);
    i++;
    }

    i = 0;
    while (i < i3)
    {
    printf("Valor fora do intervalo - %d \n",vetorAcimaIntervalo[i]);
    i++;
    }

    porcentagemAbaixo = porcentagem(i2, tam);    
    porcentagemAcima  = porcentagem(i3, tam); 

    printf("Porcentagem de numeros abaixo = %f \n", porcentagemAbaixo);   
    printf("Porcentagem de numeros acima = %f \n",  porcentagemAcima);   

}

float porcentagem (int x, int y)
{
    float resultado;

    resultado = (float)x / (float)y;

    return resultado;
}

void exercicio08()
{
    int ordem(int x,int y,int z);

    int x, y, z;
    int resultado;

    printf("Insira 3 numeros \n");
    scanf("%d %d %d", &x, &y, &z);

    resultado = ordem(x, y, z);

    if      (resultado == 1)
    printf("Ordem crescente \n");
    else if (resultado == 2)
    printf("Ordem descrescente \n");
    else
    printf("Fora de ordem \n");
}

int ordem(int x,int y,int z)
{
    if      (x < y && x < z && y > x && y < z)
    return 1;
    else if (x > y && x > z && y < x && y > z)
    return 2;
    else 
    return 3;

}

void exercicio09()
{
    int ordemChar(char x,char y,char z);

    char x, y, z;
    int resultado;

    printf("Insira 3 caracteres \n");
    scanf(" %c", &x);
    scanf(" %c", &y);
    scanf(" %c", &z);

    resultado = ordem(x, y, z);

    if      (resultado == 1)
    printf("Ordem crescente \n");
    else if (resultado == 2)
    printf("Ordem descrescente \n");
    else
    printf("Fora de ordem \n");
}

int ordemChar(char x,char y,char z)
{
    if      (x < y && x < z && y > x && y < z)
    return 1;
    else if (x > y && x > z && y < x && y > z)
    return 2;
    else 
    return 3;

}

void exercicio10()
{
    char x[100];
    char y[100];
    char z[100];
    int retorno;

    printf("Insira 2 cadeias de caracteres \n");
    scanf("%s",&x);    
    scanf("%s",&y);      

    retorno = strcmp(x,y);

    if (retorno == 0)
    {
        printf("Cadeias sao iguais \n");
    }
    else if (retorno < 0)
    {
        printf("Cadeia 1 eh menor que cadeia 2 \n");
    }
    else if (retorno > 0)
    {
        printf("Cadeia 1 eh maior que cadeia 2 \n");
    }

}