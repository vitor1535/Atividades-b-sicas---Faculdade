/**
 Method06 - Repeticao sobre cadeia de caracateres.
*/
void method06 ( )
{
// definir dado
 int x = 0;
 int y = 0;
 
 int tamanho = 0;
// identificar
 IO_id ( "EXEMPLO0306 - Method06 - v0.0" );
// ler do teclado

// repetir para cada letra

// OBS: A cadeia de caracteres iniciam suas posições em zero.
// inicio teste variacao
 for ( y = tamanho; y >= 0; y = y - 1 )
 {
 // mostrar valor atual

 } // fim repetir
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // fim method06 ( )
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
 IO_id ( "EXEMPLO0306 - Programa - v0.0" );
 
 // ler do teclado
 IO_println ( "Opcoes" );
 IO_println ( "0 - parar" );
 IO_println ( "1 - repeticao com teste no inicio (decrescente)" );
 IO_println ( "2 - repeticao com teste no inicio ( alternativo )" );
 IO_println ( "3 - repeticao com teste no inicio ( crescente )" );
 IO_println ( "4 - repeticao com teste no inicio e variacao ( crescente )" );
 IO_println ( "5 - repeticao com teste no inicio e variacao (decrescente)" );
 IO_println ( "6 - repeticao sobre cadeia de caracteres (decrescente)" );
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
a.) "a"
b.) "abc"
c.) "abc def"
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
*/