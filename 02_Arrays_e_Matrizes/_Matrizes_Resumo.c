//Matrizes - Arrays bidimensionais
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha, i, j, coluna;
    

    printf("Digite a quantidade de linhas e colunas: ");
    scanf("%d %d", &linha, &coluna);
    
    int vet[linha][coluna];
    
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("Insira o valor da linha no indice %d, e coluna no indice %d: ", i, j);
            scanf("%d", &vet[i][j]); 
        }
    }
    
    printf("\n--- Matriz Digitada ---\n");
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("%d ", vet[i][j]);
        }
        printf("\n");
    }
        
    //String: Vetor de caractere
    char variavel[50];
    char nome[] = "Arthur";

    printf("\no nome é: %s\n", nome); 
    /*Se a entrada tiver espaço, como por exemplo, nome composto, se lê com fgets e não scanf*/
    
    // Limpeza do Buffer
    // O scanf de cima deixou um "Enter" sobrando. O getchar() come esse Enter
    // para não atrapalhar o fgets abaixo.
    getchar(); 

    char nomecomposto[100];
    
    printf("Digite um nome composto: "); 
    fgets(nomecomposto, 100, stdin); /*stdin é para receber da entrada (in)*/
    
    printf("o nome composto é: %s", nomecomposto);
    
    return 0;
}