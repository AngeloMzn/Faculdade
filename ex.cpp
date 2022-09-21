#include <stdio.h>

#define MAX 100

int remove(int n, int v[MAX], int k){

	for(int i = k; i < n-1; i++){

		v[i] = v[i+1]; 

	}

	return n-1;
}

int main(){

	int n, k, v[MAX], resposta;

	printf("tamanho vetor: \n");
	
	scanf("%d", &n);

	for(int i = 0; i < n; i++ ){

		printf("digite a posição %d: \n", i);
		
		scanf("%d", &v[i]);

	}
	
	printf("digite k: \n");

	scanf("%d", &k);

	resposta = remove(n, v, k);

	printf("%d\n", resposta);

	for(int i = 0; i < resposta; i++){

		printf("%d\n", v[i]);

	}

}