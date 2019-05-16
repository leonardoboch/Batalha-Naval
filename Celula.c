#include<stdio.h>
#include<stdlib.h>
#include"Celula.h"
Celula*Cria_cell()
{
    Celula*celula=(Celula*)malloc(sizeof(Celula));
    celula->valor = 0;
    celula->visivel = 0;
    celula->mascara = 0;
    return celula;
}
void Destroi_cell(Celula*celula)
{
    free(celula);
    celula = NULL;
}

