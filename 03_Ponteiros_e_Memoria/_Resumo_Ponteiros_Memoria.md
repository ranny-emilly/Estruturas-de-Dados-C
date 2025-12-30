# Resumo: Ponteiros e Alocação Dinâmica
*(Arquivos de referência: `_Ponteiro.c`, `_Malloc.c`, `_Calloc.c`)*

## 1. O que é um Ponteiro?
Um ponteiro é uma variável especial que armazena **endereços de memória** em vez de guardar valores diretamente.
* **Por que usar?** Essencial para alocação dinâmica, manipulação de arrays/strings e passagem eficiente de parâmetros para funções.

### Operadores Fundamentais
| Símbolo | Nome | Função | Exemplo |
| :--- | :--- | :--- | :--- |
| **`&`** | Endereço | Obtém o endereço de memória de uma variável. | `p = &x;` (p aponta para x) |
| **`*`** | Conteúdo | Acessa o **valor** armazenado no endereço. | `printf("%d", *p);` |

```c
int num = 10;
int *p = &num; // 'p' guarda o endereço de 'num'

*p = 20; // Altera o valor de 'num' para 20 através do ponteiro
```

## 2. Ponteiros e Arrays
O nome de um vetor em C é, na verdade, um ponteiro constante para o primeiro elemento.

```C
int v[3] = {1, 2, 3};
int *p = v; // Aponta para v[0]

// Aritmética de Ponteiros
printf("%d", *p);     // Imprime 1 (v[0])
printf("%d", *(p+1)); // Imprime 2 (v[1]) -> Pula 4 bytes (int) na memória
```

Strings
char *nome = "Arthur";: Ponteiro para uma string constante (não editável).

char nome[] = "Arthur";: Vetor de char (editável).

3. Passagem por Referência
Permite que uma função modifique a variável original da main. Enviamos o endereço (&) e a função recebe um ponteiro (*).

```C
void dobrar(int *n) {
    *n = *n * 2; // Altera o valor original na memória
}

int main() {
    int x = 5;
    dobrar(&x); // Envia o endereço
    // Agora x vale 10
}
```

## 4. Alocação Dinâmica de Memória
Permite solicitar memória "sob demanda" durante a execução (Heap), ao invés de fixar tamanho no código (Stack).

Principais Funções (<stdlib.h>)
malloc (Memory Allocation)
Aloca um bloco de bytes.

Conteúdo Inicial: Lixo de memória (Garbage).

Uso: Quando a velocidade importa e você vai preencher os dados logo em seguida.

```C

int *v = (int *) malloc(5 * sizeof(int));
```
calloc (Contiguous Allocation)
Aloca memória para um número de elementos.

Conteúdo Inicial: Tudo zerado (0).

Uso: Quando você precisa garantir que o vetor comece limpo.

```C

// Aloca 5 inteiros (4 bytes cada), todos valendo 0
int *v = (int *) calloc(5, sizeof(int));
```

realloc (Re-Allocation)
Redimensiona um bloco já alocado (aumenta ou diminui).

```C

// Aumenta o vetor 'v' para 10 posições
v = (int *) realloc(v, 10 * sizeof(int));
```
free (Liberar)
Devolve a memória para o sistema. Obrigatório usar sempre que terminar de usar a variável dinâmica.

```C

free(v);
v = NULL; // Boa prática para evitar acesso indevido
```
## 5. Boas Práticas (Checklist)
Verificar o Retorno: Sempre checar se malloc/calloc retornou NULL (falta de memória).

Evitar Memory Leaks: Para cada malloc, deve haver um free.

Matrizes Dinâmicas: Liberar linha por linha antes de liberar o vetor de ponteiros principal.

Limites: Acessar apenas dentro do tamanho alocado (0 a n-1).

Ponteiros Soltos: Após dar free(p), faça p = NULL para evitar bugs de "Dangling Pointer".

