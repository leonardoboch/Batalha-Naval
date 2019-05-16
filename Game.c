#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"Game.h"
#include"Jogador.h"
#include"Tabuleiro.h"
#include"Celula.h"

Game* Cria_Game()
{
    Game*aux_game=(Game*)malloc(sizeof(Game));
    aux_game->jogador_1 = Cria_jogador();
    aux_game->jogador_1->id = 0;
    aux_game->jogador_maquina = Cria_jogador();
    aux_game->jogador_maquina->id = 1;

    aux_game->fim_jogo = 0;//se 1 acaba o jogo;
    return aux_game;
}
void Destroi_game(Game* game)
{
    free(game);
    game=NULL;
}
void Atirar_Player(Game*jogo, Jogador*jogador, int linha, int coluna)
{
    int aux_linha, aux_coluna;
    if(jogo->jogador_maquina->tabuleiro.matriz_campo[linha][coluna].valor != 35)
    {
        jogo->jogador_maquina->frota_total--;
    }
    jogo->jogador_maquina->tabuleiro.matriz_campo[linha][coluna].visivel = 1;
    Mostra_tabuleiro(jogo->jogador_maquina->tabuleiro,linha,coluna);

}
void Atirar_Player_maquina(Game*jogo,Jogador *jogador_maquina, int linhaA, int colunaA)
{
    int i, j;
    i = linhaA;
    j = colunaA;
    for(i = linhaA; i < linhaA+2; i++)
    {
        for(j = colunaA; j < colunaA+2; j++)
        {
            if(jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor != 35)
            {
                jogo->jogador_1->frota_total--;
                jogo->jogador_1->tabuleiro.matriz_campo[i][j].visivel = 1;

            }
            else
            {

                jogo->jogador_1->tabuleiro.matriz_campo[i][j].visivel = 1;

            }

        }
    }
    Mostra_tabuleiro(jogo->jogador_1->tabuleiro,linhaA, colunaA);
    }

int Verifica_jogo(Game*jogo)
{

    if(jogo->jogador_1->frota_total <= 0||jogo->jogador_maquina->frota_total <= 0)
    {
        return 1;
    }
    else
        return 0;

}
