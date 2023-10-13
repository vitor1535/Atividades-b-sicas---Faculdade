/*
 Exemplo0212 - v1.2. - 19 / 09 / 2022
 Author: Vitor Augusto Alves da Silva
 
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0109 exemplo0109.c
 Windows: gcc -o exemplo0109 exemplo0109.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0109
 Windows: exemplo0109
*/
// dependencias
#include <stdio.h> // para as entradas e saidas
#include <stdlib.h>
int main ()
{
 int numero;

 printf("Insira um numero  \n");
 scanf("%d", &numero);

if      (numero < -30 && numero % 2 == 0)

  printf ("Menor que -30 e par \n");

else if (numero > 30 && numero % 2 != 0)

  printf ("Maior que 30 e impar \n");

else

  printf ("Numero invalido \n");

 system ("pause");
 return 0;
}