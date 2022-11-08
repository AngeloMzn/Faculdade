/*

Projete e implemente um programa que leia um vetor L de números inteiros e imprima true 
se o primeiro elemento de L for maior que todos os outros elementos de L, e false caso contrário.

A entrada é dada por duas linhas. 
A primeira linha contém um número inteiro tam indicando o tamanho do vetor, 
e a segunda linha contém tam números inteiros (vetor). 
A saída consiste em imprimir true se o primeiro elemento do vetor 
é maior que todos os demais elementos do vetor e false caso contrário.

*/

#include <stdio.h>

int main(){
    
    int tam, teste;

    scanf("%d", &tam);

    teste = 0;
    
    int L[tam], i;
    
    for (i = 0; i < tam; i++){

        scanf("%d", &L[i]);

    } 

    for (i = 1; i < tam; i++){

        if(L[0] > L[i]){

        teste++;

        }
    }

    if (teste == tam-1){

        printf("true");
    
    }

    else{

        printf("false");
    
    }
    
}