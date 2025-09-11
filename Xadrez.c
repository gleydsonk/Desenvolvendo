#include <stdio.h>

int main(){

    int bispo;

    printf("Movimento da torre!\n");
    // Mover a Torre 5 casas para a direita
    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n"); // Imprime a direcao do movimento
    }
        printf("Digite a movimentacao do Bispo: \n");
        scanf("%d", &bispo);
    while (bispo >= 1) {
        printf("movimentacao do Bispo para a direita: %d\n", bispo);
       
        printf("Digite um número (negativo para sair): \n");
        scanf("%d", &bispo);
    }
    

    return 0;
}