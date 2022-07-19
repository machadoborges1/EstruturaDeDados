// Declaração do tipo de dados e implementação das suas funções;

#include <stdlib.h>
#include <stdio.h>
#include "002ModularizacaoTAD.h"

// exemplo de TAD: arquivos em C -> FILE* f;
// fopen(), fclose(), fputc(), fgetc(), feof() ...

//definir a estrutura de dados
struct ponto
{
    float x;
    float y;
};

// implementa as funções
Ponto* cria(float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if(p != NULL){
        p->x = x;
        p->y = y;
    }
    return p;
}

void libera(Ponto* p){
    free(p);
}

//carrega os dois valores e devolve para os ponteiros
//copia os valores da estrutura para as referencias
void acessa(Ponto* p, float* x, float* y){
    *x = p->x;
    *y = p->y;
}

//contrario do acessa -> pega os valores passados por parametro e atribui ao y e x
void atribui(Ponto* p, float x, float y){
    p->y = y;
    p->x = x;
}

float distancia(Ponto* p1, Ponto* p2){
    float dx = p1->x - p2->y;
    float dy = p1->y - p2->y;
    return sqrt(dx*dx + dy*dy);
}
