/*
 Exemplo0319 - v1.9. - 22 / 09 / 2022
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

 printf("Insira dois numeros para definir o limite de numeros consequentes. \n");
 
 scanf("%f", &a);
 scanf("%f", &b);

 if (a < b)
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
    if (n[i] > a && n[i] < b & (int)n[i] % 2 == 0)
    printf("%f = Parte inteira eh par e faz parte do invervalo \n", n[i]);
    else 
    printf("%f = Parte inteira nao eh par ou nao faz parte do invervalo \n", n[i]);
 }
 }
 else
 {
 printf("Erro \n");
 }


 system ("pause");
 return 0;
}