# Ordenação em Tempo Linear

Bem-vindo ao repositório do projeto de Ordenação em Tempo Linear! Este projeto explora algoritmos de ordenação que podem operar em tempo linear, superando o limite de Θ(n*log(n)) imposto pelos algoritmos de ordenação baseados em comparação. Utilizaremos os algoritmos Counting Sort e Radix Sort para demonstrar essas técnicas.

📚 **Conteúdo**
1. **Algoritmos de Ordenação**
   - **Counting Sort:** Ordena inteiros em um intervalo limitado, sem realizar comparações diretas entre elementos.
   - **Radix Sort:** Ordena números com múltiplos dígitos, utilizando Counting Sort de forma iterativa para cada dígito.

2. **Análise de Complexidade**
   - **Counting Sort:** Executa em Θ(n + k), onde `n` é o número de elementos e `k` é o valor máximo do intervalo.
   - **Radix Sort:** Executa em Θ(d*(n + k)), onde `d` é o número de dígitos e `k` é o intervalo de valores possíveis para cada dígito.

3. **Implementação e Testes**
   - **Counting Sort:** Implementação e comparação com algoritmos baseados em comparação como Insertion Sort e Quick Sort.
   - **Radix Sort:** Aplicação sobre números de vários dígitos e comparação com Counting Sort em termos de eficiência.

🚀 **Objetivo**
Este projeto visa explorar e implementar algoritmos de ordenação que operam em tempo linear, demonstrando como esses algoritmos podem superar as limitações dos métodos baseados em comparação. O objetivo é entender a aplicabilidade e eficiência desses algoritmos em diferentes contextos e comparar seus desempenhos com métodos tradicionais.

🛠 **Tecnologias Utilizadas**
- C++ para desenvolvimento dos algoritmos
- Bibliotecas padrão como `<vector>`, `<iostream>`, `<fstream>`, e `<ctime>` para a implementação
- Planilha eletrônica (Microsoft Excel ou similar) para análise e visualização de dados

