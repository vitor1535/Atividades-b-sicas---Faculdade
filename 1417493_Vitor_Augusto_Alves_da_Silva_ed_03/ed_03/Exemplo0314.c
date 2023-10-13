/*
 Exemplo0314 - v1.4. - 22 / 09 / 2022
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
     int letras = 0;
     printf("Insira uma palavra \n");

     scanf("%s", &palavra);

     for (i = 0; i <= 19; i++)
     {
     if      ((palavra [i] >= 'A' && palavra [i] <= 'Z') || palavra [i] >= 'a' && palavra [i] <= 'z')
     {
     printf ("%c = Letra \n", palavra[i]);
     letras = letras + 1;
     }
     }

     printf ("Letras no total = %d \n", letras);

     system ("pause");
     return 0;
}