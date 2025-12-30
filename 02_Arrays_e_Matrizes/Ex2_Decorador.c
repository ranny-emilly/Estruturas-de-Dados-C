/*Crie uma função chamada imprimir_borda.
Parâmetro: Nenhum (vazio).
Retorno: void (nenhum).
Ação: Ela deve apenas imprimir uma linha de enfeite, tipo: printf("=====================\n");.
Na main: Use essa função antes e depois de imprimir uma frase qualquer (ex: "Bem vindo ao Sistema").*/

#include <stdio.h>
#include <stdlib.h>

void imprimir_decorador(){
    printf("=====================\n");
    return;
}

int main(){

    imprimir_decorador();
    printf("SISTEMA DE TESTE\n");
    imprimir_decorador();

    return 0;

}