
# Grafo: Busca em Profundidade

Este repositório contém a implementação do algoritmo de Busca em Profundidade (DFS) em C++, aplicando-o a um grafo representando o mapa do sul de Minas Gerais. O objetivo é explorar a região, partir da cidade de Itajubá, e determinar as componentes conexas do grafo.

## 📚 Conteúdo

1. **Representação do Grafo**
    - O grafo é representado por uma matriz de adjacências 10x10.
    - As cidades são representadas pelos seguintes vértices:
        - 0: Itajubá
        - 1: Piranguinho
        - 2: Delfim Moreira
        - 3: Pouso Alegre
        - 4: Santa Rita
        - 5: Pedralva
        - 6: Maria da Fé
        - 7: Cristina
        - 8: São Lourenço
        - 9: Paraisópolis
    - Trechos fictícios de estrada entre as cidades são representados na matriz de adjacências com valores 1 (conectado) e 0 (não conectado).

2. **Algoritmo de Busca em Profundidade (DFS)**
    - Implementação recursiva do DFS para explorar o grafo a partir da cidade de Itajubá.
    - Função para determinar a ordem das cidades visitadas durante a exploração.

3. **Componentes Conexas**
    - Função para calcular a quantidade de componentes conexas no grafo.
    - Impressão da lista de cidades que pertencem a cada componente conexa.

4. **Exemplo de Execução**
    - Um exemplo de execução do código é fornecido para demonstrar a exploração das cidades e a identificação de componentes conexas.

## 🚀 Objetivo

O objetivo deste projeto é implementar e testar o algoritmo de Busca em Profundidade em C++, explorando um grafo que representa as cidades e os trechos rodoviários no sul de Minas Gerais. Além disso, o projeto inclui a análise de componentes conexas no grafo.

## 🛠 Tecnologias Utilizadas

- **C++**: Linguagem de programação utilizada para a implementação do algoritmo e do grafo.
- **Matriz de Adjacências**: Estrutura de dados utilizada para representar o grafo.
