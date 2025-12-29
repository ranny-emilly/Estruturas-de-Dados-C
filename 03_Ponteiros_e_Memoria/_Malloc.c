#include <stdio.h>
#include <stdlib.h>

/*memory alloc
malloc retorna um ponteiro para a região de memória alocada ou NULL*/

int main()
{
    int *x;
    
    x = malloc(sizeof(int));
    
    
    if(x){
        printf("Memoria alocada com sucesso\n");
    }else{
        printf("Erro ao alocar memoria!\n");
    }

//Atribuir um valor ao ponteiro/conteúdo apontado por x
    printf("x: %d\n", *x);
    *x = 50;
    printf("x: %d\n", *x);

    free(x);
    return 0;
}
