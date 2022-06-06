#include <stdio.h>
#include "002ModularizacaoTAD.h"

struct ponto
{
    float x;
    float y;
};

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

void acessa(Ponto* p, float* x, float* y){
    *x = p->x;
    *y = p->y;
}

void atribui(Ponto* p, float x, float y){
    p->y = y;
    p->x = x;
}

float distancia(Ponto* p1, Ponto* p2){
    float dx = p1->x - p2->y;
    float dy = p1->y - p2->y;
    return sqrt(dx*dx + dy*dy);
}

int main(){
    float d;
    Ponto *p, *q;
    //Ponto r; //erro - Ponto agora é uma estrutura e só se declara ponteiro

    p = cria(10, 21);
    q = cria(7, 25);
    //g->x = 2; //erro

    d = distancia(p, q);
    printf("distancia: %f\n", d);
    libera(q);
    libera(p);

    return 0;
}