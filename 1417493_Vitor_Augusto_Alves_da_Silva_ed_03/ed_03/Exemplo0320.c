/*
 Exemplo0320 - v2.0. - 22 / 09 / 2022
 Author: Vitor Augusto Alves da Silva
 
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0311 exemplo0311.c
 Windows: gcc -o exemplo0311 exemplo0311.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0311
 Windows: exemplo0311
*/
// dependencias
#include <stdio.h> // para as entradas e saidas
#include <stdlib.h>

int main ()
{
 float a;
 float b;
 int i = 0;
 int valor;
 float n [20];
 int vez = 1;
 float nIFrac [20];

 printf("Insira dois valores, A e B, sendo sendo eles maior que 0 e menor que 1 \n");
 
 scanf("%f", &a);
 scanf("%f", &b);

 if (a > 0 && a < 1 & b > 0 && b < 1)
 {
 printf("Insira quantos numeros voce quer testar \n");
 scanf("%d", &valor);

 while (valor != 0 && i != valor)
 {
     printf("%d - Digite os numeros \n", vez);
     scanf("%f", &n[i]);

     i++;
     vez++;
 }

for (i = 0; i < valor; i++)
{
    nIFrac [i] = n[i] - (int)n[i];
    printf("%f = Valores fracionados \n", nIFrac[i]);
}

 for (i = 0; i < valor; i++)
 {
    if (nIFrac[i] < a || nIFrac[i] > b)
    printf("%f = Parte fracionaria esta fora do invervalo \n", nIFrac[i]);
    else 
    printf("%f = Parte fracionaria esta dentro do intervalo \n", nIFrac[i]);
 }
 }
 else
 {
 printf("Erro \n");
 }


 system ("pause");
 return 0;
}