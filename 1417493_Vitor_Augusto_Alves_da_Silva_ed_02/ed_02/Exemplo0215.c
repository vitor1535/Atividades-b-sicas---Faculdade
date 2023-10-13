/*
 Exemplo0215 - v1.5. - 19 / 09 / 2022
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

 printf("Insira um numero \n");
 scanf("%d", &numero);

if      (numero >= 15 && numero <= 30 & numero >= 25 && numero <= 40)

  printf ("Pertence aos dois intervalos \n");

else if (numero >= 15 && numero <= 30 || numero >= 25 && numero <= 40)

  printf ("Pertence a um dos intervalos \n");

else 

printf("Nao pertence a nenhum dos intervalos \n");

 system ("pause");
 return 0;
}