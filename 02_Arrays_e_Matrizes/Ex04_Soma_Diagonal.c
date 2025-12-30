/*Declare uma matriz 3x3 de inteiros.
Peça para o usuário preencher os 9 números.
Some apenas os números onde o índice da linha é igual ao da coluna (mat[0][0], mat[1][1], mat[2][2]).
Mostre a matriz formatada e a soma final.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[3][3];

    for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
             printf("Insira o numero no indice %d da linha e indice %d da coluna: ", i, j);
             scanf("%d", &mat[i][j]);

             }
        }
    
    printf("\n");
    for(int i = 0; i < 3; i++){
           for(int j = 0; j < 3; j++){
            printf("%d ", mat[i][j]);
             
        }
      
          printf("\n");
    }

     int soma = 0; 
    for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        if (i == j) {

            soma = soma + mat[i][j]; 
        }
    }
}
printf("A soma da diagonal e: %d", soma);

    return 0;
}

