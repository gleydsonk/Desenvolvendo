#include <stdio.h>

int main (){
    /*Se a 'idade' for 18 ou mais, o progama imprime 'Voce e maior de idade'
    No nosso exemplo, 20 e maior que 18, entao a mensagem sera exibida*/

    int idade = 20;

    if(idade >= 18){
        printf("Voce e maior de idade\n");
        printf("Dentro IF\n");
    }
         printf("Fara IF\n");
}