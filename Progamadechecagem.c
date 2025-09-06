#include <stdio.h>

int main(){

    float temperatura, umidade;
    unsigned int estoque, estoqueminimo = 1000;

    printf("Entre com a temperatura:\n");
    scanf("%f", &temperatura);
    printf("Entre com a unidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    if ( temperatura > 30){
    printf("Temperatura esta alta!\n");

    }else{
        printf("Temperatura esta dentro dos parametros.\n");
    }   
    if (umidade > 50){
        printf("Umidade elevada!\n");

    }else{
        printf("Umidade esta dentro dos parametros.\n");

    }
    if (estoque < estoqueminimo){
        printf("Estoque a baixo do minimo!\n");
    }else{
        printf("Estoque normal.\n");

    }

}