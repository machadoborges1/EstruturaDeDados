/*
    o tipo de dados "lista"
    implementar as suas funções
*/

struct elemento {
    struct aluno dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

Lista* cria_lista() {
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL) *li = NULL;
    return li;
}

void libera_lista(Lista* li) {
    if(li != NULL) {
        Elem* no; 
        while((*li) != NULL) {
            no = *li;
            *li = (*li) -> prox;
            free(no);
        } free(li);
    }
}

int tamanho_lista(Lista* li) {
    if(li == NULL) return 0;
    int cont = 0;
    Elem* no = *li; // criado um elemento auxiliar para percorrer e não perder o inicio da lista
    while (no != NULL){
        cont ++;
        no = no -> prox;
    }
    return cont;
}

// estrutura dinamica não faz sentido perguntar se a lista esta cheia ou não
int lista_cheia(Lista* li) { 
    return 0;
}

int lista_vazia(Lista* li) {
    if (li == NULL) return 1; // lista vazia
    if (*li == NULL) return 1; // conteudo da lista vazio
    return 0;
}

int insere_lista_inicio(Lista* li, struct aluno al) {
    if(li == NULL) return 0;
    Elem* no = (Elem*) mallac(sizeof(Elem));
    if(no == NULL) return 0;
    no -> dados = al;
    no -> prox = (*li);
    *li = no;
    return 1;
}
