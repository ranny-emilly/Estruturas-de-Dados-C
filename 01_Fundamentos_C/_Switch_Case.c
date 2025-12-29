//Switch Case é usado para comparar igualdade de uma variável, neste caso, da vaiável "opcao"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int operacao;
    
    printf("1 - Cadastrar Produto\n2 - Vender Produto\n3 - Buscar Produto\n");
    scanf("%d", &operacao);
    
    switch(operacao){
        case 1:
          printf("\nCadastrando novo produto\n");
          break;
        
        case 2:
          printf("\nEfetuando venda\n");
          break;
        
        case 3:
          printf("\nBuscando produto\n");
          break;
        
        default:
           printf("\nOpcao invalida\n");
        
    }
    
    
    return 0;
}

