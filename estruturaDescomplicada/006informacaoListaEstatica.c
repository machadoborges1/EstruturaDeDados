int tamanho(Lista* li){
    if(li == NULL)
        return -1;
    else
        return li->qtd;
}

int listaCheia(Lista* li){
    if(li == NULL)
        return -1;
    return(li->qtd == MAX);
}

int listaVazia(Lista* li){
    if(li == NULL)
        return -1;
    return(li->qtd == 0);
}

main(){
    tamnaho(li);

    int x = listaCheia(li);
    if (listaCheia(li));
    
    int x = listaVazia(li);
    if (listaVazia(li));
    
}
    