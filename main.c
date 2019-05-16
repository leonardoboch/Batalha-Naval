#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include"Celula.h"
#include"Tabuleiro.h"
#include"Jogador.h"
#include"Game.h"
#define JOGADOR_1_ID 0
#define JOGADOR_MAQUINA_ID 1
int main()
{
    Game*jogo=Cria_Game();
    int linha,coluna, opc,i;
    srand(time(NULL));
    int linhaA, colunaA;
    char url1[]="tabuleiro1.txt";
    char url2[]="tabuleiro2.txt";
    Carrega_tabuleiro(url1, jogo);
    Carrega_tabuleiro2(url2,jogo);
    printf(" \t======BEM VINDO AO BATALHA NAVAL=============== \t \n");
    printf("JOGADOR ID:::::::::: %d \t",jogo->jogador_maquina->id);
    printf("PONTOS DE VIDA:::: %d \n",jogo->jogador_maquina->frota_total);
    Mostra_tabuleiro(jogo->jogador_1->tabuleiro);
    printf("\n");
    printf("JOGADOR ID:::::::::: %d \t",jogo->jogador_1->id);
    printf("PONTOS DE VIDA:::: %d \n",jogo->jogador_1->frota_total);
    Mostra_tabuleiro(jogo->jogador_maquina->tabuleiro);
    do
    {
        printf("Digite a linha e coluna em que deseja atirar \n");
        printf("Linha: \n");
        scanf("%d",&linha);
        printf("Coluna: \n");
        scanf("%d",&coluna);
        Atirar_Player(jogo,jogo->jogador_1->id,linha,coluna);
        printf("JOGADOR ID:::::::::: %d \t",jogo->jogador_maquina->id);
        printf("PONTOS DE VIDA:::: %d \n",jogo->jogador_maquina->frota_total);
        linhaA=rand()%20;
        colunaA=rand()%20;
        Atirar_Player_maquina(jogo,jogo->jogador_maquina,linhaA, colunaA);
        printf("JOGADOR ID:::::::::: %d \t",jogo->jogador_1->id);
        printf("PONTOS DE VIDA:::: %d \n",jogo->jogador_1->frota_total);
        //system("cls");

        jogo->fim_jogo=Verifica_jogo(jogo);
    }
    while(jogo->fim_jogo!=1);
    if(jogo->jogador_1->frota_total>0)
    {
        printf("O JOGADOR %d VENCEU",jogo->jogador_1->id);

    }
    else if (jogo->jogador_maquina->frota_total>0)
    {
        printf("O JOGADOR %d VENCEU",jogo->jogador_maquina->id);

    }
    Destroi_game(jogo);
    return 0;

}
