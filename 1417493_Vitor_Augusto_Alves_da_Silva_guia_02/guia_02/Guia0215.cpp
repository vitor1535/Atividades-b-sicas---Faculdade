/*
 Guia_0215 - v1.5. - 11 / 09 / 2022
 Author: Vitor augusto alves da silva
 Para compilar em uma janela de comandos (terminal):
 
 No Linux : g++ -o Guia0115 ./Guia0115.cpp
 No Windows: g++ -o Guia0115.exe Guia0115.cpp
 Para executar em uma janela de comandos (terminal):
 No Linux : ./Guia0115
 No Windows: Guia0115
*/
// lista de dependencias
#include "karel.hpp"
// --------------------------- definicoes de metodos
/**
 decorateWorld - Metodo para preparar o cenario.
 @param fileName - nome do arquivo para guardar a descricao.
*/
void decorateWorld ( const char* fileName )
{
// colocar paredes no mundo
 world->set ( 3, 1, HWALL ); // horizontal
 world->set ( 4, 1, HWALL ); // horizontal
 world->set ( 5, 1, HWALL ); // horizontal
 world->set ( 3, 8, HWALL ); // horizontal
 world->set ( 5, 8, HWALL ); // horizontal
 
 world->set ( 2, 2, VWALL ); // vertical
 world->set ( 2, 3, VWALL ); // vertical
 world->set ( 2, 4, VWALL ); // vertical
 world->set ( 2, 5, VWALL ); // vertical
 world->set ( 2, 6, VWALL ); // vertical
 world->set ( 2, 7, VWALL ); // vertical
 world->set ( 2, 8, VWALL ); // vertical
 world->set ( 3, 2, VWALL ); // vertical
 world->set ( 3, 3, VWALL ); // vertical
 world->set ( 3, 4, VWALL ); // vertical
 world->set ( 3, 5, VWALL ); // vertical
 world->set ( 3, 6, VWALL ); // vertical
 world->set ( 3, 7, VWALL ); // vertical
 world->set ( 4, 2, VWALL ); // vertical
 world->set ( 4, 3, VWALL ); // vertical
 world->set ( 4, 4, VWALL ); // vertical
 world->set ( 4, 5, VWALL ); // vertical
 world->set ( 4, 6, VWALL ); // vertical
 world->set ( 4, 7, VWALL ); // vertical
 world->set ( 5, 2, VWALL ); // vertical
 world->set ( 5, 3, VWALL ); // vertical
 world->set ( 5, 4, VWALL ); // vertical
 world->set ( 5, 5, VWALL ); // vertical
 world->set ( 5, 6, VWALL ); // vertical
 world->set ( 5, 7, VWALL ); // vertical
 world->set ( 5, 8, VWALL ); // vertical

// colocar um marcador no mundo
  world->set ( 3, 2, BEEPER );
  world->set ( 4, 3, BEEPER );
  world->set ( 4, 3, BEEPER );
  world->set ( 4, 2, BEEPER );
  world->set ( 5, 2, BEEPER );
  world->set ( 5, 3, BEEPER );
  world->set ( 5, 3, BEEPER );
  world->set ( 5, 4, BEEPER );
  world->set ( 5, 4, BEEPER );
  world->set ( 5, 4, BEEPER );

 //world->set ( 2, 6, BEEPER );
 //world->set ( 5, 7, BEEPER );
 // world->set ( 6, 4, BEEPER );
// salvar a configuracao atual do mundo
 world->save( fileName );
} // decorateWorld ( )
/**
 Classe para definir robo particular (MyRobot),
 a partir do modelo generico (Robot)
 Nota: Todas as definicoes irao valer para qualquer outro robo
 criado a partir dessa nova descricao de modelo.
*/
class MyRobot : public Robot
{
 public:
 /**
 turnRight - Procedimento (acao) para virar 'a direita.
 */
 void turnRight ( )
 {
 // testar se o robo esta' ativo
 if ( checkStatus ( ) )
 {
 // o agente que executar esse metodo
 // devera' virar tres vezes 'a esquerda
 turnLeft ( );
 turnLeft ( );
 turnLeft ( );
 } // end if
 } // end turnRight ( )
 /**
 moveN - Metodo para mover certa quantidade de passos.
 @param steps - passos a serem dados.
 */
 void moveN( int steps )
 {
 // definir dado local
 int step = 0;
 // repetir contando e testando ate' atingir a quantidade de passos
 for ( step = 1; step <= steps; step = step + 1 ) // outra forma de repetir
 {
 // dar um passo por vez
 move( );
 } // end if
 } // end moveN( )
 /**
 doPartialTask - Metodo para descrever parte de uma tarefa.
 */
void stepUpRight( ) //definir um degrau pra cima e a direita
 {
  turnLeft();
  moveN(1);
  turnRight();
  moveN(1);
 } // fim stepUpRight( )

