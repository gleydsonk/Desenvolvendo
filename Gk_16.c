#include <stdio.h>
int main(){
    int vetor [5]; //Declaração do vetor 5 inteiros

    //Inicializacao do vetor usando uma estrutura de repeticao for
    for (int i = 0; i < 5; i++){
    vetor [i] = i * 2; //Atribuindo valores ao vetor
    }
    

    //Exibindo os elementos do vetor usando uma estrutura de repeticao for
    for (int i = 0; i < 5; i++){
    printf("vetor[%d] = %d\n", i, vetor[i]);
        
    }

    return 0;
}