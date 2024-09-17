# Algoritmo de Prim para Árvore Geradora Mínima (MST) 

Este repositório contém a implementação do Algoritmo de Prim em C++ para encontrar a Árvore Geradora Mínima (MST) de um grafo ponderado. O algoritmo é baseado no algoritmo de Dijkstra, com algumas modificações para resolver o problema de MST.

## 📚 Conteúdo

1. **Algoritmo de Prim**
   - Implementação do Algoritmo de Prim para encontrar a MST.
   - Baseado no algoritmo de Dijkstra, com modificações para manter o custo da última aresta para cada vértice.
   - O vetor `custo` guarda o custo da última aresta para chegar a um vértice.
   - O vetor `anterior` é usado para reconstruir a árvore geradora mínima e identificar as arestas escolhidas.

2. **Programa Principal**
   - Inicializa uma matriz de adjacências com o grafo fornecido.
   - Chama a função do Algoritmo de Prim com o vértice 0 como vértice inicial.
   - Imprime o custo total da árvore geradora mínima e as arestas escolhidas.

## 🚀 Objetivo

O objetivo deste projeto é implementar o Algoritmo de Prim para encontrar a Árvore Geradora Mínima (MST) de um grafo, utilizando a abordagem gulosa. O programa deve calcular o custo total da MST e listar as arestas que a compõem.

## 🛠 Tecnologias Utilizadas

- **C++**: Linguagem de programação utilizada para a implementação do Algoritmo de Prim e do programa principal.