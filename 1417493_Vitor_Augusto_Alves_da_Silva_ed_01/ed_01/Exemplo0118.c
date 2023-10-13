/*
 Exemplo0118 - v1.8. - 18 / 09 / 2022
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
 float comprimento;
 float comprimentox7;
 float largura;
 float largurax7;
 float altura;
 float alturax7;
 float volume;

 printf("Defina o comprimento, largura e altura de um paralelepipedo, que sera multiplicado por 7 individualmente. \n");
 scanf("%f", &comprimento);
 scanf("%f", &largura);
 scanf("%f", &altura);

 comprimentox7 = (comprimento * 7);
 largurax7 = (largura * 7);
 alturax7 = (altura * 7);
 volume = (comprimentox7 * largurax7 * alturax7);

 printf("Novo valor do comprimento = %f \n", comprimentox7);
 printf("Novo valor da largura = %f \n", largurax7);
 printf("Novo valor do altura = %f \n", alturax7);
 printf("Volume = %f \n", volume);

 system ("pause");
 return 0;
}