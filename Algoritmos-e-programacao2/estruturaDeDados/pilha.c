#include <stdio.h>
#include <stdlib.h>
struct no{
    int info;
    struct no prox;
};
typedef struct no No;
struct pilha{
    No *inicio;
    int n;
};
typedef struct pilha Pilha;
Pilha iniciaPilha(){
    Pilha *pilha = (Pilha*)malloc(sizeof(Pilha));
    pilha->inicio = NULL;
    pilha->n = 0;
    return pilha;
}
void push(Pilha *pilha, int newInfo){
    No *novo = (No*)malloc(sizeof(No));
    novo->info = newInfo;
    novo->prox = pilha->inicio;
    pilha->inicio = novo;
    pilha->n++;
}
void pop(Pilha *pilha){
    int info = pilha->inicio->info;
    No *no = pilha->inicio;
    pilha->inicio = pilha->inicio->prox;
    pilha->n--;
    free(no);
    return info;
}
void libera(Pilha* pilha){
    No* aux = pilha->inicio;
    while(p != NULL){
        No *proximo = aux->prox;
        free(aux);
        aux = proximo; 
    }
    free(pilha);
}
void imprimePilha(Pilha *pilha){
    No *aux = pilha->inicio;
    while(aux->prox != NULL){
        printf("%d\n", aux->info);
        aux = aux->prox;
    }
}