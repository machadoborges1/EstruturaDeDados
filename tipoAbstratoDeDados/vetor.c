#include "vetor.h"
#include<stdio.h>
#include<stdlib.h>

vetor* criar_vetor(int tam){
    vetor *v;
    v = (vetor*) malloc(sizeof(vetor));
    //alocado na heap
    v -> dados = malloc(tam * sizeof(int));
    v -> n = 0;
    //endereço da variavel
    return v;
}

void destruir_vetor(vetor *v){
    free(v->dados);
    free(v);
}

void adicionar_elemento(vetor *v, int x){
    v->dados[v-n] = x;
    v->n++;
}

int busca(vetor *v, int x){
    int i;
    for(i = 0; i< v->n; i++)
        if(v->dados[i]==x) return i;
        return -1;
}
int acessar(vetor *v, int i){
    return v->dados[i];
}
int tamanho(vetor *v) {
    return v->n;
}