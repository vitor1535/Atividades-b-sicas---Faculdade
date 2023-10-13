/*
 Exemplo0411 - v1.1 - 24 / 09 / 2022
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
 float a;
 float b;
 int i = 0;
 int valor;
 float n [20];
 int vez = 1;
 int contagemdentro = 0;
 int contagemfora = 0;

 printf("Insira dois valores reais, para definir um intervalo fechado. \n");
 
 scanf("%f", &a);
 scanf("%f", &b);

 if (a < b)
 {
 printf("Insira quantos numeros voce quer testar \n");
 scanf("%d", &valor);

 while (valor != 0 && i != valor)
 {
     printf("%d - Digite os numeros \n", vez);
     scanf("%f", &n[i]);

     i++;
     vez++;
 }

 for (i = 0; i < valor; i++)
 {
    if (n[i] >= a && n[i] <= b)
    {
    printf("%f = Dentro do intervalo \n", n[i]);
    contagemdentro++;
    }
    else
    {
    printf("%f = Fora do intervalo \n", n[i]);
    contagemfora++;
    }
 }
 printf("%d = Quantidade de valores dentro do intervalo \n", contagemdentro);
 printf("%d = Quantidade de valores fora do intervalo \n", contagemfora);
 }
 else
 {
 printf("Erro \n");
 }


 system ("pause");
 return 0;
}