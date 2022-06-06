#include<stdio.h>

int main(){

    /*
    Forma nativa para estrutura de dados
    - corresponde à uma lista indexada de itens
    - O ultimo numero do elemento é fixo
    - um vetor não almenta ou diminui tamanho

    Pode ser alocado de duas formas
    - estaticamente => int v[100]
    - dinamicamente => int *v = malloc(100*sizeof(int))

    Acesso em tempo O(1)
    */

    //DADOS
    typedef struct{
        int *dados;
        int n;
    } vetor;
    
    //FUNÇÕES
    vetor* criar_vetor(int tam);
    void destruir_vetor(vetor *v);

    void adicionar_elemento(vetor *v, int x);
    void remover_elemento(vetor *v, int i);
    int buscar(vetor *v, int x);

    int acessor(vetor *v, int i);
    int tamanho(vetor *v);
    return 0;
}