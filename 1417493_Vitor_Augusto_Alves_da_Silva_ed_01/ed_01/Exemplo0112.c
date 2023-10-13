/*
 Exemplo0112 - v1.2. - 18 / 09 / 2022
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
 float perimetro;
 float ladox2;

 printf("Defina o valor do lado do quadrado \n");
 scanf("%f", &lado);
 
 ladox2 = (lado * 2);
 area = (ladox2 * ladox2);
 perimetro = (ladox2 * 4);
 
 printf("Novo lado = %f \n", ladox2);
 printf("Area do quadrado = %f \n", area);
 printf("Perimetro do quadrado = %f \n", perimetro);

 system ("pause");
 return 0;
}