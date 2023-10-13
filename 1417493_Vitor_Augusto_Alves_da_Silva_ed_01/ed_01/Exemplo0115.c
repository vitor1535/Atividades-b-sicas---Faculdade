/*
 Exemplo0115 - v1.5. - 18 / 09 / 2022
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
 float base;
 float altura;
 float alturapor3;
 float area;

 printf("Defina a base e a altura de um triangulo \n");
 scanf("%f", &base);
 scanf("%f", &altura);

 alturapor3 = (altura / 3);
 area = ( (base * alturapor3) / 2 );

 printf("Nova altura = %f \n", alturapor3);
 printf("Area do triangulo = %f \n", area);

 system ("pause");
 return 0;
}