#include <stdio.h>

#define TAM 100

void crescente(int v[TAM], int tam){

	int i, cont;
	
	cont = 0;

	for(i = 0; i < tam - 1; i++){

		if(v[i] >= v[i+1]){
            
            cont = 1;

		}
	    
	}
    if(cont == 1){
        
        printf("falso");
        
    }
    else{
        
        printf("verdadeiro");
        
    }
    
    cont = 0;
    
}

int main(){

	int tam, i;

	scanf("%d", &tam);

	int L[TAM];

	for(i = 0; i < tam; i++){

		scanf("%d", &L[i]);

	}

	crescente(L, tam);

}