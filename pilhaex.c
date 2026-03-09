#include <stdio.h>
#include <stdlib.h>

#define PILHATAMANHO 20

typedef struct Pilha{
    int vetor [PILHATAMANHO];
    int topo;
}Pilha;

//funcao para empilhar e dizer se está cheia

void empilha (valor, Pilha *pilha){
    //verificacao de espaco
    if(topo < PILHATAMANHO){
         //empilhar
    pilha -> vetor[pilha -> topo] = valor;
    pilha -> topo++;
        
    }else{
        printf("Não há mais espaço na pilha")
    }
    
}

//funcao de desempilhar

void desempilha(Pilha *pilha){
    if(pilha -> topo > 0){
        pilha -> topo --;
        printf("Elemento retirado: %d\n", pilha -> veot[pilha -> topo]);
    }else{
        printf("PIlha vazia");
    }
}

int main(){
    
    //declaração da pilha
    Pilha p;
    p.topo = 0;

    //empilha o numero 50

    p.vetor[p.topo] = 50;
    p.topo ++;


    //desempilha

    p.topo --;
    printf("Elemento retirado da pilha %d \n", p.pilha[p.topo]);

    return 0;
}
