#ifndef TABULEIRO_H_INCLUDED
#define TABULEIRO_H_INCLUDED
#include"Tabuleiro.h"
#include"Celula.h"
typedef struct TABULEIRO{
    int linhas;
    int colunas;
    Celula** matriz_campo;//tamanho do mapa
    //Celula**matriz_aux;
}Tabuleiro;

Tabuleiro*Cria_tabuleiro(int linhas, int colunas);

void Destroi_Tabuleiro(Tabuleiro* tabuleiro);




#endif // TABULEIRO_H_INCLUDED
