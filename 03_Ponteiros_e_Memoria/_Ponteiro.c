#include <stdio.h>
#include <stdlib.h>

//ponteiro armazena um endereço de memória;

int main(){
    
    int num = 10;
    int *p;
    
    /*erro de compilação: 
    p = num;*/
    
    //forma correta:
    p = &num;
    
    printf("Valor de num: %d\n", num);
    //& no print para imprimir o ENDEREÇO DE MEMÓRIA
    printf("Endereco de num: %p\n", &num);
    printf("Endereco de p: %p\n", &p);
    printf("Valor de p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);
    
    //Como p é ponteiro, ele vai apontar o valor da alocação de memória de num
    //Valor da memória de num é diferente do valor da memória de p 
    //* é usado para declarar a variável e para obter o conteúdo apontado pelo ponteiro
    
    return 0;
}
