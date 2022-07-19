// protótipos das funções, tipos de ponteiro, e dados globalmente acessível

//apelido para a struct ponto
typedef struct ponto Ponto;

// Cria um novo ponto - semelhante ao fopen(), porque devolve um ponteiro
Ponto* cria(float x, float y); // equivale ao fopen()

void libera(Ponto* p); // equivalente ao fclose
void acessa(Ponto* p, float x, float y);
void atrubui(Ponto* p, float x, float y);
float distancia(Ponto* p1, Ponto* p2);
