#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_PILHA 10

typedef struct Pilha{
    int topo;
    int vetor[TAMANHO_PILHA];
}Pilha;

int main(){

    Pilha p;
    p.topo = -1;

    printf("Insira os 10 elementos na pilha: ");

    for(int i = 0; i < TAMANHO_PILHA; i++){
        if(p.topo == TAMANHO_PILHA - 1){
            printf("Pilha Cheia\n");
            break;
        }

        int valor;
        scanf("%d", &valor);
        p.topo++;

        p.vetor[p.topo] = valor;

      
    }
     for(int i = p.topo; i >= 0; i--){
            printf("%d\n", p.vetor[i]);
            
        }
     
   
    return 0;
}