 void stepDownRight( ) //definir um degrau pra baixo e a direita
 {
  moveN(1);
  turnRight();
  moveN(1);
  turnLeft();
 } // fim stepUpRight( )

 void stepUpLeft( ) //definir um degrau pra cima e a esquerda
 {
  turnRight();
  moveN(1);
  turnLeft();
  moveN(1);
 } // fim stepUpRight( )

 void stepDownLeft( ) //definir um degrau pra cima e a esquerda
 {
  moveN(1);
  turnLeft();
  moveN(1);
  turnRight();
 } // fim stepUpRight( )
void putBeepers()
{
 while (beepers > 0)
 {
 putBeeper();
 }
} 
 void doPartialTask( )
 {
 // especificar acoes dessa parte da tarefa
turnLeft();
moveN(8);
turnRight();
moveN(3);
turnRight();
moveN(1);
turnRight();
moveN(1);
if(leftIsClear())
{
  turnLeft();
  moveN(6);
  pickBeeper();
  turnLeft();
  turnLeft();
  moveN(6);
}
turnRight();
moveN(1);
if(rightIsClear())
{
  turnRight();
  moveN(6);
  pickBeeper();
  turnLeft();
  turnLeft();
  moveN(6);
}
turnRight();
moveN(1);
if(rightIsClear())
{
  turnRight();
  moveN(6);
  pickBeeper();
  turnLeft();
  turnLeft();
  moveN(6);
}
turnLeft();
moveN(1);
if(leftIsClear())
{
  turnLeft();
  moveN(5);
  pickBeeper();
  pickBeeper();
  turnLeft();
  turnLeft();
  moveN(5);
}
turnRight();
moveN(1);
if(rightIsClear())
{
  turnRight();
  moveN(5);
  pickBeeper();
  pickBeeper();
  turnLeft();
  turnLeft();
  moveN(1);
  pickBeeper();
  pickBeeper();
  pickBeeper();
  moveN(4);
}
turnLeft();
moveN(1);
turnRight();
moveN(1);
turnRight();
moveN(5);
turnRight();
moveN(8);
putBeepers();
turnRight();
moveN(8);
turnLeft();
turnLeft();
turnOff();
 }

// end doPartialTask( )
 /**
 doTask - Relacao de acoes para o robo executar.
 */
 void doTask( )
 {
 // especificar acoes da tarefa
 doPartialTask( );
 doPartialTask( );
 // testar se ha' marcador antes ...
 if ( nextToABeeper( ) )
 {
 // ... de tentar carrega-lo
 pickBeeper( );
 } // end if
 doPartialTask( );
 // testar se carrega marcador antes ...
 if ( nbeepers( ) > 0 )
 {
 // ... de tentar descarrega-lo
 putBeeper( );
 } // end if
 doPartialTask( );
 turnLeft( );
 // encerrar
 turnOff ( );
 } // end doTask( )
}; // end class MyRobot
// --------------------------- acao principal
/**
 Acao principal: executar a tarefa descrita acima.
*/
int main ( )
{
// definir o contexto
// criar o ambiente e decorar com objetos
// OBS.: executar pelo menos uma vez,
// antes de qualquer outra coisa
// (depois de criado, podera' ser comentado)
 world->create ( "" ); // criar o mundo
 decorateWorld ( "Guia0215.txt" );
 world->show ( );
// preparar o ambiente para uso
 world->reset ( ); // limpar configuracoes
 world->read ( "Guia0215.txt" );// ler configuracao atual para o ambiente
 world->show ( ); // mostrar a configuracao atual
 set_Speed ( 3 ); // definir velocidade padrao
// criar robo
 MyRobot *robot = new MyRobot( );
// posicionar robo no ambiente (situacao inicial):
// posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
 robot->create ( 1, 1, EAST, 0, "Karel" );
// executar tarefa
 robot->doTask ( );
// encerrar operacoes no ambiente
 world->close ( );
// encerrar programa
 getchar ( );
 return ( 0 );
} // end main ( )
// ---------------------------------------------- testes
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
*/
