//Matrizes - Arrays bidimensionais
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int linha, i, j, coluna;
    scanf("%d %d", &linha, &coluna);
    
    int vet[linha][coluna];
    
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
        printf("Insira o valor da linha no indice %d, e coluna no indice  %d\n", i, j);
            scanf("%d ", &vet[i][j]);
        }
          
    }
    
        for(i = 0; i < linha; i++){
            for(j = 0; j < coluna; j++){
                printf("%d ", vet[i][j]);
              
            }
              printf("\n");
        }
        
    
    return 0;
}
