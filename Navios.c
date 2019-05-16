#include<stdio.h>
#include<stdlib.h>
#include"Tabuleiro.h"
#include"Celula.h"
#include"Navios.h"
void Carrega_tabuleiro(char *url1,Game* jogo)
{
    int id, valor,orientacao,linha,coluna;

    FILE*arq1;
    arq1=fopen(url1,"r");
    while(fscanf(arq1,"%d %d %d %d %d\n",&id,&valor,&orientacao,&linha,&coluna)!=EOF)
    {
        if(valor==48)
        {
            P_Boia(id,valor,orientacao,linha,coluna,jogo);

        }
        else if(valor==49)
        {
            P_Aviao(id,valor,orientacao,linha,coluna,jogo);

        }
        else if(valor==50)
        {
            P_Sub(id,valor,orientacao,linha,coluna,jogo);

        }
        else if(valor==51)
        {
            P_Esp(id,valor,orientacao,linha,coluna,jogo);

        }
        else if(valor==52)
        {
            P_Esp(id,valor,orientacao,linha,coluna,jogo);

        }
        else if(valor==53)
        {
            P_Porta_A(id,valor,orientacao,linha,coluna,jogo);

        }


    }
    fclose(arq1);
}
void P_Boia(int id, int valor, int orientacao, int linha, int coluna,Game*jogo)
{
    int i,j;
    i=linha;
    j=coluna;

    jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor=valor;

}
void P_Aviao(int id, int valor, int orientacao, int linha, int coluna,Game*jogo)
{
    int i,j;
    i=linha;
    j=coluna;
    if(orientacao==0)
    {
        jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i][j+2].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+1][j].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+2].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+2].valor;


    }
    else if(orientacao==1)
    {
        jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor=jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i][j+2].valor=jogo->jogador_1->tabuleiro.matriz_campo[i][j+2].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+2].valor=valor;


    }
    else if(orientacao==2)
    {
        jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i][j+1].valor=jogo->jogador_1->tabuleiro.matriz_campo[i][j+1].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+1].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+1].valor;



    }
    else if(orientacao==3)
    {
        jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor=jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j].valor=jogo->jogador_1->tabuleiro.matriz_campo[i][j+2].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+1].valor=valor;


    }

}

void P_Esp(int id, int valor, int orientacao, int linha, int coluna,Game*jogo)
{
    int i,j;
    i=linha;
    j=coluna;
    if(orientacao==0)
    {
        jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor=jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+1][j].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+2][j].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+3][j].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+3][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i][j+2].valor=jogo->jogador_1->tabuleiro.matriz_campo[i][j+2].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+2].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+2].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+2].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+2].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+3][j+2].valor=valor;



    }
    else if(orientacao==1)
    {
        jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+1][j].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+2][j].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+3][j].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+3][j].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+3][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i][j+2].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+2].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+2].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+2].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+2].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+3][j+2].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+3][j+2].valor;


    }
    else if(orientacao==2)
    {
        jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor=jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i][j+1].valor=jogo->jogador_1->tabuleiro.matriz_campo[i][j+1].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i][j+2].valor=jogo->jogador_1->tabuleiro.matriz_campo[i][j+2].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i][j+3].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+2].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+3].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+2][j].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+1].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+1].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+2].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+2].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+3].valor=valor;


    }
    else if(orientacao==3)
    {
        jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i][j+1].valor=jogo->jogador_1->tabuleiro.matriz_campo[i][j+1].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i][j+2].valor=jogo->jogador_1->tabuleiro.matriz_campo[i][j+2].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i][j+3].valor=jogo->jogador_1->tabuleiro.matriz_campo[i][j+3].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+1].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+2].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+1][j+3].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j].valor=valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+1].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+1].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+2].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+2].valor;
        jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+3].valor=jogo->jogador_1->tabuleiro.matriz_campo[i+2][j+3].valor;


    }
}
void P_Sub(int id, int valor, int orientacao, int linha, int coluna,Game*jogo)
{
    int i,j;
    i=linha;
    j=coluna;
    if(orientacao==3||orientacao==2)
    {
        for(j=coluna; j<coluna+4; j++)
        {
            jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor=valor;
        }

    }
    else if(orientacao==0||orientacao==1)
    {

        for(i=linha; i<linha+4; i++)
        {
            jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor=valor;
        }

    }

}
void P_Porta_A(int id, int valor, int orientacao, int linha, int coluna,Game*jogo)
{
    int i,j;
    if(orientacao==3||orientacao==2)
    {
        i=linha;
        j=coluna;
        for(i=linha; i<linha+2; i++)
        {
            for(j=coluna; j<coluna+5; j++)
            {
                jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor=valor;
            }
        }
    }
    else if(orientacao==0||orientacao==1)
    {
        i=linha;
        j=coluna;
        for(i=linha; i<linha+5; i++)
        {
            for(j=coluna; j<coluna+2; j++)
            {

                jogo->jogador_1->tabuleiro.matriz_campo[i][j].valor=valor;
            }
        }
    }

}

