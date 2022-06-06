// Implementando uma lista Sequencial Estatica 
/* listaSequencial.c
    - o tipo de dados "lista"
    - implementar as suas funções.
*/
#include "005.h"
struct lista{
    int qtd;
    struct aluno dados[MAX];
};

Lista* cria(){
    Lista *li;
    li = (Lista*) malloc(sizeof(struct lista));
    if(li != NULL) 
        li->qtd = 0;
    return li;
}

void libera(Lista* li){
    free(li);
}
int main(){
    Lista *li; //file*
    li = cria();
}