#include <stdio.h>

int maxFator(int numero){

	int i, maiorFator, numero;

	for(i = 0; i < numero; i++){

		if (numero % i == 0){

			maiorFator = i;

		}

	}

	return  maiorFator;

}

int main(){

	int numero, maiorFator;

	scanf("%d", &numero);

	maiorFator = maxFator(numero);

	printf("%d %d", numero, maiorFator);

}