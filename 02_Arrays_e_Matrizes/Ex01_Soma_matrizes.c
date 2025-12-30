// Soma de duas matrizes salvando o valor em uma terceira.
#include <stdio.h>

int main() {
    
    int mat1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int mat2[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    
    // Matriz 3 para guardar o resultado
    int mat3[3][3];
    int i, j;
    
    printf("--- Soma das Matrizes ---\n");

  
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
