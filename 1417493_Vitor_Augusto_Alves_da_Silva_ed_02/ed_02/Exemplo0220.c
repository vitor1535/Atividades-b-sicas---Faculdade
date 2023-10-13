/*
 Exemplo0220 - v2.0. - 19 / 09 / 2022
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
 float numero;
 float numero2;
 float numero3;

 printf("Insira tres numeros reais \n");
 scanf("%f", &numero);
 scanf("%f", &numero2);
 scanf("%f", &numero3);

if (numero != numero2 && numero2 != numero3 && numero3 != numero)
{
  if (numero < numero2 && numero3 < numero || numero < numero3 && numero2 < numero)
  printf ("%f esta entre %f e %f \n", numero, numero2, numero3);
  else
  printf ("%f nao esta entre %f e %f \n", numero, numero2, numero3);
}
 
 system ("pause");
 return 0;
}