#include <stdio.h>
#include <stdlib.h>

/* Malloc (Memory Allocation)
   Retorna um ponteiro para a região de memória alocada ou NULL se falhar.
   Diferença pro Calloc: O Malloc NÃO limpa a memória (traz lixo de memória). */

int main()
{
    //Alocando um único inteiro
    int *x;
    
    // Aloca bytes suficientes para 1 inteiro
    x = (int *) malloc(sizeof(int));
    
    if(x){
        printf("Memoria para x alocada com sucesso!\n");
    }else{
        printf("Erro ao alocar memoria!\n");
        return 1; // Encerra se der erro
    }

    // Atribuir um valor ao conteúdo apontado por x
    // Nota: Antes de atribuir, *x contem lixo de memoria
    *x = 50;
    printf("Valor de x: %d\n", *x);

    // LIBERAR MEMÓRIA DE X:
    free(x);
    x = NULL; // Boa prática: anular o ponteiro após liberar para evitar bugs
    
    printf("\n-------------------------\n");

    // Alocando um Vetor Dinâmico
    /* Cria um vetor de 5 inteiros. 
    O conteudo inicial é garbage (lixo de memoria) */
    
    printf("Alocando vetor 'v' de 5 posicoes com Malloc...\n");
    int *v = (int *) malloc(5 * sizeof(int));
    
    if (v == NULL){
        printf("Erro ao alocar memoria para vetor\n");
        return 1;
    }
    
    
    printf("Valores iniciais (Lixo de Memoria):\n");
    for(int i=0; i<5; i++){
        printf("%d ", v[i]); // Provavelmente imprimirá números aleatórios grandes
    }
    printf("\n");
    
    // Preenchendo o vetor corretamente
    for(int i=0; i<5; i++){
        v[i] = (i + 1) * 10; // 10, 20, 30...
    }
    
    printf("Valores atribuidos:\n");
    for(int i=0; i<5; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    // Liberar memória do vetor
    free(v);
    v = NULL; 

    return 0; // Fim do programa
}