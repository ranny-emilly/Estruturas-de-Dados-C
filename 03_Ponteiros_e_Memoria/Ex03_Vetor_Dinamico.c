/*Pergunte ao usuário: "Qual o tamanho do vetorrr?".
Crie um ponteiro int *vet.
Use malloc para reservar a memória exata (tamanho * sizeof(int)).
Segurança (Obrigatório): Verifique se o malloc funcionou (if vet == NULL). Se falhar, avise e feche o programa.
Faça um loop para preencher o vetorrr (pode colocar números sequenciais tipo i*10 ou pedir para digitar).
Imprima o vetorrr.
Limpeza (Crucial): Use free(vet) no final.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int o;

    printf("Qual o tamanho do vetorrr?");
    scanf("%d", &o);
    
    int *vet = (int *) malloc(o * sizeof(int));
    
    if (vet == NULL){
        printf("Erro ao alocar memoria para vetorrr\n");
        return 1;
    }
    
     for(int i=0; i < o ; i++){
        vet[i] = (i + 1) * 10; 
    }
    
    printf("Valores atribuidos:\n");
    for(int i=0; i < o ; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");

    free(vet);
    vet = NULL; 

    return 0;
}