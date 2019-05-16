#ifndef CELULA_H_INCLUDED
#define CELULA_H_INCLUDED
typedef struct CELULA
{
    int visivel;
    char valor;
    char mascara;

}Celula;
Celula* Cria_cell();
void Destroi_cell(Celula*celula);




#endif // CELULA_H_INCLUDED
