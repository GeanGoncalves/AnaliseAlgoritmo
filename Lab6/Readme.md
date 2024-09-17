# Tabela Hash 

Este repositório contém a implementação de uma Tabela Hash em C++, aplicando-a para armazenar informações de carros em trânsito em frente ao prédio central da UNIFEI. A estrutura de dados é projetada para armazenar rapidamente informações de veículos, como placa e modelo.

## 📚 Conteúdo

1. **Classe `HashTable`**
    - Implementação da classe que encapsula a tabela hash.
    - **Funções Membro:**
        - `put(std::string placa, std::string modelo)`: Insere um valor na tabela hash.
        - `remove(std::string placa)`: Remove um valor da tabela hash.
        - `get(std::string placa)`: Recupera um valor da tabela hash.
        - `print()`: Imprime o estado atual da tabela hash, mostrando os valores armazenados em cada chave.
        - `hash(std::string chave)`: Função hash que retorna uma posição na tabela dada uma chave.

2. **Estrutura de Dados**
    - A tabela hash tem capacidade para 20 valores.
    - O método de tratamento de colisões utilizado é o endereçamento aberto, onde a tabela busca a próxima posição vazia em caso de colisão.

3. **Classe `Carro`**
    - Armazena informações sobre carros, incluindo placa e modelo. Adicionalmente, pode armazenar outras características como cor.

4. **Exemplo de Uso**
    - Um exemplo de código é fornecido para demonstrar como inserir, remover e recuperar informações de carros na tabela hash, além de imprimir o estado atual da tabela.

## 🚀 Objetivo

O objetivo deste projeto é implementar uma Tabela Hash em C++ para armazenar e recuperar rapidamente informações sobre carros em trânsito. A tabela hash é projetada para lidar com colisões usando o método de endereçamento aberto e calcular o valor hash a partir da placa do carro.

## 🛠 Tecnologias Utilizadas

- **C++**: Linguagem de programação utilizada para a implementação da Tabela Hash e da classe `Carro`.
- **Endereçamento Aberto**: Método para tratamento de colisões na tabela hash.