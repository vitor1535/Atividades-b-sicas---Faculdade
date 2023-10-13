/*
 Exemplo0119 - v1.9. - 18 / 09 / 2022
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
#include <math.h>
#define pi 3.14

int main ()
{
 float raio;
 float raiopor4;
 float area;

 printf("Defina o raio do circulo, que sera divido por 4. \n");
 scanf("%f", &raio);

 raiopor4 = (raio / 4);
 area = (pi * (raiopor4 * raiopor4));

 printf("Novo valor do raio = %f \n", raiopor4);
 printf("Area = %f \n", area);

 system ("pause");
 return 0;
}