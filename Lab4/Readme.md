
# Heaps

Bem-vindo ao repositório da implementação da classe "Heaps" em C++. Este projeto contém uma classe que modela uma estrutura de dados de heap mínima. Na estrutura de heap mínima, o menor elemento está sempre no topo, e cada elemento é sempre menor do que todos os elementos abaixo dele.

## 📚 Conteúdo

1. **Implementação da Classe Heaps**
    - **Métodos Públicos:**
        - `void push(int value)`: Insere um novo elemento no fim da heap.
        - `void pop()`: Remove o elemento do topo da heap.
        - `int top() const`: Retorna o elemento no topo da heap, sem removê-lo.
        - `bool empty() const`: Verifica se a heap está vazia.
    - **Métodos Privados:**
        - `void heapify_down(int index)`: Ajusta a heap após a remoção de um elemento.
        - `void heapify_up(int index)`: Ajusta a heap após a inserção de um elemento.
    - **Atributos Privados:**
        - `std::vector<int> vet`: Vetor de inteiros que armazena os elementos da heap.
        - `int elems`: Mantém a quantidade atual de elementos da heap.
        
2. **Exemplo de Uso**
    - Exemplo de execução do código mostrando a inserção e remoção de elementos da heap.

## 🚀 Objetivo

O objetivo deste projeto é implementar uma estrutura de dados de heap mínima em C++, demonstrando o uso de métodos de manipulação de heaps, como inserção e remoção, e a manutenção da propriedade da heap mínima.

## 🛠 Tecnologias Utilizadas

- **C++**: Linguagem de programação utilizada para a implementação da classe.
- **STL Vector**: Utilizado para armazenar os elementos da heap.
