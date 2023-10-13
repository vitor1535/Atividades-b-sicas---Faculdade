/*
 Exemplo0218 - v1.8. - 19 / 09 / 2022
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

 printf("Insira dois numeros reais \n");
 scanf("%f", &numero);
 scanf("%f", &numero2);

if      (numero2 < numero)

  printf ("%f e menor que %f \n", numero2, numero);

else if (numero2 == numero)

  printf ("%f e igual a %f \n", numero2, numero);

else

  printf ("%f e maior que %f \n", numero2, numero);

 system ("pause");
 return 0;
}