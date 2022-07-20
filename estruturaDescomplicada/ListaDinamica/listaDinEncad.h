/*
    Os protótipos das Funções
    O tipo de dado armazenado na Lista
    O ponteiro "lista"
*/

// tipo de dado armazenado em Lista
struct aluno {
    int matricula;
    char nome[30];
    float n1,n2,n3;
};
// Lista é um ponteiro para struct elemento
typedef struct elemento* Lista; // guarda o endereço do tipo elemento

Lista* cria_lista();

void libera_lista(Lista* li);

int tamanha_lista(Lista* li);

int lista_cheia(Lista* li);

int lista_vazia(Lista* li);
