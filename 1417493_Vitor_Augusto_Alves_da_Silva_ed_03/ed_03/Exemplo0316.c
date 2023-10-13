/*
 Exemplo0316 - v1.6. - 22 / 09 / 2022
 Author: Vitor Augusto Alves da Silva
 
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0311 exemplo0311.c
 Windows: gcc -o exemplo0311 exemplo0311.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0311
 Windows: exemplo0311
*/
// dependencias
#include <stdio.h> // para as entradas e saidas
#include <stdlib.h>
int main ()
{
     char palavra [20];
     int i;
     int caracteres = 0;
     printf("Insira uma palavra \n");

     scanf("%s", &palavra);

     for (i = 0; i <= 19; i++)
     {
     if      ((!(palavra [i] >= '0' && palavra [i] <= '9') && !(palavra [i] >= 'A' && palavra [i] <= 'Z') && !(palavra [i] >= 'a' && palavra [i] <= 'z')))
     caracteres = caracteres + 1 & printf ("%c = Caractere \n", palavra[i]);
     }
     
     printf ("Caracteres no total = %d \n", caracteres);

     system ("pause");
     return 0;
}