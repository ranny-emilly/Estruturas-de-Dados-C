# Estruturas de Dados (EDD)

> Todo o conteúdo abaixo foi escrito por mim, com base no meu entendimento aprendizado sobre introdução Estruturas de Dados.

---

## O que são Estruturas de Dados?

Estruturas de Dados são **formas organizadas de armazenar, gerenciar e manipular dados** na memória do computador.

Elas:
- permitem que informações sejam acessadas e processadas de maneira eficiente;
- definem **modelos lógicos** que indicam como os dados se relacionam entre si;
- determinam quais **operações** podem ser realizadas sobre esses dados.

A partir do momento em que entendemos **qual estrutura está sendo utilizada**, passamos a conhecer:
- suas características;
- suas vantagens e limitações;
- e como aplicá-la corretamente em um projeto.

Isso faz com que as decisões de implementação **passem a fazer sentido**.

---

## Qual a finalidade das Estruturas de Dados?

A principal finalidade é **organizar informações na memória**, facilitando operações como:
- inserir dados;
- remover dados;
- atualizar informações;
- acessar elementos específicos.

Além disso, Estruturas de Dados são fundamentais para **melhorar a eficiência dos programas**.

Quando declaramos uma variável simples, normalmente não nos preocupamos com a forma como os dados são manipulados internamente.  
Já ao utilizar Estruturas de Dados, passamos a compreender **como os dados são organizados e como se relacionam entre si**, indo além de apenas armazenar informações.

> **A importância das Estruturas de Dados está diretamente ligada ao desenvolvimento de sistemas mais eficientes.**

---

## Como saber qual é a melhor EDD para o meu problema?

A escolha da Estrutura de Dados adequada depende principalmente de **três fatores**:

### 1. Tipo de dado e volume
- Que tipo de informação será armazenada?
  - números?
  - textos?
  - objetos complexos?
- A quantidade de dados será pequena ou muito grande?

### 2. Operações mais frequentes
- Inserções e remoções frequentes  
  → **Listas, Pilhas ou Filas**
- Acesso direto por posição (índice)  
  → **Vetores ou Matrizes**
- Organização hierárquica  
  → **Árvores**
- Garantia de unicidade e acesso rápido  
  → **Tabelas Hash**

### 3. Eficiência e limitações de memória
- Estruturas diferentes consomem quantidades diferentes de memória;
- Estruturas mais complexas podem oferecer maior desempenho,
  mas geralmente utilizam mais espaço na memória.

---

## Como pensar na melhor EDD de acordo com a minha necessidade?

A escolha deve ser feita **a partir de perguntas sobre o próprio sistema**, usando raciocínio lógico.

### Perguntas fundamentais:

#### Qual é o problema que quero resolver?
- Exemplo:  
  Quero armazenar um **histórico de navegação**  
  → **Pilha**, pois o último acesso é o primeiro a ser removido.

#### Quais operações vou usar com mais frequência?
- Muitas inserções e remoções  
  → **Lista encadeada**
- Muitas buscas por índice  
  → **Vetor**

#### Existe necessidade de hierarquia ou conexões?
- Organização hierárquica (ex: árvore genealógica)  
  → **Árvore**
- Mapeamento de cidades e rotas  
  → **Grafo**

---

## Conclusão

Pensar corretamente em Estruturas de Dados significa:
- entender o problema;
- analisar as operações mais importantes;
- equilibrar desempenho e uso de memória.

Uma boa escolha de EDD impacta diretamente na **eficiência, escalabilidade e qualidade do sistema**.
