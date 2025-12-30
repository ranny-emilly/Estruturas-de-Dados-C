/*Crie um vetor: int vet[5] = {10, 20, 30, 40, 50};.
Crie um ponteiro int *p = vet;.
Faça um loop for de 0 a 4.
Desafio: Imprima os valores usando apenas o ponteiro p e aritmética (soma), sem usar colchetes vet[i].
Dica: Use *(p + i).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int vet[5] = {10, 20, 30, 40, 50};
    int soma = 0;
    int *p = vet;

    for(int i = 0; i <= 4; i++){
        printf("elemento %d: %d\n", i, *(p+i));
        soma += *(p+i);
    }

    printf("A soma do vetor e: %d ", soma);



    return 0;
}