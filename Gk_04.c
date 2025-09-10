#include <stdio.h>

int main() {

    int numero;

    do {
        
        printf("Digite um numero para para sair do progama:");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            printf("%d, e par!\n", numero);
        } else {
            printf("%d, e impar\n", numero);
        }

    } while (numero % 2 != 0);
    printf("Voce digitou um numero par, saindo do progama...");
    return 0;



}