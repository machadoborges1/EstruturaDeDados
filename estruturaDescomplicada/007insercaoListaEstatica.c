main(){
    int x = insereFinal(li, dados);
    int x = insereInicio(li, dados);
}

int insereFinal(Lista* li, Struct aluno al){
    if(li == NULL)
        return 0;
    if(listaCheia(li)) // lista == MAX -> se for ja retorna vazia
        return 0;
    li->dados[li-qtd] = al; //posição final+1 recebe valor
    li->qtd++;
    return 1;
}

// desloca todos uma posição à frente e insere no inicio
int insereInicio(Lista* li, Struct aluno al){
    if(li == NULL) return 0;
    if(listaCheia(li)) return 0;
    int i;
    for( i=li->qtd-1; i>=0; i--)
        li->dados[i+1] = li->dados[i]; //[i+1] é a posição da frente, que recebe dados da posição i
    li->dados[0] = al;
    li->qtd++;
    return 1;
}

int insereOrdenado(Lista* li, Struct aluno al){
    if(li == NULL) return 0;
    if(listaCheia(li)) return 0;

    int i = 0, k;
    //enquanto matricula na posição i for menor que al.matricula continua percorrendo i++
    while(i<li-qtd && li->dados[i].matricula < al.matricula) i++; 

    // encontrada a posição i que a al.matricula encaixa, então se desloca todas as posições à frente e insere na posição i o novo dado.
    for(k=li->qtd-1; k>=i; k--)
        li->dados[k+1] = li->dados[k];
    li->dados[i] = al;
    li->qtd++;
    return 1;
}