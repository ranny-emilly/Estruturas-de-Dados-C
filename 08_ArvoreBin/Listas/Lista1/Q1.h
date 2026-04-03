#ifndef Q1_H
#define Q1_H

typedef struct NO* ArvBin;

ArvBin* cria_ArvBin();

ArvBin* insere_NO_ArvBin(ArvBin* raiz, int valor);


ArvBin* insere_NO_ArvBin_iterativo(ArvBin* raiz, int valor);

ArvBin* imprimeArvore(struct NO* raiz, int nivel);

int contarFolhas(struct NO* raiz);

#endif