/**
 Method05 - Repeticao com teste no inicio e variacao.
*/
void method05 ( )
{
// definir dado
 int x = 0;
 int y = 0;
 int z = 0;
// identificar
 IO_id ( "EXEMPLO0305 - Method05 - v0.0" );
// ler do teclado
 x = IO_readint ( "Entrar com uma quantidade: " );
// repetir (x) vezes
// inicio teste variacao
 for ( y = x; y >= 1; y = y - 1 )
 {
 // ler valor do teclado
 z = IO_readint ( "Valor = " );
 // mostrar valor atual
 IO_printf ( "%d. %d\n", y, z );
 } // fim repetir
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method05 ( )
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
 IO_id ( "EXEMPLO0305 - Programa - v0.0" );
 
 // ler do teclado
 IO_println ( "Opcoes" );
 IO_println ( "0 - parar" );
 IO_println ( "1 - repeticao com teste no inicio (decrescente)" );
 IO_println ( "2 - repeticao com teste no inicio ( alternativo )" );
 IO_println ( "3 - repeticao com teste no inicio ( crescente )" );
 IO_println ( "4 - repeticao com teste no inicio e variacao ( crescente )" );
 IO_println ( "5 - repeticao com teste no inicio e variacao (decrescente)" );
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
 case 4:
 method04 ( );
 break;
 case 5:
 method05 ( );
 break;
 default:
 IO_pause ( "ERRO: Valor invalido." );
 } // fim escolher
 }
 while ( x != 0 );
// encerrar
 IO_pause ( "Apertar ENTER para terminar" );
 return ( 0 );
} // fim main( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 0
b.) 1
c.) 3
d.) 5
e.) -5
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
*/