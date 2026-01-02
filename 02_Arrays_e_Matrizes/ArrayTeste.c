#include <stdio.h>
#include <stdlib.h>

void imprimir_decorador(){
    printf("\n=====================\n");
    return;
}

int main(){

    int numeros[5] = {2, 4, 6, 8};
    
    //Acesso de valor
    printf("\nValor: %d\n", numeros[2]);

    //Atualização de Valor
    printf("Valor anterior: %d\n", numeros[1]);
    numeros[1] = 500;
    printf("Valor atualizado: %d\n", numeros[1]);

    //Inserção de Valor
    printf("Valor anterior: %d\n", numeros[4]);
    numeros[4] = 485;
    printf("Valor atualizado: %d\n", numeros[4]);

    //Tempo de processo = N (quantidade de elementos que o vetor possui) -> Uso de for

    imprimir_decorador();
    printf("Impressao por valor do indice:");
    imprimir_decorador();


    for(int i = 0; i < 5; i++){
        printf("O valor do indice %d e igual a %d\n", i, numeros[i]);
    }

    return 0;
}