/**
 Method08 - Repeticao com intervalos.
*/
void method08 ( )
{
// definir dado
 int inferior = 0;
 int superior = 0;
 int x = 0;
// identificar
 IO_id ( "EXEMPLO0310 - Method08 - v0.0" );
// ler do teclado
 inferior = IO_readint ( "Limite inferior do intervalo: " );
 superior = IO_readint ( "Limite superior do intervalo : " );
// inicio teste variacao
 for ( x = inferior; x <= superior; x = x + 1 )
 {
 // mostrar valor atual
 IO_printf ( "%d\n", x );
 } // fim repetir
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method08 ( )
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
 IO_id ( "EXEMPLO0308 - Programa - v0.0" );
 
 // ler do teclado
 IO_println ( "Opcoes" );
 IO_println ( "0 - parar" );
 IO_println ( "1 - repeticao com teste no inicio (decrescente)" );
 IO_println ( "2 - repeticao com teste no inicio ( alternativo )" );
 IO_println ( "3 - repeticao com teste no inicio ( crescente )" );
 IO_println ( "4 - repeticao com teste no inicio e variacao ( crescente )" );
 IO_println ( "5 - repeticao com teste no inicio e variacao (decrescente)" );
 IO_println ( "6 - repeticao sobre cadeia de caracteres (decrescente)" );
 IO_println ( "7 - repeticao sobre cadeia de caracteres ( crescente )" );
 IO_println ( "8 - repeticao com intervalos ( crescente )" );
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
 case 6:
 method06 ( );
 break;
 case 7:
 method07 ( );
 break;
 case 8:
 method08 ( );
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
a.) 0 e 1
b.) 1 e 5
c.) 3 e 5
d.) -5 e 5
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
*/