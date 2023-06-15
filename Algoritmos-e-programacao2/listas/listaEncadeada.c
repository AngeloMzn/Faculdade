#include <stdio.h>
#include <stdlib.h>
struct no{
    int info;
    struct no *prox;
};
typedef struct no No;
struct lista
{
    No *inicio;
    int n;
};
typedef struct lista Lista;
*Lista iniciaLista(){
    Lista *lista = (Lista*)malloc(sizeof(Lista));
    lista->inicio = NULL;
    lista->n = 0;
    return lista;
}
void inserirInicio(Lista* lista, int newInfo){
    No* novo = (No*)malloc(sizeof(No));
    novo->info = newInfo;
    novo->prox = *lista;
    lista->inicio = novo;
    lista->n++;
}
void imprimeLista(Lista *lista){
    No *aux = lista->inicio;
    while(aux != NULL){
        printf("%d", p->info);
        aux = aux->prox;
    }
    printf("\n");
}
void busca(Lista *lista, int info){
    No *aux = lista->inicio;
    while (aux != NULL){
        if(aux->info == info) return aux; 
        aux = aux->prox;
    }
    return NULL;
}
int main(){}