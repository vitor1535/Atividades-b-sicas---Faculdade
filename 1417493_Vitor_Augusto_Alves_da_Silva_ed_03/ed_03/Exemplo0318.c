/*
 Exemplo0318 - v1.8. - 22 / 09 / 2022
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
 int a;
 int b;
 int i = 0;
 int valor;
 int n [20];
 int vez = 1;

 printf("Insira dois numeros para definir o limite de numeros consequentes. \n");

 scanf("%d", &a);
 scanf("%d", &b);

 printf("Insira quantos numeros voce quer testar \n");
 scanf("%d", &valor);

 while (valor != 0 && i != valor)
 {
     printf("%d - Digite os numeros \n", vez);
     scanf("%d", &n[i]);
     
     i++;
     vez++;
 }

 for (i = 0; i < valor; i++)
 {
    if (n[i] >= a && n[i] <= b & n[i] % 2 == 0 & !(n[i] % 3 == 0))
    printf("%d = Faz parte do intervalo, eh multiplo de 2 e nao eh multiplo de 3 ao mesmo tempo \n", n[i]);
    else 
    printf("%d = Nao faz parte do intervalo, eh multiplo de 2 e nao eh multiplo de 3 ao mesmo tempo \n", n[i]);
 }
 


 system ("pause");
 return 0;
}