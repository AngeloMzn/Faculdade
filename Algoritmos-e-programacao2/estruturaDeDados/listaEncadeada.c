#include <stdio.h>
#include <stdlib.h>
Lista iniciarLista(){
    Lista *lista = (Lista*)malloc(sizeof(Lista));
    lista->inicio = NULL;
    lista->n = 0;
    return *lista;
}
void inserirInicio(Lista* lista, int newInfo){
    No* novo = (No*)malloc(sizeof(No));
    novo->info = newInfo;
    novo->prox = lista->inicio;
    lista->inicio = novo;
    lista->n++;
}
void imprimeLista(Lista *lista){
    No *aux = lista->inicio;
    while(aux != NULL){
        printf("%d", aux->info);
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
void remove(Lista*lista, int trash){
    No *aux = lista->inicio; // cria ponteiro auxiliar para percorrer a lista
    No *ant = NULL; //ponteiro auxiliar para obter o elemento anterior 
    while (aux->prox != NULL){  //while com condição de parada no fim da lista
        if(aux->info == trash)break; //condição de parada quando acha o elemento a ser removido
        ant = aux; // anterior recebe o valor atual
        aux = aux->prox; // atual recebe o proximo
    }
    if (aux==NULL)return; // verifica se o elemento foi encontrado
    if(ant==NULL) lista->inicio = aux->prox; //verifica se o elemento está no inicio da lista e torna o proximo elemento o inicio caso seja verdadeiro
    else ant->prox = aux->prox; // liga o elemento anterior ao proximo do atual para desencadea-lo
    free(aux); // desencadea o elemento atual
    lista->n--; // subtrai em 1 o tamanho da lista
} 
void insereOrdenado(Lista *lista, int newInfo){
    No *novo = (No*)malloc(sizeof(No));
    No *aux = lista->inicio;
    No *ant = NULL;

    while (aux->prox != NULL && aux->info < newInfo){
        ant = aux;
        aux = aux->prox;
    }
    if(ant==NULL){
        novo->prox = lista->inicio;
        lista->inicio = novo;
    }else{
        novo->prox = ant->prox;
        ant->prox = novo;
    }
}
int main(){}