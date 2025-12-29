// Bubble Sort - Ordenação e comparação
// Não é rápido e eficiente. Funciona bem para vetores menores.
// Complexidade: O(n²)
// Este código é apenas para fins de estudo (não executável)
// Resumo sobre variações do algoritmo Bubble Sort

#include <stdio.h>
#include <stdlib.h>

// 1: Percorre todo o vetor (menos eficiente)
for (j = 0; j < n; j++) {
    for (i = 0; i < n - 1; i++) {
        if (vet[i] > vet[i + 1]) {
            int aux = vet[i];
            vet[i] = vet[i + 1];
            vet[i + 1] = aux;
        }
    }
}

//2: Percorre enquanto houver trocas
int troca = 1;
while (troca) {
    troca = 0;
    for (i = 0; i < n - 1; i++) {
        if (vet[i] > vet[i + 1]) {
            int aux = vet[i];
            vet[i] = vet[i + 1];
            vet[i + 1] = aux;
            troca = 1;
        }
    }
}

// 3: Percorre enquanto houver trocas e diminui n
troca = 1;
while (troca) {
    troca = 0;
    for (i = 0; i < n - 1; i++) {
        if (vet[i] > vet[i + 1]) {
            int aux = vet[i];
            vet[i] = vet[i + 1];
            vet[i + 1] = aux;
            troca = 1;
        }
    }
    n--; // Não precisa verificar as últimas posições já ordenadas
}

// 4: Recursiva
// n não pode ser < 2
void bubble(int *v, int n) {
    if (n < 2) return;
    for (i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            int aux = v[i];
            v[i] = v[i + 1];
            v[i + 1] = aux;
        }
    }
    bubble(v, n - 1);
}

