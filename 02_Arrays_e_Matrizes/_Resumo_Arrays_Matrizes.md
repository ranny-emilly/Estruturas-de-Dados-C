# Resumo: Arrays e Matrizes em C
*(Arquivos de referência: `_Vetores_Resumo.c`, `_Matrizes_Resumo.c`, `_Soma_Matrizes.c`)*

## 1. Vetores (Arrays Unidimensionais)
Um vetor é uma variável composta capaz de armazenar vários valores **do mesmo tipo** em uma estrutura contígua de memória.

### Sintaxe Básica
```c
int numeros[5]; // Declara um vetor de inteiros com 5 posições (índices 0 a 4)
float notas[3] = {7.5, 8.0, 6.5}; // Declaração com inicialização
```

Manipulação (Loops)Para ler ou imprimir um vetor inteiro, usamos um laço de repetição (geralmente for).
    Índice i: Controla a posição atual. Vai de 0 até tamanho - 1.
```c
    // Preenchendo um vetor
for(int i = 0; i < 5; i++) {
    scanf("%d", &vetor[i]);
}

// Alterando valores (ex: multiplicando por 3)
for(int i = 0; i < 5; i++) {
    vetor[i] = vetor[i] * 3;
}
```
Números Aleatórios
Para gerar valores randômicos, usamos a biblioteca <time.h> e <stdlib.h>.
    Seed (srand): Define a semente baseada na hora atual para que os números mudem a cada execução.
    Rand (rand): Gera o número.
```c
srand(time(NULL)); // Executar apenas uma vez no início da main
vetor[i] = rand() % 100; // Gera número entre 0 e 99
```
## 2. Strings (Vetores de Char)
Em C, uma String nada mais é do que um vetor de caracteres terminado por um caractere nulo (\0).
Leitura de Texto
Temos duas formas principais de ler strings, com comportamentos diferentes:

Comando	Comportamento	Exemplo de Uso
scanf("%s", nome)	Lê até o primeiro espaço. Não serve para nomes compostos.	scanf("%s", nome);
fgets(...)	Lê a linha inteira, incluindo espaços. Mais seguro.	fgets(nome, 100, stdin);

⚠️ O Problema do Buffer (Lixo de Memória)
Quando usamos scanf para ler números e logo depois tentamos ler uma string com fgets, o programa pode "pular" a leitura.

Motivo: O scanf deixa o "Enter" (\n) no buffer do teclado.

Solução: Usar getchar(); antes de ler a string para limpar esse "Enter".

```c
scanf("%d", &idade);
getchar(); // Limpa o buffer
fgets(nome, 50, stdin); // Agora funciona
```

3. Matrizes (Arrays Bidimensionais)
Matrizes são "vetores de vetores". Elas possuem Linhas e Colunas. Imagine uma tabela do Excel.

Sintaxe e Acesso
Declaração: tipo nome[linhas][colunas];

```c

int matriz[3][3]; // Matriz 3x3 (9 elementos)
matriz[0][0] = 10; // Altera o elemento da primeira linha, primeira coluna
```
Percorrendo Matrizes (Loops Aninhados)
Precisamos de dois laços for: um para as linhas (i) e outro para as colunas (j).

```c
for(int i = 0; i < linhas; i++) {       // Para cada linha...
    for(int j = 0; j < colunas; j++) {   // ...percorra todas as colunas
        printf("%d ", matriz[i][j]);
    }
    printf("\n"); // Pula linha ao fim de cada linha da matriz
}
```

Operações com Matrizes
Para somar duas matrizes (A + B = C), percorremos ambas e somamos posição por posição:
```c
mat3[i][j] = mat1[i][j] + mat2[i][j];
```
Memória Dinâmica (Intro)
Embora seja tópico de Ponteiros, é possível criar vetores cujo tamanho é definido durante a execução (não fixo).

malloc: Aloca memória.

free: Libera memória (obrigatório).

```c
int *vetor = malloc(n * sizeof(int)); // Cria vetor de tamanho 'n'
// ... usa o vetor ...
free(vetor); // Limpa a memória
```
