# Resumo: Revisão Intermediária (Parte 2)
*(Estruturas, Manipulação de Strings, Modularização, Arquivos e Recursividade)*

## 1. Estruturas (`struct`)
As estruturas são a base para o conceito de Orientação a Objetos (em C++, Java, etc). Permitem agrupar variáveis de **tipos diferentes** em um único tipo de dado personalizado.

### Sintaxe Básica
```c
struct Pessoa {
    char nome[50];
    int idade;
};

// Uso na main
struct Pessoa p1;
strcpy(p1.nome, "Arthur"); // Acesso via ponto (.)
p1.idade = 20;
```
Estruturas e Ponteiros
Acesso: Quando usamos um ponteiro para estrutura, acessamos os campos com a seta (->) em vez do ponto (.).

Alocação Dinâmica: É comum usar malloc dentro de estruturas (ex: para títulos de tamanho variável) para economizar memória. Lembre-se de dar free depois.

Passagem por Parâmetro
Por Valor: Cria uma cópia da estrutura. Alterações dentro da função não afetam a original.

Por Referência: Passa o endereço (&). Alterações afetam a original (usa-se -> para alterar).

2. Biblioteca de Strings (<string.h>)
Além de tratar strings como vetores de char, C possui funções nativas para manipulação.

Função	Descrição
strlen(str)	Retorna o tamanho da string (sem contar o \0).
strcpy(dest, orig)	Copia o conteúdo de orig para dest. Cuidado: Risco de Buffer Overflow se dest for menor.
strcmp(str1, str2)	Compara strings. Retorna 0 (iguais), <0 (str1 menor) ou >0 (str1 maior).
strcat(dest, orig)	Concatena (junta) orig ao final de dest.
strchr(str, char)	Busca a primeira ocorrência de um caractere. Retorna ponteiro.
strstr(str, sub)	Busca a primeira ocorrência de uma substring. Retorna ponteiro.

Localização (<locale.h>)
Para usar acentos e formatação local.

setlocale(LC_ALL, "Portuguese"): Permite acentuação.

Atenção: Isso altera o ponto flutuante para vírgula (ex: 10,5). Isso pode dar erro ao ler arquivos salvos com ponto. Use LC_CTYPE se quiser alterar apenas os caracteres de texto.

3. Modularização (Múltiplos Arquivos)
Dividir o código para facilitar manutenção, organização e reutilização.

Arquivos de Cabeçalho (.h)
Contém os Protótipos das funções e definições de Structs.

Funciona como uma "Interface Pública".

Usa-se Header Guards (#ifndef, #define) para evitar duplicidade na compilação.

Arquivos de Código (.c)
Contém a Implementação real das funções.

Pode ter funções "privadas" (que não estão no .h) que só funcionam dentro daquele arquivo.

```c

#include "minha_lib.h" // Aspas para arquivos locais
#include <stdio.h>     // <> para bibliotecas do sistema
```

4. Manipulação de Arquivos (FILE*)
Uso da biblioteca <stdio.h> para persistência de dados.

Modos de Abertura (fopen)
"r": Leitura (Read). Erro se não existir.

"w": Escrita (Write). Cria novo ou sobrescreve o existente.

"a": Anexar (Append). Adiciona ao final do arquivo.

Binários: Acrescentar b (ex: "rb", "wb").

Funções Principais
fopen / fclose: Abrir e fechar ponteiro de arquivo.

fprintf(arq, ...): Escreve formatado (igual printf).

fscanf(arq, ...): Lê formatado (igual scanf).

fgets: Lê uma linha inteira (seguro para strings).

fwrite / fread: Leitura e escrita de blocos binários (usando sizeof).

CSV: Arquivos separados por vírgula são lidos como texto comum, exigindo tratamento da string para separar os campos.

5. Recursividade
Uma função que chama a si mesma para resolver um problema menor.

Componentes Obrigatórios:

Caso Base: A condição de parada (sem ela, ocorre Loop Infinito/Stack Overflow).

Chamada Recursiva: A lógica que chama a função novamente com dados reduzidos.

Exemplos: Fatorial, Fibonacci, Ordenação (Divisão e Conquista).

Cuidado: Recursão excessiva pode consumir muita memória e ser lenta (ex: Fibonacci recursivo simples).

