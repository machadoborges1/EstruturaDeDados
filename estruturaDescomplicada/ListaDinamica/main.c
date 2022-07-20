
int main(void) {

    // li é um ponteiro para ponteiro, aponta para struct elemento* Lista em "listaDinEncad.h" 
    Lista *li; // guarda o endereço de um ponteiro

    li = cria_lista();

    libera_lista(li);

    int x = tamanho_lista(li);

    int x = lista_cheia(li);
    // modo de usar
    if(lista_cheia(li));
    
    int x = lista_vazia(Lista* li);
    if(lista_vazia(li));

    int x = insere_lista_inicio(li, dados_aluno);

    return 0;
}