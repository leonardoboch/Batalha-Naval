#ifndef JOGADOR_H_INCLUDED
#define JOGADOR_H_INCLUDED
#include"Tabuleiro.h"
#include"Celula.h"
typedef struct JOGADOR
{
    int id;
    int vencedor;
    int frota_total;
    Tabuleiro tabuleiro;
}Jogador;
Jogador* Cria_jogador();
void Destroi_aux(Jogador*aux_jogador);
void Destroi_Jogador(Jogador*jogador_1, Jogador*jogador_maquina);






#endif // JOGADOR_H_INCLUDED
