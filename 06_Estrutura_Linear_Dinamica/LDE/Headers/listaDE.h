#ifndef LISTADE_H
#define LISTADE_H
#include <stdbool.h>

typedef struct NoDuplo{
    int dado;
    struct NoDuplo *prox;
    struct NoDuplo *ant;
}NoDuplo;

void ld_inserir_inicio(NoDuplo **cabeca, int valor);
void ld_inserir_fim(NoDuplo **cabeca, int valor);
NoDuplo *ld_buscar(NoDuplo *cabeca, int valor);
bool ld_atualizar_primeiro(NoDuplo *cabeca, int antigo, int novo);
bool ld_remover_valor(NoDuplo **cabeca, int valor);



#endif 

