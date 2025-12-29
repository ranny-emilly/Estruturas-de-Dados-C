#include <stdio.h>
#include <stdlib.h>

/*Calloc - Precisa de mais de um parâmetro
Recebe a quantidade de ponteiros e de memória*/

int main()
{
    int *x;
    char *y;
/*Recebe a quantidade de bytes de um elemento para o qual eu quero alocar memória
e os elementos para o qual eu desejo alocar memória*/
    
    y = calloc(1,sizeof(char));
    x = calloc(1, sizeof(int));
    
    
    if(x && y){
        printf("Memoria alocada com sucesso\n");
    }else{
        printf("Erro ao alocar memoria!\n");
    }

//Atribuir um valor ao ponteiro/conteúdo apontado por y
    printf("x: %d %c\n", *x, *y);
    *x = 50;
    *y = 's';
    printf("x: %d %c\n", *x, *y);
    free(x);
    free(y);
    return 0;
}
