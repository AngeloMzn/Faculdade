#include <stdio.h>
int menor(int *V, int tam, int inicio){
    int i, indiceMenor = inicio;
    for(i = inicio+1; i < tam; i++){
        if(V[i] < V[indiceMenor])
            indiceMenor = i;
    }  
    return indiceMenor;
}
void selectionSort(int *V, int tam){
    int i, indice, temp;
    for(i = 0; i < tam; i++){
        indice = menor(V, tam, i);
        temp = V[i];
        V[i] = V[indice];
        V[indice] = temp;
    }
}
int main(){
    int vet[6] = {1, 7, 8, 6, 5, 10};
    selectionSort(vet, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d", vet[i]);
    }
}