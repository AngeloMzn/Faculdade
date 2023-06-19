#include <stdio.h>
#include <stdlib.h>
struct no{
    int info;
    struct no *prox;
};
typedef struct no No;
struct fila{
    No *inicio;
    No *fim;
    int n;
};
typedef struct fila Fila;
Fila* inicializa(){
    No *fila = (No*)malloc(sizeof(No));
    fila->inicio = NULL;
    fila->fim = NULL;
    n = 0; 
    return fila;
}
void insere(Fila *fila, int newInfo){
    No *novo = (No*)malloc(sizeof(No));
    novo->info = newInfo;
    novo->prox = NULL;
   if(fila->fim != NULL){
        fila->fim->prox = novo;
   }
   fila->fim = novo;
   if(fila->inicio == NULL){
    fila->inicio = novo;
   }
   fila->n++;
}
int remove(Fila *fila){
    if(fila->inicio == NULL){
        printf("fila vazia\n");
        return -1;
    }
    int info = fila->inicio->info;
    No *aux = fila->inicio->prox;
    free(lista->inicio);
    lista->inicio = aux;
    if(fila->inicio = NULL)
        fila->fim = NULL;
    fila->n--;
    return info;
}
void libera(Fila *fila){
    No *aux = fila->inicio;
    while(aux!=NULL){
        No *prox = aux->prox;
        free(aux);
        aux = prox;
    }
    free(fila);
}