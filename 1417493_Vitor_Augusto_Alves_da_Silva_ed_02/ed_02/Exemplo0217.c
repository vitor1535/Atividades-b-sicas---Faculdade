/*
 Exemplo0217 - v1.7. - 19 / 09 / 2022
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

if      (numero % 2 != 0 && numero < 0)

  printf ("%d = Impar e negativo \n", numero);

else 

  printf ("%d = Nao e impar e negativo ao mesmo tempo \n", numero);

if (numero2 % 2 == 0 && numero2 > 0)

  printf ("%d = Par e positivo \n", numero2);

else

  printf ("%d = Nao e par e positivo ao mesmo tempo \n", numero2);

 system ("pause");
 return 0;
}