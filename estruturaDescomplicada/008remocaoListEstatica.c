main(){
    int x = removeFinal(li);
    int x = removeInicio(li);
}

int removeFinal(Lista* li){
    if(li == NULL)
        return 0;
    if(li->qtd == 0)
        return 0;
    li->qtd--;
    return 1;

    // 12 13 14 17|
    // 12 13 14 |17
}

int removeInicio(Lista* li){
    if(li == NULL)
        return 0;
    if(li-qtd == 0)
        return 0;
    for(int k=0; k< li->qtd-1; k++){
        li->dados[k] = li->dados[k+1];
    }
    li->qtd--;
    return 1;

    // 12 33 23 16|
    // 33 23 16 |16
}

int 