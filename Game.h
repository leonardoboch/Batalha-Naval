#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include"Celula.h"
#include"Tabuleiro.h"
#include"Jogador.h"
typedef struct GAME
{
    Jogador* jogador_1;
    Jogador* jogador_maquina;
    Jogador*jogador_aux;
    int fim_jogo;
}Game;
Game*Cria_Game();
void Atirar_Player(Game*jogo,Jogador*jogador, int linha, int coluna);
//void Atirar_Player_maquina_facil(Game*jogo,Jogador*jogador);
void Atirar_Player_maquina(Game*jogo,Jogador*jogador_maquina, int linhaA, int colunaA);
//void Atirar_Player_maquina_dificil(Game*jogo,Jogador*jogador);
int Verifica_jogo(Game*jogo);




#endif // GAME_H_INCLUDED
