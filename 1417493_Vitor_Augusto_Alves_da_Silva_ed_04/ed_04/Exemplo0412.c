/*
 Exemplo0412 - v1.2 - 24 / 09 / 2022
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
 char caracteres [20];
 int i = 0;
 int contagemsim = 0;
 int contagemnao = 0;

 printf("Insira uma sequencia de caracteres \n");
 scanf("%s", &caracteres);

 while (caracteres[i] != '\0')
 {
 if (caracteres[i] > 'J' && caracteres[i] <= 'Z')
 {
 printf("%c - Maiuscula e maior que J \n", caracteres[i]);
 contagemsim++;
 i++;
 }
 else
 {
 printf("%c - Minuscula ou menor que J \n", caracteres[i]);
 contagemnao++;
 i++;
 }
 }

 printf("Quantidade de valores maiores que J e maisculos = %d  \n", contagemsim);
 printf("Quantidade de valores menores que J ou minusculos/Outros caracteres = %d \n", contagemnao);

 system ("pause");
 return 0;
}
