/*
 Exemplo0102 - v0.2. - 18 / 09 / 2022
 Author: Vitor augusto alves da silva
 
 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0101 exemplo0101.c
 Windows: gcc -o exemplo0101 exemplo0101.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0101
 Windows: exemplo0101
*/
// dependencias
#include <stdio.h> // para as entradas e saidas
/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main ( int argc, char* argv [ ] )
{
// definir dado
 double x = 0.0; // definir variavel com valor inicial
// identificar
 printf ( "%s\n", "Exemplo0101 - Programa = v0.0" );
 printf ( "%s\n", "Autor: _____________________" );
 printf ( "\n" ); // mudar de linha
// mostrar valor inicial
printf ( "%s%lf\n", "x = ", x );
// OBS.: O formato para int -> %d (ou %i)
 printf ( "&%s%p\n", "x = ", &x );
// OBS.: O formato para endereco -> %p)
// ler do teclado
 printf ( "Entrar com um valor real: " );
 scanf ( "%lf", &x );
// OBS.: Necessario indicar o endereco -> &
 getchar ( ); // OBS.: Limpar a entrada de dados
// mostrar valor lido
 printf ( "%s%lf\n", "x = ", x );
// encerrar
 printf ( "\n\nApertar ENTER para terminar." );
 getchar( ); // aguardar por ENTER
 return ( 0 ); // voltar ao SO (sem erros)
} // fim main( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 5
b.) -5
c.) 123456789
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
leitura e exibicao de inteiro
0.2 01. ( OK ) identificacao de programa

*/