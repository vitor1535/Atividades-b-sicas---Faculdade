/*
 Exemplo0117 - v1.7. - 18 / 09 / 2022
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

int main ()
{
 float lado;
 float ladopor4;
 float volume;

 printf("Defina o lado de um cubo que sera dividido por 4 \n");
 scanf("%f", &lado);

 ladopor4 = (lado / 4);
 volume = (ladopor4 * ladopor4 * ladopor4);

 printf("Novo valor do lado = %f \n", ladopor4);
 printf("Volume = %f \n", volume);

 system ("pause");
 return 0;
}