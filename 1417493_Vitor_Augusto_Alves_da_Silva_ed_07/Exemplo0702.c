/*
 Exemplo0702 - v0.2. - 14 / 10 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "io.h"
#include "stdio.h"
#include "stdlib.h"

int main ()
{
    void method01();
    void method02();

    method01();
    method02();

    system ("pause");
    return 0;
}

/**
 writeInts - Gravar em arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo"
 @param x - quantidade de valores
*/
void writeInts ( chars fileName, int x )
{
// definir dados
 FILE* arquivo = fopen ( fileName, "wt" );
 int y = 0;
// repetir para a quantidade de dados
 for ( y = 1; y <= x; y = y + 1 )
 {
 // gravar valor
 fprintf ( arquivo, "%d\n", y );
 } // fim repetir
// fechar arquivo (INDISPENSAVEL para gravacao)
 fclose ( arquivo );
} // fim writeInts ( )
/**
 Method01 - Mostrar certa quantidade de valores.
*/
void method01 ( )
{
// identificar
 IO_id ( "EXEMPLO0701 - Method01 - v0.0" );
// executar o metodo auxiliar
 writeInts ( "DADOS1.TXT", 10 );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method01 ( )

/**
 readInts - Ler de arquivo texto certa quantidade de valores.
 @param fileName - nome do arquivo
 @param x - quantidade de valores
*/
void readInts ( chars fileName )
{
// definir dados
 FILE* arquivo = fopen ( fileName, "rt" );
 int x = 0;
// tentar ler o primeiro
 fscanf ( arquivo, "%d", &x );
// repetir enquanto houver dados
 while ( ! feof ( arquivo ) )
 {
 // mostrar valor
 printf ( "%d\n", x );
 // tentar ler o proximo
 fscanf ( arquivo, "%d", &x );
 } // fim repetir
// fechar arquivo (RECOMENDAVEL para leitura)
 fclose ( arquivo );
} // fim readInts ( )
/**
 Method02.
*/
void method02 ( )
{
// identificar
 IO_id ( "EXEMPLO0702 - Method02 - v0.0" );
// executar o metodo auxiliar
 readInts ( "DADOS1.TXT" );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )