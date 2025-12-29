//Soma de duas matrizes salvando o valor em uma terceira. 
    int mat2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int mat2[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
           int mat3[i][j] = mat2[i][j] + vet[i][j];
         printf("%d ", mat3[i][j]);
        }
         printf("\n");
    }
    
