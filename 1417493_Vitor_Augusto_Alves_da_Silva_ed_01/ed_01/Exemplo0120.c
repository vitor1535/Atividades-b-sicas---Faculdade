/*
 Exemplo0120 - v2.0. - 18 / 09 / 2022
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
 float raiox5oitavos;
 float volume;

 printf("Defina o raio de uma esfera, que sera multiplicado por 5 sobre 8. \n");
 scanf("%f", &raio);

 raiox5oitavos = (raio * 5 / 8);
 volume = (4 * pi * (raiox5oitavos * raiox5oitavos * raiox5oitavos) / 3);

 printf("Novo valor do raio = %f \n", raiox5oitavos);
 printf("Volume = %f \n", volume);

 system ("pause");
 return 0;
}