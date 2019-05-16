#include<stdio.h>
#include<stdlib.h>
#include"Jogador.h"
#include"Celula.h"
#include"Tabuleiro.h"
Jogador* Cria_jogador()
{
    Jogador*aux_jogador;
    aux_jogador=(Jogador*)malloc(sizeof(Jogador));
    aux_jogador->id=0;
    aux_jogador->vencedor=0;
    aux_jogador->frota_total=113;
    aux_jogador->tabuleiro=*Cria_tabuleiro(20, 20);//cada jogador vai ter um tabuleiro diferente ;
    return aux_jogador;
//   Destroi_aux(Jogador*aux_jogador);
 //  aux_jogador=NULL;
}
void Destroi_Jogador(Jogador*jogador1,Jogador*jogador_maquina)
{
    free(jogador1);
    jogador1=NULL;
    free(jogador_maquina);
    jogador_maquina=NULL;


}
void Destroi_aux(Jogador*aux_jogador)
{
    free(aux_jogador);
    aux_jogador=NULL;


}

