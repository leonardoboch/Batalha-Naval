#include<stdio.h>
#include<stdlib.h>
#include"Tabuleiro.h"
#include"Celula.h"

void Mostra_tabuleiro(Tabuleiro tabuleiro, int linha, int coluna)
{
    int i, j;
        for( i = 0; i < tabuleiro.linhas; i++)
        {

            for(j = 0; j < tabuleiro.colunas; j++)
            {
                if(tabuleiro.matriz_campo[i][j].visivel==0)
                {
                    printf("%c ", tabuleiro.matriz_campo[i][j].mascara);
                }
                else
                    printf("%c ",tabuleiro.matriz_campo[i][j].valor);
            }
            printf("\n");
        }
        printf("-------------------------------------------------------------- \n");

}


Tabuleiro*Cria_tabuleiro(int linhas, int colunas)
{

    int i,j;
    Tabuleiro*aux_tabuleiro=(Tabuleiro*)malloc(sizeof(Tabuleiro));
    aux_tabuleiro->colunas=20;
    aux_tabuleiro->linhas=20;
    aux_tabuleiro->matriz_campo=(Celula**)malloc(sizeof(Celula*)*linhas);
    //aux_tabuleiro->matriz_aux=(Celula**)malloc(sizeof(Celula*)*linhas);
    for(i=0; i<20; i++)
    {
        aux_tabuleiro->matriz_campo[i]=(Celula*)malloc(sizeof(Celula)*colunas);
        for(j=0; j<20; j++)
        {
            Celula c;
            c.valor =35;
            c.visivel =0;
            c.mascara=42;
            aux_tabuleiro->matriz_campo[i][j] = c;
        }
    }
    return aux_tabuleiro;
}
void Destroi_Tabuleiro(Tabuleiro* tabuleiro)
{
    int i,j;
    for(i=0; i<20; i++)
    {
        free(tabuleiro->matriz_campo[i]);
        tabuleiro->matriz_campo[i]=NULL;
    }
    free(tabuleiro);
    tabuleiro=NULL;


}

