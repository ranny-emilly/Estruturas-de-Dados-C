#include <stdio.h>

int main(){

    int testes, tamanho, quant = 0, j, i;

    scanf("%d", &testes);

    for(i = 0; i < testes; i++){
        scanf("%d", &tamanho);
        int vet[tamanho];
        
            for(j = 0; j < tamanho; j++){            
            scanf("%d", &vet[j]);
            
             }
       int max_prefix = vet[0]; 

        for(j = 1; j < tamanho; j++){
            if(vet[j] < max_prefix){
                quant++;
            } else {
                max_prefix = vet[j];
            }
        }

        printf("%d\n", quant);
        quant = 0;
    }
    
       

    return 0;
}