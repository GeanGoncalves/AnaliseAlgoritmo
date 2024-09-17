#include<iostream>
#include<queue>
#include<cstring>
#include <stack>

#define SIZE 10

using namespace std;

bool visitado[SIZE];
int grafo[SIZE][SIZE];

// void dfs(int u) {
//   if(visitado[u]) return;
//   visitado[u] = true;
//   cout << u << " ";
//
//   for(int i = 0; i < SIZE; i++) {
//     if(grafo[u][i]) dfs(i);
//   }
// }

void dfs(int start) {
  if(visitado[start]) return;
  stack<int> pilha;
  pilha.push(start);
  visitado[start] = true;

  while(!pilha.empty()) {
    int u = pilha.top(); pilha.pop();
    cout << u << " ";

    for(int i = SIZE-1; i >=0 ; i--) {
      if((grafo[u][i])&&(!visitado[i])){
        pilha.push(i);
        visitado[i] = true;
      }
    }
  }
}

void bfs(int start) {
  queue<int> lista;
  lista.push(start);
  visitado[start] = true;
  cout << start << " ";

  while(!lista.empty()) {
    int u = lista.front(); lista.pop();

    for(int i = 0; i < SIZE; i++) {
      if((grafo[u][i])&&(!visitado[i])) {
        lista.push(i);
        visitado[i] = true;
        cout << i << " ";
      }
    }
  }
}

void explore(int t){
  for(int i = 0;i < SIZE;i++) visitado[i] = false;

  if(t == 1){
    for(int i = 0;i < SIZE;i++)
      if(!visitado[i]) dfs(i);
  }else{
    for(int i = 0;i < SIZE;i++)
      if(!visitado[i]) bfs(i);
  }
}

int main(){
  int arestas;
  int fonte, destino;

  //zera matriz de adjacencias
  memset(grafo, 0, sizeof grafo);

  cout << "Entre com a quantidade de arestas: ";
  cin >> arestas;

  //ler o grafo e preencher matriz de adjacencia
  cout << "Entre com todas as arestas: \n";
  for(int i = 0;i < arestas;i++){
    cin >> fonte >> destino;
    grafo[fonte][destino] = 1;
    grafo[destino][fonte] = 1;
  }


  cout << "  ";
  for(int i = 0;i <= 9;i++) cout << i << " ";
  cout << endl;
  for(int i = 0;i < SIZE;i++){
    cout << i << " ";
    for(int j = 0;j < SIZE;j++){
      cout << grafo[i][j] << " ";
    }
    cout << endl;
  }

  //parte do dfs
  cout << "Ordem de visita (DFS):";
  explore(1);
  cout << endl;

  //parte do bfs
  cout << "Ordem de visita (BFS):";
  explore(2);
  cout << endl;

return 0;

}
