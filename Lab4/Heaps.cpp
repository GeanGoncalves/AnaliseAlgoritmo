#include <iostream>
#include <cstdlib>
#define SIZE 20
using namespace std;

class MinHeap {
  private:
    int vet[SIZE];
    int elems;
    void heapfy_down(int);
    void heapfy_up(int);
  public:
    MinHeap() { elems = 0; }
    ~MinHeap() {}
    bool empty(){ return (elems == 0? true: false);}
    int top(){return vet[0];}
    void push(int);
    void pop();
};

void MinHeap::heapfy_down(int i) {
    int esq = 2*i+1; // filho do lado esquerdo
    int dir = 2*i+2; // filho do lado direito
    int menor, aux;

    // escolhe maior valor entre os filhos (esq e dir)
    menor = i;
    if((esq < elems) && (vet[esq] < vet[menor]))
        menor = esq;
    if((dir < elems) && (vet[dir] < vet[menor]))
        menor = dir;

    // se um dos filhos for maior que o pai, troca.
    if(menor != i) {
    aux = vet[i];
    vet[i] = vet[menor];
    vet[menor] = aux;

    // continua descida até local adequado
    heapfy_down(menor);
    }
}

void MinHeap::heapfy_up(int i) {
    int aux, parent = (i-1)/2;

    if(parent >= 0 && vet [parent] > vet [i]){
        aux = vet [i];
        vet[i]= vet [parent];
        vet[parent] = aux;

        heapfy_up(parent);
    }
}
void MinHeap::push(int el) {
if (elems <SIZE){
    vet[elems] = el;
    heapfy_up(elems);
    elems++;
}

}

void MinHeap::pop() {
    if(!empty())
 vet[0] = vet[elems-1];
 elems--;
 heapfy_down(0);

}



// ------------------------------- Fim da classe

void init_vetor(int *v) {
  for(int i = 0; i < SIZE; i++)
    v[i] = rand() % 100;
}

int main() {
  MinHeap heap;
  int vet[SIZE];
  init_vetor(vet);

  // insere elementos do vetor na heap
  cout << "\nInserindo elementos da Heap:\n";
  for(int i = 0; i < SIZE; i++) {
    cout << vet[i] << " ";
    heap.push(vet[i]);
  }

  // remove todos os elementos da heap, em ordem (do menor pro maior)
  cout << "\nRemovendo todos os elementos da Heap:\n";
  while(!heap.empty()) {
    cout << heap.top() << " ";
    heap.pop();
  }

  return 0;
}
