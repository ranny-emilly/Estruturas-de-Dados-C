#include <stdio.h>
#include <stdlib.h>

/*Calloc - Precisa de mais de um parâmetro.
Recebe a quantidade de elementos e o tamanho de cada elemento.*/

int main()
{
    //Variáveis Simples 
    int *x;
    char *y;

    /*Recebe a quantidade de elementos e o tamanho do tipo*/
    y = (char*) calloc(1, sizeof(char));
    x = (int*) calloc(1, sizeof(int));
    
    if(x && y){
        printf("Memoria (x, y) alocada com sucesso\n");
    }else{
        printf("Erro ao alocar memoria!\n");
        return 1; // Encerra se der erro
    }

    // O Calloc inicia com ZERO.
    printf("Valor inicial (Calloc zera tudo): x = %d, y = %d\n", *x, *y);

    // Atribuir valor
    *x = 50;
    *y = 's';
    printf("Valor atribuido: x = %d, y = %c\n", *x, *y);
    
    // Liberando x e y pois não vamos mais usar
    free(x);
    free(y);
    
    printf("\n-------------------------\n");

    // Vetores e Realloc 

    /*Aloca 5 inteiros inicializados com zero*/
    printf("Alocando vetor 'v' de 5 posicoes com Calloc...\n");
    int *v = (int *) calloc(5, sizeof(int));

    if(v) {
        printf("Vetor criado. Verificando se esta zerado:\n");
        for(int i=0; i<5; i++){
            printf("%d ", v[i]); // Deve imprimir 0 0 0 0 0
        }
        printf("\n");
    }

    /*REALLOC: realoca um bloco de memória já existente.
    Utilizou malloc/calloc e chegou no limite? Usa realloc para aumentar.*/
    
    printf("\nAumentando vetor para 10 posicoes com Realloc...\n");
    
    // É boa prática usar uma variável temporária pro realloc
    int *temp = (int *) realloc(v, 10 * sizeof(int));
    
    if (temp != NULL) {
        v = temp; // Se deu certo, atualiza o ponteiro v
        printf("Sucesso! Vetor agora tem 10 posicoes (bytes totais: %lu).\n", 10 * sizeof(int));
    } else {
        printf("Erro no realloc!\n");
        free(v); // Libera o original se der erro
        return 1;
    }
    
    /*FREE: libera a memória alocada dinamicamente*/
    free(v);
    
    return 0; 