#include <stdio.h>

int main(){

    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    // 1. Criando Tabuleiro (Matriz 10x10)
    int tabuleiro[10][10];
    int Navio_3 = 3; // Tamanho do Navio
    int true = 1; // Condicao para o loop infinito
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

    while (true) {
        int linha, coluna;
        printf("Digite a linha (0-9): ");
        scanf("%d", &linha);
        printf("Digite a coluna (0-9): ");
        scanf("%d", &coluna);

        if (linha < 0 || linha >= 10 || coluna < 0 || coluna >= 10) {
            printf("Coordenadas invalidas. Tente novamente.\n");
            continue;
        }

        if (tabuleiro[linha][coluna] == 1) {
            printf("Voce ja atirou nessa posicao. Tente novamente.\n");
            continue;
        }

        tabuleiro[linha][coluna] = 1; // Marca o tiro no tabuleiro

        // Verifica se acertou o navio
        if (linha == 2 && coluna >= 3 && coluna < 3 + Navio_3) {
            printf("Acertou!\n");
        } else {
            printf("Errou!\n");
        }

        
    }                               
    return 0;   
}