/**
 Method03 - Repeticao com teste no inicio.
*/
void method03 ( )
{
// definir dado
 int x = 0;
 int y = 0;
// identificar
 IO_id ( "EXEMPLO0303 - Method03 - v0.0" );
// ler do teclado
 x = IO_readint ( "Entrar com uma quantidade: " );
// repetir (x) vezes
 y = 1; // o valor lido devera' ser preservado
 while ( y <= x )
 {
 // mostrar valor atual
 IO_printf ( "%d\n", y );
 // passar ao proximo valor
 y = y + 1;
 } // fim repetir
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method03 ( )
/*
 Funcao principal.
*/
int main ( )
{
// definir dado
 int x = 0;
// repetir até desejar parar
 do
 {
 // identificar
 IO_id ( "EXEMPLO0303 - Programa - v0.0" );
 
 // ler do teclado
 IO_println ( "Opcoes" );
 IO_println ( "0 - parar" );
 IO_println ( "1 - repeticao com teste no inicio (decrescente)" );
 IO_println ( "2 - repeticao com teste no inicio (alternativo)" );
 IO_println ( "3 - repeticao com teste no inicio ( crescente )" );
 IO_println ( "" );
 
 x = IO_readint ( "Entrar com uma opcao: " );
 
 // testar valor
 switch ( x )
 {
 case 0:
 method00 ( );
 break;
 case 1:
 method01 ( );
 break;
 case 2:
 method02 ( );
 break;
 case 3:
 method03 ( );
 break;
 default:
 IO_pause ( IO_concat ( "Valor diferente das opcoes [0,1,2,3] (",
 IO_concat ( IO_toString_d ( x ), ")" ) ) );
 } // fim escolher
 }
 while ( x != 0 );
// encerrar
 IO_pause ( "Apertar ENTER para terminar" );
 return ( 0 );
} // fim main( )
