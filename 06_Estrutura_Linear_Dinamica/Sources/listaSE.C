#include "ListaSE.h"
#include <stdio.h>
#include <stdlib.h>
/*lembrando que este é um código de aprendizado. Os comentários são feitos exclusivamente por mim, para entender
o que estou implementando, e conseguir revisar depois caso seja necessário.
O código foi feito ao longo de aulas de um curso sobre estrutura de dados na linguagem C*/


//vai limitar a função para esse arquivo
static NoSimples *ls_criar_no(int valor){
    NoSimples *n = (NoSimples*) malloc(sizeof(NoSimples));
    if(!n){
        /*stdout (Standard Output): É onde sai o printf normal.
        stderr (Standard Error): É um canal separado só para erros.*/
        fprintf(stderr, "\nErro: sem memoria ao criar o no.\n");
        exit(EXIT_FAILURE/*avisa ao Sistema Operacional: "O programa morreu porque deu ruim"*/);
    }
    n->dado = valor;/*Vá até o endereço n, entre no campo dado e guarde o valor lá*/
    n->prox = NULL;/*Vá até o campo prox e diga que ele aponta para NADA (NULL)*/
    return n;
}

void ls_inserir_inicio(NoSimples **cabeca, int valor){
    NoSimples *n = ls_criar_no(valor); 
    n->prox = *cabeca;  /* O antigo primeiro (que estava na cabeça) agora é guardado como o "próximo" de n.
    */

    *cabeca = n; /*A variável cabeça é atualizada para ser o n (o novo início).*/
}

void ls_inserir_fim(NoSimples **cabeca, int valor){
    NoSimples *n = ls_criar_no(valor);

    if(*cabeca == NULL){
        *cabeca = n; // Atualiza a variável da main para apontar para n.
        return;
    }

    
    NoSimples *p = *cabeca; /* CENÁRIO 2: Precisa encontrar o último da fila */

   
    while(p->prox != NULL) /* Enquanto o "próximo" do nó NÃO for nulo...*/{
        p = p->prox; /* O ponteiro 'p' recebe o endereço do próximo nó.  O 'p' sai do nó atual e pula para o próximo nó.  Ele está "andando" para frente. */
    }
    
    p->prox = n; /* Quando o while acaba, significa que p->prox É NULL.  Agora o 'n' é o novo último da fila.*/
}

NoSimples *ls_buscar(NoSimples *cabeca, int valor) /*MOSTRA O PRIMEIRO VALO BUSCADO ENCONTRADO. SE HOUVER 30 4x, ele puxa o primeiro*/ {
    NoSimples *p = cabeca;/*inicia a buscar a partir da cabeca*/

    while(p != NULL){
        if(p->dado == valor)/* Se o dado do nó atual for o que eu quero... */{
            return p; //Retorna o endereço desse nó e encerra a função aqui mesmo.
        }
        p = p->prox;
    }
        /* Se o while acabou (p virou NULL), significa que percorreu tudo e não achou.*/
        return NULL;
}
    
bool ls_atualizar_primeiro(NoSimples *cabeca, int antigo, int novo){
    NoSimples *no = ls_buscar(cabeca, antigo);
    if(!no){
        return false;
    }else{
        no->dado = novo;
        return true;
    }

}

bool ls_remover_valor(NoSimples **cabeca, int valor){
    NoSimples *p = *cabeca; //preciso da referencia inicial da lista
    NoSimples *ant =  NULL; //preciso garantir que inicie em null, mas vai servir para armazenar info do anterior
    
    while(p != NULL && p->dado != valor)/*while funciona enquanto p for != nulo ou o dado de remoção for diferente do valor*/{
        ant = p; 
        p = p->prox;
    }
    if(p == NULL)/*chegou até o final da lista e não encontrou*/{
        return false;
    } else if(ant == NULL)/*O novo cabeca passa a ser o segundo da fila.*/{
        *cabeca = p->prox; /*atualizar a info para dizer que o proximo sera o primeiro (cabeca)*/
    }
    else{
        ant -> prox = p->prox;
        //1, 2, 3; Supondo que o p é o 2. Antes de remover o 2, preciso apontar o 1 para o 3. Então pega a referência do 2 que aponta para o 3 e passa para o 1.
    }

    free(p);
    return true;
}

void ls_exibir(const NoSimples *cabeca){

    const NoSimples *p = cabeca;/* um ponteiro auxiliar 'p' que recebe o endereço do início.
       O 'const' é um "cadeado": ele garante que a função ls_exibir
       NÃO PODE alterar os dados da lista. Ela só pode OLHAR (read-only).
    */

    while(p != NULL){
        prinf("%d -> \t", p->dado);
        p = p->prox;
    }
    printf("NULL. \n");
}

void ls_limpar(NoSimples **cabeca){
    NoSimples *p = *cabeca;
    while(p!= NULL){
        NoSimples *prox = p ->prox;
        free(p);
        p = prox;
    }
    *cabeca = NULL;
}