/**
 Method10 - Repeticao com confirmacao.
*/
void method10 ( )
{
// definir dado
 double inferior = 0;
 double superior = 0;
 double passo = 0;
 double x = 0;
// identificar
 IO_id ( "EXEMPLO0310 - Method10 - v0.0" );
// ler do teclado
 inferior = IO_readdouble ( "Limite inferior do intervalo : " );
// repetir ate' haver confirmacao de validade
 do
 {
 superior = IO_readdouble ( "Limite superior do intervalo: " );
 }
 while ( inferior >= superior );
// repetir ate' haver confirmacao de validade
 do
 {
 passo = IO_readdouble ( "Variacao no intervalo (passo): " );
 }
 while ( passo <= 0.0 );
// inicio teste variacao
 for ( x = inferior; x <= superior; x = x + passo )
 {
 // mostrar valor atual
 IO_printf ( "%lf\n", x );
 } // fim repetir
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method10 ( )
/*
 Funcao principal.
*/
int main ( )
{
// definir dado
 int x = 0; // definir variavel com valor inicial
// repetir até desejar parar
 do
 {
 // identificar
 IO_id ( "EXEMPLO0310 - Programa - v0.0" );
 
 // ler do teclado
 IO_println ( "Opcoes" );
 IO_println ( " 0 - parar" );
 IO_println ( " 1 - repeticao com teste no inicio (decrescente)" );
 IO_println ( " 2 - repeticao com teste no inicio ( alternativo )" );
 IO_println ( " 3 - repeticao com teste no inicio ( crescente )" );
 IO_println ( " 4 - repeticao com teste no inicio e variacao ( crescente )" );
 IO_println ( " 5 - repeticao com teste no inicio e variacao (decrescente)" );
 IO_println ( " 6 - repeticao sobre cadeia de caracteres (decrescente)" );
 IO_println ( " 7 - repeticao sobre cadeia de caracteres ( crescente )" );
 IO_println ( " 8 - repeticao com intervalos ( crescente )" );
 IO_println ( " 9 - repeticao com intervalos (decrescente)" );
 IO_println ( "10 - repeticao com confirmacao " );
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
 case 9:
 method09 ( );
 break;
 case 10:
 method10 ( );
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
a.) [ 0.1 : 0.5 ] e passo = 0.1
b.) [ 0.1 : 0.5 ] e passo = 0.1
c.) [ 0.5 : 0.1 ] e passo = 0.1
d.) [ 0.1 : 0.5 ] e passo = -0.1
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
*/
