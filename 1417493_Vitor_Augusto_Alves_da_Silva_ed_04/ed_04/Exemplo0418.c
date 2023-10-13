/*
 Exemplo0418 - v1.8 - 24 / 09 / 2022
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

 char caracteres [20];
 char caracteresMaiorQueJ [20];
 char caracteresNaoMaiorQueJ [20];
 int i;
 int i2 = 0;
 int i3 = 0;
 int tam;
 int contagem = 0;

int main ()
{
 void lerCaracteres();

 printf("Insira o tamanho da sequencia de caracteres \n");
 scanf("%d", &tam);

 printf("Insira uma sequencia de caracteres \n");
 lerCaracteres();
 

 

 





 system ("pause");
 return 0;
}

void lerCaracteres ()
{
    
 scanf("%s", &caracteres);



 for (i = 0; i < tam; i++)
 {
 if (!(caracteres[i] >= 'A' && caracteres[i] <= 'Z' || caracteres[i] >= 'a' && caracteres[i] <= 'z' || caracteres[i] >= 48 && caracteres[i] <=57))
 {
 contagem++;
 printf("Valores nao alfanumericos = %c  \n", caracteres[i]);
 }
 }
 printf("Quantidade de valores nao alfanumericos = %d  \n", contagem);

}