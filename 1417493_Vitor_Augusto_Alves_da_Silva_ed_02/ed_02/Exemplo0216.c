/*
 Exemplo0216 - v1.6. - 19 / 09 / 2022
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
 int numero2;

 printf("Insira dois numeros \n");
 scanf("%d", &numero);
 scanf("%d", &numero2);

if      (numero % 2 == 0)

  printf ("%d = Par \n", numero);

else 

  printf ("%d = Impar \n", numero);

if (numero2 % 2 != 0)

  printf ("%d = Impar \n", numero2);

else

  printf ("%d = Par \n", numero2);

 system ("pause");
 return 0;
}