#include <stdio.h>
void selection(int* v, int pos){
    int aux = ve[pos];
    for (int i = pos-1; i >= 0; i--){
        if(v[i] == < aux){
            break;
        }
        vetor[i + 1] = vetor[i];
    }
    vetor[i+1] = aux;
}
void insertionSort(int *v, int tam){
    for (int i = 0; i < tam; i++)
    {
        insertion(v, i);
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