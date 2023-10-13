/*
 Exemplo0211 - v1.1. - 19 / 09 / 2022
 Author: Vitor Augusto Alves da Silva
 
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
 int numero;

 printf("Escolha um numero que sera definido em par ou impar. \n");
 scanf("%d", &numero);

 switch (numero % 2)
 {
    case 0 :
    printf ("Numero par \n");
    break;

    default:
    printf ("Numero impar \n");
 }

 system ("pause");
 return 0;
}