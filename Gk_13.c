#include <stdio.h>

int main(){

    int BISPO_MOV = 5;
    int TORRE_MOV = 5;
    int RAINHA_MOV = 8;

    printf("=== Dessafio de Xadrez ===\n\n");

    printf("Movimentos do bispo:\n");
    for(int i = 0; i < BISPO_MOV; i++) {
    printf("cima\n");
    printf("direita\n");

    }
    printf("\n");

    printf("Movimentos da torre:\n");
    int Torre5 = 0;

    while (Torre5 < TORRE_MOV) {
        printf("Direita\n");
        Torre5++;
    }
    printf("\n");

    printf("Movimentos da Rainha:\n");
    int rainha8 = 0;

    do{
        printf("Esquerda\n");
        rainha8++;
    }while (rainha8 < RAINHA_MOV);
    printf("\n");   

    printf("Fim dos movimentos...\n");





    return 0;

}