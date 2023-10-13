/*
 Exemplo0116 - v1.6. - 18 / 09 / 2022
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
 float ladox2;
 float altura;
 float alturaxaltura;
 float area;
 float perimetro;

 printf("Defina o lado de um triangulo equilatero que sera multiplicado por 2 \n");
 scanf("%f", &lado);

 ladox2 = (lado * 2);
 alturaxaltura = (ladox2 * ladox2) - (ladox2 / 2) * (ladox2 / 2);
 altura = ( sqrt(alturaxaltura) );
 area = (ladox2 * altura / 2);
 perimetro = (ladox2 * 3);

 printf("Nova lado = %f \n", ladox2);
 printf("Altura = %f \n", altura);
 printf("Area = %f \n", area);
 printf("Perimetro = %f \n", perimetro);
 
 system ("pause");
 return 0;
}