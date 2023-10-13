/*
 Exemplo0804 - v0.4. - 24 / 10 / 2022
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
    void method03();
    void method04();

    printf("1 - Method01 \n");
    printf("2 - Method02 \n");
    printf("3 - Method03 \n");
    printf("4 - Method04 \n");

    printf("\nEscolha um metodo \n");
    scanf("%d", &x);

    switch(x)
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
       
        case 4:
        method04();
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

/**
 fprintIntArray - Gravar arranjo com valores inteiros.
 @param fileName - nome do arquivo
 @param n - quantidade de valores
 @param array - grupo de valores inteiros
*/
void fprintIntArray ( chars fileName, int n, int array [ ] )
{
// definir dados locais
 FILE* arquivo = fopen ( fileName, "wt" );
 int x = 0;
// gravar quantidade de dados
 IO_fprintf ( arquivo, "%d\n", n );
// gravar valores no arranjo
 for ( x=0; x<n; x=x+1 )
 {
 // gravar valor
 IO_fprintf ( arquivo, "%d\n", array [ x ] );
 } // fim repetir
 
// fechar arquivo
 fclose ( arquivo );
} // fprintIntArray ( )
/**
 Method03.
*/
void method03 ( )
{
// definir dados
 int n = 5; // quantidade de valores
 int array [ n ];
// identificar
 IO_id ( "EXEMPLO0810 - Method03 - v0.0" );
// ler dados
 readIntArray ( n, array );
// mostrar dados
 IO_printf ( "\n" );
 fprintIntArray ( "ARRAY1.TXT", n, array );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method03 ( )

/**
 freadArraySize - Ler tamanho do arranjo com valores inteiros.
 @return quantidade de valores lidos
 @param fileName - nome do arquivo
*/
int freadArraySize ( chars fileName )
{
// definir dados locais
 int n = 0;
 FILE* arquivo = fopen ( fileName, "rt" );
// ler a quantidade de dados
 IO_fscanf ( arquivo, "%d", &n );
 if ( n <= 0 )
 {
 IO_println ( "ERRO: Valor invalido." );
 n = 0;
 } // fim se
// retornar dado lido
 return ( n );
} // freadArraySize ( )
/**
 freadIntArray - Ler arranjo com valores inteiros.
 @param fileName - nome do arquivo
 @param n - quantidade de valores
 @param array - grupo de valores inteiros
*/
void freadIntArray ( chars fileName, int n, int array [ ] )
{
// definir dados locais
 int x = 0;
 int y = 0;
 FILE* arquivo = fopen ( fileName, "rt" );
// ler a quantidade de dados
 IO_fscanf ( arquivo, "%d", &x );
 if ( n <= 0 || n > x )
 {
 IO_println ( "ERRO: Valor invalido." );
 }
 else
 {
 // ler e guardar valores em arranjo
 x = 0;
 while ( ! feof ( arquivo ) && x < n )
 {
 // ler valor
 IO_fscanf ( arquivo, "%d", &y );
 // guardar valor
 array [ x ] = y;
 // passar ao proximo
 x = x+1;
 } // fim repetir
 } // fim se
} // freadIntArray ( )
/**
 Method04.
*/
void method04 ( )
{
// definir dados
 int n = 0; // quantidade de valores
// identificar
 IO_id ( "EXEMPLO0810 - Method04 - v0.0" );
// ler dados
 n = freadArraySize ( "ARRAY1.TXT" );
 if ( n <= 0 )
 {
 IO_printf ( "\nERRO: Valor invalido.\n" );
 }
 else
 {
 // definir armazenador
 int array [ n ];
 // ler dados
 freadIntArray ( "ARRAY1.TXT", n, array );
 // mostrar dados
 IO_printf ( "\n" );
 printIntArray ( n, array );
 } // fim se
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method04 ( )