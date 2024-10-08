#include <stdio.h>


int main (){ 
 
    int M[3][3];
    int linha, coluna;

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("---ADICIONE O NUMERO DA LINHA %d E COLUNHA %d: ", linha, coluna);
            scanf(" %d", &M[linha][coluna]);
        }
    }

    int det;

    det += M[0][0]*M[1][1]*M[2][2];
    det += M[0][1]*M[1][2]*M[2][0];
    det += M[0][2]*M[1][0]*M[2][1];
    det -= M[0][2]*M[1][1]*M[2][0];
    det -=M[0][1]*M[1][0]*M[2][2];
    det -=M[0][0]*M[1][2]*M[2][1];
    
    printf("%d", det);
    
}