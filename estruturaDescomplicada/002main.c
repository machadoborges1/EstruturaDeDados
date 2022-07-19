#include<stdlib.h>
#include<stdio.h>
#include"002ModularizacaoTAD.h"

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