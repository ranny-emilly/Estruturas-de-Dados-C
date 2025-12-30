#include <stdio.h>
#include <stdlib.h>



/*PASSAGEM POR REFERÊNCIA*/
/*passar o endereço de uma variável para uma função permite modificar o seu valor dentro da função*/
void dobrar(int *n){
    *n = *n * 2;
}


int main(){
    
    
    printf("--- 1. Ponteiros Basicos ---\n");
    
    int num = 10;
    
    /*ponteiro acessa o conteudo apontado*/
    int *p;
    
    /*erro de compilação: p = num;*/
    
    //forma correta de acessar o conteudo apontado:
    p = &num;
    
    printf("Valor de num: %d\n", num);
    //& no print para imprimir o ENDEREÇO DE MEMÓRIA
    printf("Endereco de num: %p\n", (void*)&num);
    printf("Endereco de p: %p\n", (void*)&p);
    printf("Valor de p (endereco que ele guarda): %p\n", (void*)p);
    printf("Valor apontado por p (*p): %d\n", *p);

    /*Aqui nós temos a variavel normal e o de ponteiro*/
    int x = 20;
    int *ptr = &x;
    //Como p é ponteiro, ele vai apontar o valor da alocação de memória.

    printf("\n");

    
    //PONTEIROS E ARRAYS

    printf("--- 2. Ponteiros e Arrays ---\n");
    
    int v[3] = {1, 2, 3};
    
    int *ptr_v = v; //equivale a: int *ptr_v = &v[0]

    printf("Acessando *(ptr_v+1): %d\n", *(ptr_v+1)); //imprime 2

    printf("Loop com aritmetica de ponteiros:\n");
    for(int i = 0; i < 3; i++){
        printf("%d ", *(ptr_v + i));
    }
    printf("\n\n");

    
    // 3. PONTEIROS E STRINGS

    printf("--- 3. Ponteiros e Strings ---\n");

    /*importante: char* apontado para string constante, não pode ser modificada*/
    char *nome = "Arthur";
    printf("nome: %s\n", nome);
    printf("primeira letra: %c\n", *nome);
    printf("segunda letra: %c\n", *(nome+1));
    
    printf("\n");

    
    //TESTE DA FUNÇÃO (PASSAGEM POR REFERÊNCIA)
   
    printf("--- 4. Passagem por Referencia ---\n");
    
    int valor = 5; 
    
    printf("Valor antes de dobrar: %d\n", valor);
    dobrar(&valor);
    printf("Valor depois de dobrar: %d\n", valor); // Deve ser 10

    printf("\n-------------------------\n");
    printf("Resumo de Boas Praticas exibido no codigo fonte.\n");

/* BOAS PRÁTICAS:
1. Verificar se malloc/calloc retornou NULL - evita acesso de memória inválida.
2. Usar free() para cada malloc() - evita vazamento de memoria (leaks).
3. Sempre liberar matrizes linha a linha - liberar cada linha antes do ponteiro da matriz.
4. Acessar apenas dentro dos limites alocados - acesso fora do limite gera comportamento indefinido.
5. Evitar duplo free em ponteiro nao alocado - pode causar crash ou bugs dificeis de rastrear.
*/

    return 0;
}