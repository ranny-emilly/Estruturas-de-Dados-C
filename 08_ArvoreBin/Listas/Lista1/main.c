#include <stdio.h>
#include "Q1.h"

int main(){

    ArvBin* raiz = cria_ArvBin();

    insere_NO_ArvBin_iterativo(raiz, 40);
    insere_NO_ArvBin_iterativo(raiz, 20);
    insere_NO_ArvBin_iterativo(raiz, 60);
    insere_NO_ArvBin_iterativo(raiz, 10);
    insere_NO_ArvBin_iterativo(raiz, 30);
    insere_NO_ArvBin_iterativo(raiz, 50);
    insere_NO_ArvBin_iterativo(raiz, 70);

    printf("Pre-ordem: ");
    pre_Ordem(*raiz);

    printf("\nEm-ordem: ");
    em_Ordem(*raiz);

    printf("\nPos-ordem: ");
    pos_Ordem(*raiz);

    printf("\nQuantidade de folhas: %d\n", contarFolhas(*raiz));

    return 0;
}