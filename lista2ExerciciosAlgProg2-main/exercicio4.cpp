/*

Se A e B são duas matrizes m x n, 
de elementos de um determinado tipo, 
sua soma é definida como segue: Se aij e bij são os elementos da entrada da i-ésima linha e j-ésima coluna de A e B,
então ai,j + bi,j é a entrada da i-ésima linha e j-ésima coluna da soma de A e B, a qual também é uma m x n matriz. 
Projete e implemente um programa para ler duas m x n matrizes, 0 < m,n <= 100 de inteiros, 
calcular a sua soma, a matriz C, e imprimir C, onde cada elemento da matriz C, cij é dado por:

cij = aij + bij

A declaração das matrizes podem ser feitas como abaixo: 

-declaração das variáveis locais

int a[100][100], b[100][100], c[100][100];

A entrada é dada por um bloco de duas linhas, 
a primeira com dois números inteiros m, n indicando as dimensões da matriz e a segunda linha com os elementos da matriz.

A saída é dada pelo matriz soma para cada par de matrizes da entrada, 
impressa linha a linha. Ao final deve ser impressa uma linha em branco.

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

	int B[100][100];

	for(i = 0; i < m; i++){

		for(j = 0; j < n; j++){

			scanf("%d", &B[i][j]);

		}

	}

	int C[100][100];

	for(i = 0; i < m; i++){

		for(j = 0; j < n; j++){

			C[i][j] = A[i][j] + B[i][j];
			
			printf("%d ", C[i][j]);
		}

		printf("\n");

	}

}