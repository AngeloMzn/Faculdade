/*

Seja A uma matriz m x n, 
de elementos de um determinado tipo, 
e B um vetor n x 1, de elementos de um determinado tipo. 
A multiplicação A x B é a matriz C, m x 1 tal que c[j] = ∑a[i][j]∗b[j] para 0 <= i < m e 0 <= j < n.  
Projete e implemente um programa em C/C++ para ler as dimensões m, n, a matriz A, m x n, e o vetor M, n x 1. 
Considere que os elementos da matriz e do vetor são inteiros. 
Além disso, considere que m e n são menores ou iguais a 10.

A entrada é dada por um bloco de três linhas, 
a primeira com dois números inteiros m n indicando as dimensões da matriz e 
a segunda linha com os elementos da matriz A e a terceira linha os elementos do vetor n x 1. 
A saída é dada pelo vetor C, em uma única linha.

*/

#include <stdio.h>

int main(){

	int m, n, i, j;

	scanf("%d %d", &m, &n);

	int A[100][100];

	for(i = 0; i < m; i++){

		for(j = 0; j < n; j++){

			scanf("%d", &A[i][j]);

		}

	}

	int B[100]; 

	for(i = 0; i < n; i++){

		scanf("%d", &B[i]);

	}

	int C[100], soma;

	soma = 0;

	for(i = 0; i < m; i++){

		for(j = 0; j < n; j++){

			soma = (A[i][j] * B[j]) + soma;

		}

		C[i] = soma;
		
		soma = 0;

	}

	for(i = 0; i < m; i++){

		printf("%d ", C[i]);

	}

}