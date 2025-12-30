#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[20], copia, fim = 19, i;
   
    for(i = 0; i < 20; i++){
        scanf("%d", &vet[i]);
    }
    
    for(i = 0; i < 20; i++){
      printf("\nVetor Original: %d", vet[i]);
    }
    
    for(i = 0; i < 10; i++){
        copia = vet[i];
        vet[i] = vet[fim];
        vet[fim] = copia;
        fim--;
    }
    
    for(i = 0; i < 20; i++){
      printf("\nVetor Modificado: %d", vet[i]);
    }
   
    return 0;
}
