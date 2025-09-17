#include <stdio.h>

int main(){

    int index;

    char * nomesAlunos[3][3] = {
        {"Aluno 0", "Pt: 30", "Mnt: 90"},
        {"Aluno 1", "Pt: 60", "Mnt: 60"},
        {"Aluno 2", "Pt: 90", "Mnt: 30"}
    };
    printf("Digite o nome do aluno que queira ver as notas...\n");
    printf("Para o aluno 0, digite 0\n");
    printf("Para o aluno 1, digite 1\n");
    printf("Para o aluno 2, digite 2\n");

    scanf("%d", &index);
    printf("A nota do %s sao: %s, %s... \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);

    return 0;


}