# 📚 Resumo: Introdução à Programação em C

**Autor:** Emilly Ranny
**Contexto:** Anotações de aula e revisão de sintaxe.

---

## 1. Boas Práticas e Sintaxe
* **Indentação:** Fundamental para legibilidade. O código deve estar alinhado dentro das chaves `{ }`.
* **Comentários:**
    * `//` : Comentário de uma linha.
    * `/* ... */` : Comentário de bloco (múltiplas linhas).
* **Caracteres:** Para atribuir valor `char`, use **aspas simples**.
    ```c
    char letra = 'a'; // Correto
    // char letra = "a"; // Errado (aspas duplas são para strings)
    ```

---

## 2. Tipos de Variáveis e Modificadores
Além dos tipos básicos (`int`, `float`, `char`), temos modificadores para gerenciar memória.

| Modificador | Descrição | Efeito |
| :--- | :--- | :--- |
| `short int` | Inteiro curto | Ocupa **menos** memória (números menores). |
| `long int` | Inteiro longo | Ocupa **mais** memória (números grandes). |
| `unsigned int` | Sem sinal | Apenas positivos. **Dobra** a capacidade positiva. |
| `long double` | Real estendido | Mais precisão que o `double` comum. |

---

## 3. Constantes
Valores que nunca mudam durante a execução. Existem duas formas de declarar:

### A. Pré-processador
```c
#define PI 3.1415
// Não usa ponto e vírgula, nem sinal de igual.
```
### B. Via Variável const

```C
const float PI = 3.1415;
// É uma variável blindada contra alterações.
```

## 4. Entrada e Saída (I/O)
Impressão (printf)
Formatadores de placeholder:

%d: Inteiros.

%f: Float padrão.

%.2f: Float limitando a 2 casas decimais.

%c: Caractere.

Leitura (scanf)
Regra de Ouro: Use & antes da variável (exceto strings).

O Buffer: Ao ler caracteres, o Enter anterior pode atrapalhar. Use um espaço antes do %c.

```C
scanf(" %c", &letra); // O espaço antes do % limpa o buffer
```
## 5. Estruturas Condicionais
If / Else (Se / Senão)
Testa uma condição verdadeira ou falsa.

```C

if (condicao) {
    // Ação se verdadeiro
} else {
    // Ação se falso
}
```
Switch Case (Escolha)
Ideal para menus ou verificar valor exato de uma variável.

```C

switch (variavel) {
    case 1:
        // instrução
        break; // OBRIGATÓRIO: Pára e sai do switch
    case 2:
        // instrução
        break;
    default:
        // Ação padrão se nenhum case for aceito
}
```
## 6. Laços de Repetição (Loops)
For (Para)
Usado quando sabemos a quantidade de repetições.

```C

// (inicialização ; condição ; incremento)
for (int i = 0; i < 10; i++) {
    // bloco de código
}
```
While (Enquanto)
Usado quando não sabemos a quantidade exata. Testa a condição antes de executar.

```C

while (condicao) {
    // executa enquanto for verdade
    // i++; (não esquecer de incrementar/alterar condição)
}
```
Do-While (Faça... Enquanto)
Testa a condição depois. Garante que o código rode pelo menos uma vez.

```C
do {
    // bloco de código
} while (condicao);
```
Controle de Fluxo nos Loops

break: Interrompe o loop imediatamente (sai do laço).

continue: Pula apenas a rodada atual e vai para a próxima iteração.


# 2. Modularização (Funções)
*(Arquivos de referência: `_Funcoes.c`)*

### O que são?
Dividir o código em blocos menores.
* **Vantagem:** Evita poluir a `main` com 500 linhas de código.
* **Organização:** Se der erro, você sabe exatamente em qual bloco corrigir.

### Tipos de Funções
1.  **Com Retorno (`int`, `float`, `char`):** Fazem um cálculo e **devolvem** uma resposta para quem chamou.
2.  **Sem Retorno (`void`):** Apenas executam uma **ação** (ex: imprimir menu, limpar tela) e não devolvem valor matemático.

### Estrutura e Exemplos

```c
#include <stdio.h>

// 1. Protótipos (Assinaturas antes da main)
float maior(float num1, float num2); // Retorna float
void exibir_mensagem();              // Não retorna nada (void)

int main(){
    float x, y, m;

    // Chamando função VOID (apenas executa)
    exibir_mensagem();

    printf("Insira dois valores: ");
    scanf("%f %f", &x, &y);

    // Chamando função COM RETORNO (precisa guardar o resultado em 'm')
    m = maior(x, y);

    printf("O maior é %.2f", m);
    return 0;
}

// 2. Implementações (Depois da main)

// Função que calcula e DEVOLVE valor
float maior(float num1, float num2){
    if(num1 > num2) return num1;
    else return num2;
}

// Função que apenas FAZ UMA AÇÃO
void exibir_mensagem(){
    printf("--- BEM VINDO AO SISTEMA ---\n");
    // Não precisa de return (ou usa apenas 'return;' vazio)
}

```

