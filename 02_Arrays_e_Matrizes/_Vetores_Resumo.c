//Vetores - Arrays unidimensionais
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    scanf("%d", &n);
    int num[n];
    
    for(int i = 0; i < n; i++){
        printf("digite o elemento da posicao %d\n", i);
        scanf("%d", &num[i]);
    }
    
    for(int i = 0; i < n; i++){
    printf("%d\t", num[i]);
    }
    
    printf("\n\n");
    
//Aterando o conteúdo de um Vetor, neste caso, multiplicando os valores no índice i por 3.

    for (int i = 0; i < n; i++){
        num[i] = num[i] * 3;
    }
    
    for(int i = 0; i < n; i++){
    printf("%d\t", num[i]);
    }
    
    printf("\n\n");
    
//Gerando números aleatórios para preencher um Vetor
//Precisa incluir a biblioteca 'time.h', que, sincroniza com o time do pc, para alterar a "sead" constantemente e não gerar os mesmos números "aleatórios"
    int vet[5];
    srand(time(NULL));
    for(int i = 0; i < 5; i++){
        vet[i] = rand();
        printf("%d\t", vet[i]);
    }
    
    
    
    
    return 0;
}
