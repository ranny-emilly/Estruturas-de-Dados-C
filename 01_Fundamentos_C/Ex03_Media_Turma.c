/*Crie um sistema que peça quantas notas o professor quer digitar. Depois, peça cada nota, calcule a média e diga se a turma foi aprovada.
Fluxo do programa:
Pergunte: "Quantos alunos tem na turma?".
Use um loop (for ou while) para pedir a nota de cada aluno (ex: "Digite a nota do aluno 1: ...").
Vá somando essas notas numa variável acumuladora.
No final, calcule a média da turma.
Pergunte: "Deseja calcular outra turma? (s/n)". Se digitar 's', o programa reinicia (Loop do-while global).*/

#include <stdio.h>

int main(){
    int alunos, i;
    float nota, media, soma;
    char outra;

    do {
        i = 0;   
        soma = 0;

        printf("Quantos alunos tem na turma?\n");
        scanf("%d", &alunos);

        while(i < alunos){
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &nota);
        soma += nota;
        i++;
        }

    media = soma/alunos;
    printf("Soma = %.2f / %d alunos = %.2f\n", soma, alunos, media);
    
    if (media >= 7.0) {
            printf("Situacao: Turma APROVADA!\n");
        } else {
            printf("Situacao: Turma Reprovada.\n");
        }

    printf("Deseja calcular outra turma? (s/n)\n");
    scanf(" %c", &outra);

    if(outra == 'n'){
        printf("Programa encerrado.");
    }

    } while (outra == 's');


    return 0;
}