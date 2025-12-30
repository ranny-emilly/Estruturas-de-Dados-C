/*Crie uma função void trocar(int *a, int *b).
Na main, declare duas variáveis (x=10, y=20).
Chame a função passando os endereços (&x, &y).
A função deve inverter os valores (o x vira 20, o y vira 10) alterando diretamente na memória.*/

#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){

    int x = 10, y = 20;

   printf("Antes: x = %d, y = %d\n", x, y);
    trocar(&x, &y);
    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;
}