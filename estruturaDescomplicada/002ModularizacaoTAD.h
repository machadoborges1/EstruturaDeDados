typedef struct ponto Ponto;

Ponto* cria(float x, float y); // equivale ao fopen()

void libera(Ponto* p); // equivalente ao fclose
void acessa(Ponto* p, float x, float y);
void atrubui(Ponto* p, float x, float y);
float distancia(Ponto* p1, Ponto* p2);
