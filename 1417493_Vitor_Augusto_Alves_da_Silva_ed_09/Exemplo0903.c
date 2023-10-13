/*
 Exemplo0903 - v0.3. - 29 / 10 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "stdio.h"
#include "stdlib.h"
#include "io.h"

int main ()
{
    int x;

    void method01 ();
    void method02 ();
    void method03 ();

    switch (x)
    {
    case 1:
    method01();
    break;

    case 2:
    method02();
    break;

    case 3:
    method03();
    break;

    }

    system ("pause");
    return 0;
}

/**
 printIntMatrix - Mostrar arranjo bidimensional com valores inteiros.
 @param rows - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix - grupo de valores inteiros
*/
void printIntMatrix ( int rows, int columns, int matrix[ ][columns] )
{
// definir dado local
 int x = 0;
 int y = 0;
// mostrar valores na matriz
 for ( x=0; x<rows; x=x+1 )
 {
 for ( y=0; y<columns; y=y+1 )
 {
 // mostrar valor
 IO_printf ( "%3d\t", matrix [ x ][ y ] );
 } // fim repetir
 IO_printf ( "\n" );
 } // fim repetir
} // printIntMatrix ( )
/**
 Method01 - Mostrar certa quantidade de valores.
*/
void method01 ( )
{
// definir dado
 int matrix [ ][3] = { 
 {1, 2, 3},
 {4, 5, 6},
 {7, 8, 9}
 };
// identificar
 IO_id ( "EXEMPLO0910 - Method01 - v0.0" );
// executar o metodo auxiliar
 printIntMatrix ( 3, 3, matrix );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method01 ( )

/**
 readIntMatrix - Ler arranjo bidimensional com valores inteiros.
 @param rows - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix - grupo de valores inteiros
*/
void readIntMatrix ( int rows, int columns, int matrix[ ][columns] )
{
// definir dados locais
 int x = 0;
 int y = 0;
 int z = 0;
 chars text = IO_new_chars ( STR_SIZE );
// ler e guardar valores em arranjo
 for ( x=0; x<rows; x=x+1 )
 {
 for ( y=0; y<columns; y=y+1 )
 {
 // ler valor
 strcpy ( text, STR_EMPTY );
 z = IO_readint ( IO_concat (
 IO_concat ( IO_concat ( text, IO_toString_d ( x ) ), ", " ),
 IO_concat ( IO_concat ( text, IO_toString_d ( y ) ), " : " ) ) );
 // guardar valor
 matrix [ x ][ y ] = z;
 } // fim repetir
 } // fim repetir
} // readIntMatrix ( )
/**
 Method02.
*/
void method02 ( )
{
// definir dados
 int n = 2; // quantidade de valores
 int matrix [ n ][ n ];
// identificar
 IO_id ( "EXEMPLO0910 - Method02 - v0.0" );
// ler dados
 readIntMatrix ( n, n, matrix );
// mostrar dados
 IO_printf ( "\n" );
 printIntMatrix ( n, n, matrix );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )

/**
 fprintIntMatrix - Gravar arranjo bidimensional com valores inteiros.
 @param fileName - nome do arquivo
 @param rows - quantidade de linhas
 @param columns - quantidade de colunas
 @param matrix - grupo de valores inteiros
*/
void fprintIntMatrix ( chars fileName, int rows, int columns, int matrix[ ][columns] )
{
// definir dados locais
 FILE* arquivo = fopen ( fileName, "wt" );
 int x = 0;
 int y = 0;
// gravar quantidade de dados
 IO_fprintf ( arquivo, "%d\n", rows );
 IO_fprintf ( arquivo, "%d\n", columns );
// gravar valores no arquivo
 for ( x=0; x<rows; x=x+1 )
 {
 for ( y=0; y<columns; y=y+1 )
 {
 // gravar valor
 IO_fprintf ( arquivo, "%d\n", matrix [ x ][ y ] );
 } // fim repetir
 } // fim repetir
// fechar arquivo
 fclose ( arquivo );
} // fprintIntMatrix ( )
/**
 Method03.
*/
void method03 ( )
{
// definir dados
 int rows = 0;
 int columns = 0;
// identificar
 IO_id ( "EXEMPLO0910 - Method03 - v0.0" );
// ler dados
 rows = IO_readint ( "\nrows = " );
 columns = IO_readint ( "\ncolumns = " );
 IO_printf ( "\n" );
 if ( rows <= 0 || columns <= 0 )
 {
 IO_println ( "\nERRO: Valor invalido." );
 }
 else
 {
 // reservar espaco
 int matrix [ rows ][ columns ];
 // ler dados
 readIntMatrix ( rows, columns, matrix );
 // mostrar dados
 IO_printf ( "\n" );
 printIntMatrix ( rows, columns, matrix );
 // gravar dados
 IO_printf ( "\n" );
 fprintIntMatrix( "MATRIX1.TXT", rows, columns, matrix );
 } // fim se
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method03 ( )
