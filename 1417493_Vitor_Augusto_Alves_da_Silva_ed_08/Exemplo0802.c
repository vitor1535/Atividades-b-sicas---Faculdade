/*
 Exemplo0802 - v0.2. - 24 / 10 / 2022
 Author: Vitor Augusto Alves da Silva
*/

#include "stdlib.h"
#include "stdio.h"
#include "io.h"

int main ()
{
    int x;

    void method01();
    void method02();

    printf("1 - Method01 \n");
    printf("2 - Method02 \n");

    printf("Escolha um metodo \n");
    scanf("%d", &x);

    switch(x)
    {
        case 1:
        method01();
        break;
       
        case 2:
        method02();
        break;
       
    }

    system ("pause");
    return 0;
}


/**
 printIntArray - Mostrar arranjo com valores inteiros.
 @param n - quantidade de valores
 @param array - grupo de valores inteiros
*/
void printIntArray ( int n, int array [ ] )
{
// definir dado local
 int x = 0;
 
// mostrar valores no arranjo
 for ( x=0; x<n; x=x+1 )
 {
 // mostrar valor
 IO_printf ( "%2d: %d\n", x, array [ x ] );
 } // fim repetir
} // printIntArray ( )
/**
 Method01 - Mostrar certa quantidade de valores.
*/
void method01 ( )
{
// definir dado
 int array [ ] = { 1, 2, 3, 4, 5 };
// identificar
 IO_id ( "EXEMPLO0810 - Method01 - v0.0" );
// executar o metodo auxiliar
 printIntArray ( 5, array );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method01 ( )

/**
 readIntArray - Ler arranjo com valores inteiros.
 @param n - quantidade de valores
 @param array - grupo de valores inteiros
*/
void readIntArray ( int n, int array [ ] )
{
// definir dados locais
 int x = 0;
 int y = 0;
 chars text = IO_new_chars ( STR_SIZE );
// ler e guardar valores em arranjo
 for ( x=0; x<n; x=x+1 )
 {
 // ler valor
 strcpy ( text, STR_EMPTY );
 y = IO_readint ( IO_concat (
 IO_concat ( text, IO_toString_d ( x ) ), " : " ) );
 // guardar valor
 array [ x ] = y;
 } // fim repetir
} // readIntArray ( )
/**
 Method02.
*/
void method02 ( )
{
// definir dados
 int n = 5; // quantidade de valores
 int array [ n ];
// identificar
 IO_id ( "EXEMPLO0810 - Method02 - v0.0" );
// ler dados
 readIntArray ( n, array );
// mostrar dados
 IO_printf ( "\n" );
 printIntArray ( n, array );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method02 ( )
