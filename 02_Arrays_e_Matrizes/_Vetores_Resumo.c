//Vetores - Arrays unidimensionais
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int num[n];
    
    for(int i = 0; i < n; i++){
        printf("digite o elemento da posicao %d: ", i);
        scanf("%d", &num[i]);
    }
    
    printf("\n--- Vetor Original ---\n");
    for(int i = 0; i < n; i++){
        printf("%d\t", num[i]);
    }
    
    printf("\n\n");
    
    //Aterando o conteúdo de um Vetor, neste caso, multiplicando os valores no índice i por 3.
    for (int i = 0; i < n; i++){
        num[i] = num[i] * 3;
    }
    
    printf("--- Vetor Multiplicado por 3 ---\n");
    for(int i = 0; i < n; i++){
        printf("%d\t", num[i]);
    }
    
    printf("\n\n");
    
    //Gerando números aleatórios para preencher um Vetor
    //Precisa incluir a biblioteca 'time.h', que, sincroniza com o time do pc, para alterar a "sead" constantemente e não gerar os mesmos números "aleatórios"
    printf("--- Vetor Aleatorio ---\n");
    int vet[5];
    srand(time(NULL));
    
    for(int i = 0; i < 5; i++){
        vet[i] = rand() % 100; // Coloquei % 100 só para os números não ficarem gigantes
        printf("%d\t", vet[i]);
    }
    printf("\n\n");

    // --- PARTE DE PONTEIROS / MALLOC ---
    int linhas = 3;
    int colunas = 3;

    int *v = malloc(n * sizeof(int)); //ponteiro de vetor
    
    // Alocação da Matriz Dinâmica
    int **matriz = malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++){
        matriz[i] = malloc(colunas * sizeof(int));
    }

    printf("Alocacao dinamica (malloc) executada com sucesso.\n");
    
    // Boa prática: Liberar a memória no final (free)
    free(v);
    for(int i=0; i<linhas; i++) free(matriz[i]);
    free(matriz);
    
    return 0;
}