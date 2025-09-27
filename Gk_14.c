#include <stdio.h>

int main(void){

    int i;
    printf("F = ");
    scanf("%d", &i);


    switch (i)
    {
            case 0:
            printf("Maca");
            break;

        case 10: 
            printf("Laranja");
            break;

        case 20:
            printf("Banana");
            break;
        case 30:
            printf("Melancia");
            break;
        case 40:
            printf("Uva");
            break;    

        default:
            printf("Caju");             
    }
}





