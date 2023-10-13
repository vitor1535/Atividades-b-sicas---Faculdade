/*
 Exemplo0111 - v1.1. - 18 / 09 / 2022
 Author: Vitor augusto alves da silva
 
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
 float lado;
 float area;
 float resultado;

 printf("Defina o valor do lado do quadrado \n");
 scanf("%f", &lado);

 area = (lado * lado);
 resultado = (area / 6);

 printf("Area do quadrado = %f \n", area);
 printf("1/6 da area do quadrado = %f \n", resultado);

 system ("pause");
 return 0;
}