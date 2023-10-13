/*
 Exemplo0213 - v1.3. - 19 / 09 / 2022
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

if      (numero > 15 && numero < 50)

  printf ("Pertence ao intervalo aberto entre (15:50) \n");

else

  printf ("Nao pertence ao intervalo aberto entre (15:50) \n");

 system ("pause");
 return 0;
}