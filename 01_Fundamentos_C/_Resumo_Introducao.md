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


