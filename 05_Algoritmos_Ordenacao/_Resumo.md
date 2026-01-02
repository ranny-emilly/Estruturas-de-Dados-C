# Resumo: Análise de Complexidade de Algoritmos

## Objetivo
Avaliar o desempenho de algoritmos em termos de **Tempo** e **Espaço**, sem depender do hardware.

---

## 1. O que é e Para que serve?

É uma **métrica matemática** para medir a eficiência de um código.

### Independência de Hardware
Não medimos em *segundos*, pois um supercomputador roda mais rápido que um notebook antigo.  
Medimos em **passos de execução** em função do tamanho da entrada ($n$).

### Utilidade
- Comparar duas soluções diferentes para o mesmo problema.
- Prever se o código vai travar quando o número de usuários/dados crescer (**Escalabilidade**).
- Identificar gargalos de performance.

---

## 2. Tipos de Complexidade

### A. Complexidade de Tempo
Quanto o tempo de execução aumenta conforme a entrada ($n$) cresce?

**Exemplo:**  
Buscar em uma lista de 10 itens é rápido.  
E numa lista de 1 bilhão?

### B. Complexidade de Espaço
Quanta memória RAM extra o algoritmo precisa para rodar?

- **Algoritmos In-Place:** usam memória constante ($O(1)$).
- **Algoritmos Recursivos:** podem gastar muita memória na pilha de chamadas ($O(n)$).

---

## 3. Cenários de Análise

| Cenário      | Notação              | Descrição                                   | Exemplo Prático                          |
|--------------|----------------------|---------------------------------------------|------------------------------------------|
| Pior Caso    | Big O ($O$)          | O teto máximo de tempo. "No máximo demora isso" | Buscar um item que não existe na lista |
| Melhor Caso  | Ômega ($\Omega$)     | O cenário ideal. "Pelo menos demora isso"     | O item buscado é o primeiro da lista     |
| Caso Médio   | Theta ($\Theta$)     | Baseado em probabilidade estatística          | Busca em um item aleatório               |

> **Nota:** Na Engenharia de Software, focamos quase sempre no **Big O (Pior Caso)** para garantir estabilidade.

---

## 4. Classes de Complexidade (Big O)

Do mais rápido (topo) para o mais lento (fundo):

| Notação        | Nome           | Desempenho        | Exemplo Típico                                  |
|----------------|----------------|-------------------|-------------------------------------------------|
| $O(1)$         | Constante      | ⚡ Instantâneo     | Acessar array pelo índice (`vet[5]`)            |
| $O(\log n)$    | Logarítmica    | 🚀 Muito Rápido    | Busca Binária                                   |
| $O(n)$         | Linear         | 🚶 Proporcional    | Loop simples percorrendo tudo                   |
| $O(n \log n)$  | Linearithmic   | 🏃 Rápido          | QuickSort, MergeSort                            |
| $O(n^2)$       | Quadrática     | 🐢 Lento           | Loops aninhados (Bubble Sort)                   |
| $O(2^n)$       | Exponencial    | 🐌 Muito Lento     | Fibonacci recursivo sem cache                   |
| $O(n!)$        | Fatorial       | 💀 Impraticável    | Problema do Caixeiro Viajante                   |

---

## 5. Critérios de Análise (O que olhar no código?)

Para descobrir a complexidade de um código, observe:

### Loops (Repetições)
São os maiores consumidores de tempo.

- 1 loop → $O(n)$
- 2 loops aninhados → $O(n^2)$

### Recursividade
Cuidado com chamadas que se ramificam.  
Exemplo: chamar a função **duas vezes dentro dela mesma** gera $O(2^n)$.

### Operações com Coleções
- Inserir no final de um vetor → rápido.
- Inserir no início de um vetor → lento (precisa deslocar todos os elementos).

### Uso de Memória Extra
Alocar vetores auxiliares aumenta a **complexidade de espaço**.

---

## Conclusão
Sempre projete pensando no **Pior Caso ($O$)**.  
Um código $O(n^2)$ pode funcionar para 10 itens, mas vai derrubar o servidor com **10.000 itens**.
