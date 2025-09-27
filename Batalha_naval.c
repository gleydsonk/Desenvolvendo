#include <stdio.h>

int main(){

    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    // 1. Criando Tabuleiro (Matriz 10x10)
    int tabuleiro[10][10];

    // 2. Inicializando Tabuleiro com 0
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    // 3. Imprimindo Tabuleiro
    printf("  0 1 2 3 4 5 6 7 8 9\n");
    for(int i=0; i<10; i++){
        printf("%c ", linha[i]);
        for(int j=0; j<10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }       



    return 0;

}