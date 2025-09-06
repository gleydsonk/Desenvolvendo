#include <stdio.h>

    int main(){
    // ()[]              esquerda para direita
    // ! - ++ --         direita para esquerda
    // * / %             esquerda para direita
    // + -               esquerda para direita
    // < <= > >=         esquerda para direita
    // == !=             esquerda para direita
    // &&                esquerda para direita
    // ||                esquerda para direita
    // = += -= *= /= %=  direita para esquerda
    // ,                 esquerda para direita
        int a = 5;
        int b = -10;
        int c = 1;

        // a > 0 => Verdadeiro
        // b < 0 => Verdadeiro
        // Verdadeiro && Verdadeiro => Verdadeiro
        // Verdadeiro || c == 0
        // Verdadeiro || Flso => Verdadeiro

        if (a > 0 && b < 0 || c == 0) {
            printf("A condicao e verdadeira\n");
        } else {
            printf("A condicao e falsa\n");
        }


}