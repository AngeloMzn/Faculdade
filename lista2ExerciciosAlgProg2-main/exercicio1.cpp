/*

exercício 1 :

Escreva um programa que leia um vetor L de 2 <= tam <= 100 números inteiros e verifique se os elementos do vetor estão em ordem crescente. 
O programa deverá imprimir verdadeiro se os elementos do vetor estiverem em ordem crescente ou falso caso contrário. 
Note que o seguinte predicado pode ser usado para descrever esta propriedade de L, 
caso os elementos de L estiverem em ordem crescente:
para todo i em {1,...,tam-1}: L[i] < L[i+1]}
A entrada é dada por um vetor de números inteiros, 
onde o primeiro elemento é um número tam indicando o tamanho do vetor, 
seguido de tam números inteiros.
A saída consiste em imprimir verdadeiro se o vetor está em ordem crescente e falso caso contrário

*/

#include <stdio.h>

int main(){

    int tam, i, verificador;

    verificador = 0;
    
    scanf("%d", &tam);

    int L[tam]; 

    for(i = 0; i < tam; i++){

        scanf("%d", &L[i]);

    }

    for(i = 0; i < tam-1; i++){
        
      if (L[i] >= L[i+1]){
        verificador = 1;
          
      }

    }
    if (verificador == 0){

        printf("verdadeiro");

        } 
    
    else{

        printf ("falso");

    }

}