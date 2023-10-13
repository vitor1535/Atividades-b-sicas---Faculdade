/*
 Exemplo0901 - v0.1. - 29 / 10 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "stdio.h"
#include "stdlib.h"
#include "io.h"

int main ()
{
    int x;

    void method01 ();

    switch (x)
    {
    case 1:
    method01();
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
