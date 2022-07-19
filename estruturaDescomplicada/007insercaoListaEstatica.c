main(){
    int x = insereFinal(li, dados);
    int x = insereInicio(li, dados);
}

int insereFinal(Lista* li, Struct aluno al){
    if(li == NULL)
        return 0;
    if(listaCheia(li))
        return 0;
    li->dados[li-qtd] = al;
    li->qtd++;
    return 1;
}

int insereFinal(Lista* li, Struct aluno al){
    if(li == NULL)
        return 0;
    if(listaCheia(li))
        return 0;
    int i;
    for( i=li->qtd-1; i>=0; i--)
        li->dados[i+1] = li->dados[i];
    li->dados[0] = al;
    li->qtd++;
    return 1;
}

int insereOrdenado(Lista* li, Struct aluno al){
    if(li == NULL)
        return 0;
    if(listaCheia(li))
        return 0;
    int i = 0, k;
    while(i<li-qtd && li->dados[i].matricula < al.matricula)
        i++;
    for(k=li->qtd-1; k>=i; k--)
        li->dados[k+1] = li->dados[k];
    li->dados[i] = al;
    li->qtd++;
    return 1;
}