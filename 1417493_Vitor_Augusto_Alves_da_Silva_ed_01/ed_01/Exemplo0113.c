/*
 Exemplo0113 - v1.3. - 18 / 09 / 2022
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
 float lado2;
 float area;
 float areapor4;

 printf("Defina os dois valores dos lado do retangulo \n");
 scanf("%f", &lado);
 scanf("%f", &lado2);
 
 area = (lado * lado2);
 areapor4 = (area / 4);
 
 printf("Area do retangulo = %f \n", area);
 printf("1/4 da area = %f \n", areapor4);

 system ("pause");
 return 0;
}