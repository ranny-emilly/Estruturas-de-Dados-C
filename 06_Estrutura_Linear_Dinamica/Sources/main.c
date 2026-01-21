#include <stdio.h>
#include <stdlib.h>
#include "ListaSE.h"

int main(){

    NoSimples *lista = NULL;

    ls_inserir_inicio(&lista, 10);
    ls_inserir_fim(&lista, 51);
    ls_inserir_fim(&lista, 20);
    ls_inserir_inicio(&lista, 30);
    ls_exibir(lista);
    
    int x = 20;
    NoSimples *achado = ls_buscar(lista, x);
    printf("\nBusca por %d: %s\n", x, achado ? "encontrado" : "nao encontrado");

    if(ls_atualizar_primeiro(lista, 20, 50)){
        printf("\nAtualizado");
        ls_exibir(lista);
    }

    if(ls_remover_valor(lista, 30)){
        printf("\nRemovido");
        ls_remover_valor(lista);
    }

    ls_limpar(&lista){
        printf("\n\n\n\n");
        ls_exibir(lista);

    }

    return 0;
}