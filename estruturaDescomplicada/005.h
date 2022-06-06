/*ListaSequencial.h
    - os protótipos das funçoes
    - o tipo de dado armazenado na lista
    - tamanho do vetor usado na lista
*/

#define MAX 100
struct  aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};
typedef struct  lista Lista;

Lista* cria(); // equivalente fopen()

void libera(Lista* li); //fclose()
