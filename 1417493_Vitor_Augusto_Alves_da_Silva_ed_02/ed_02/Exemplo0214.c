/*
 Exemplo0214 - v1.4. - 19 / 09 / 2022
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

if      (numero >= 25 && numero <= 40)

  printf ("Pertence ao intervalo fechado entre 25:40 \n");

else

  printf ("Nao pertence ao intervalo fechado entre 25:40 \n");

 system ("pause");
 return 0;
}