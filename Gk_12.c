#include <stdio.h>

// Constantes de movimentação
const int MOV_BISPO = 5;
const int MOV_TORRE = 5;
const int MOV_RAINHA = 8;

int main() {
    // Mensagem inicial
    printf("===== Nível Novato - MateCheck =====\n");

    // === Movimento do Bispo ===
    // Movimento: 5 casas na diagonal superior direita
    printf("\nMovimento do Bispo:\n");
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Diagonal: Cima + Direita\n");  // Combinação para diagonal
    }

    // === Movimento da Torre ===
    // Movimento: 5 casas para a direita
    printf("\nMovimento da Torre:\n");
    int i = 0;
    while (i < MOV_TORRE) {
        printf("Direita\n");
        i++;
    }

    // === Movimento da Rainha ===
    // Movimento: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < MOV_RAINHA);

    return 0;
}