#include<stdio.h>
#include<stdlib.h>
#include"Q1.h"

struct NO {
    int info;
    struct NO* esq;
    struct NO* dir;
};

ArvBin* cria_ArvBin(){
    ArvBin* raiz = malloc(sizeof(ArvBin));
    if(raiz != NULL){
        *raiz = NULL;
    }
    return raiz;
}


ArvBin* insere_NO_ArvBin(ArvBin* raiz, int valor){
    if (raiz == NULL){
        return NULL;
    }

    if (*raiz == NULL){
        struct NO* novo = malloc(sizeof(struct NO));

        if (novo == NULL){
            return NULL;
        }

        novo->info = valor;
        novo->esq = NULL;
        novo->dir = NULL;

        *raiz = novo;
        return raiz;
    }

    if (valor < (*raiz)->info){
        return insere_NO_ArvBin(&((*raiz)->esq), valor);
    } else {
        return insere_NO_ArvBin(&((*raiz)->dir), valor);
    }
}


ArvBin* insere_NO_ArvBin_iterativo(ArvBin* raiz, int valor){
    if (raiz == NULL){
        return NULL;
    }

    struct NO* novo = (struct NO*) malloc(sizeof(struct NO));
    if (novo == NULL){
        return NULL;
    }

    novo->info = valor;
    novo->esq = NULL;
    novo->dir = NULL;

    // árvore vazia
    if (*raiz == NULL){
        *raiz = novo;
        return raiz;
    }

    struct NO* atual = *raiz;
    struct NO* pai = NULL;

    while (atual != NULL){
        pai = atual;

        if (valor < atual->info){
            atual = atual->esq;
        } else {
            atual = atual->dir;
        }
    }

    if (valor < pai->info){
        pai->esq = novo;
    } else {
        pai->dir = novo;
    }

    return raiz;
}
void pre_Ordem(struct NO* raiz){
    if(raiz == NULL) return;

    printf("%d ", raiz->info);
    pre_Ordem(raiz->esq);
    pre_Ordem(raiz->dir);
}

void em_Ordem(struct NO* raiz){
    if(raiz == NULL) return;

    em_Ordem(raiz->esq);
    printf("%d ", raiz->info);
    em_Ordem(raiz->dir);
}

void pos_Ordem(struct NO* raiz){
    if(raiz == NULL) return;

    pos_Ordem(raiz->esq);
    pos_Ordem(raiz->dir);
    printf("%d ", raiz->info);
}



ArvBin* imprimeArvore(struct NO* raiz, int nivel){
    if(raiz == NULL){
        return 0;
    }

    imprimeArvore(raiz->dir, nivel + 1);

    for(int i = 0; i < nivel; i++)
        printf("    ");

    printf("%d\n", raiz->info);

    imprimeArvore(raiz->esq, nivel + 1);
}

int contarFolhas(struct NO* raiz){
    if (raiz == NULL){
        return 0;
    }

    
    if (raiz->esq == NULL && raiz->dir == NULL){
        return 1;
    }

    return contarFolhas(raiz->esq) + contarFolhas(raiz->dir);
}