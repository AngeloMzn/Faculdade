#include <stdio.h>
typedef struct {
    int linha;
    int coluna;
}indice;
indice buscaMat(int mat[5][4], int linha, int coluna, int n){
    int linha, coluna;
    indice indice;
    indice.linha = indice.coluna = -1;
    for(coluna = 0; coluna< n; coluna++){
        if (elem == mat[0][col])
        {
            indice.linha = 0;
            indice.coluna = col;
        }
        return indice;
    }else if(elem < mat[0][coluna]) break;
    if(coluna == n) return indice;
    for(linha = 0; linha< n; linha++){
        if (elem == mat[linha][coluna])
        {
            indice.linha = linha;
            indice.coluna = coluna;
        }
        return indice;
    }
    return indice;
}
