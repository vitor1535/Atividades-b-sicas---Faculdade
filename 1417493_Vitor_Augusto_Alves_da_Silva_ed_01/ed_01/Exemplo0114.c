/*
 Exemplo0114 - v1.4. - 18 / 09 / 2022
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
 float ladopor2;
 float lado2por2;
 float perimetro;

 printf("Defina os dois valores dos lado do retangulo \n");
 scanf("%f", &lado);
 scanf("%f", &lado2);
 
 ladopor2 = (lado / 2);
 lado2por2 = (lado2 / 2);
 area = (ladopor2 * lado2por2);
 perimetro = ((ladopor2 * 2) + (lado2por2 * 2));
 
 printf("Novas lados = %f e %f \n", ladopor2, lado2por2);
 printf("Area do retangulo = %f \n", area);
 printf("Perimetro = %f \n", perimetro);

 system ("pause");
 return 0;
}