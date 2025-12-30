/*Crie um vetor de inteiros com 10 posições.
Peça para o usuário digitar os 10 números.
Depois, peça para ele digitar um número X para buscar.
Percorra o vetor e diga: "O número X está na posição Y" ou "Número não encontrado".*/

#include <stdio.h>
#include <stdlib.h>

 int main(){

    int vet[10];
    int j = 0;


    for(int i = 0; i < 10; i++){
        printf("Digite o numero do indice %d:", i);
        scanf("%d", &vet[i]);
    }

    printf("Digite o numero que deseja buscar:\n");
    int x;
    scanf("%d", &x);

   while(j < 10 && x!= vet[j]){
        j++;
    }
        if (j < 10){
            printf("O numero %d esta no indice %d\n", x, j); 
                           
        }else{
            printf("Numero nao encontrado");

        }


    return 0;
 }