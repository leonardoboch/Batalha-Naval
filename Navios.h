#ifndef NAVIOS_H_INCLUDED
#define NAVIOS_H_INCLUDED
#include"Celula.h"
#include"Tabuleiro.h"
#include"Jogador.h"
#include"Game.h"

void Carrega_tabuleiro(char* url1,Game*jogo);
void Carrega_tabuleiro2(char* url2,Game*jogo);
void P_Boia(int id, int valor, int orientacao, int linha, int coluna,Game*jogo);
void P_Aviao(int id, int valor, int orientacao, int linha, int coluna,Game*jogo);
void P_Sub(int id, int valor, int orientacao, int linha, int coluna,Game*jogo);
void P_Esp(int id, int valor, int orientacao, int linha, int coluna,Game*jogo);
void P_Porta_A(int id, int valor, int orientacao, int linha, int coluna,Game*jogo);
void P_Boia_2(int id, int valor, int orientacao, int linha, int coluna,Game*jogo);
void P_Aviao_2(int id, int valor, int orientacao, int linha, int coluna,Game*jogo);
void P_Sub_2(int id, int valor, int orientacao, int linha, int coluna,Game*jogo);
void P_Esp_2(int id, int valor, int orientacao, int linha, int coluna,Game*jogo);
void P_Porta_A_2(int id, int valor, int orientacao, int linha, int coluna,Game*jogo);





#endif // NAVIOS_H_INCLUDED
