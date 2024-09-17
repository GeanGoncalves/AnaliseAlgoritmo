#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void bubbleSort(int vetor[], int tam){
  int aux;
  for(int i = 0;i < tam;i++){
    for(int j = 0; j < tam-1-i;j++){
      if(vetor[j+1] < vetor[j]){
        aux = vetor[j];
        vetor[j] = vetor[j+1];
        vetor[j+1] = aux;
      }
    }
  }
}

void selectionSort(int vetor[], int tam){
  int min, aux;
  for(int i = 0;i < (tam-1);i++){
    min = i;
    for(int j = (i+1); j < tam;j++){
      if(vetor[j] < vetor[min]) min = j;//encontra a posição do menor elemento
    }
    aux = vetor[i];
    vetor[i] = vetor[min];
    vetor[min] = aux;
  }
}

void printVet(int vetor[], int tam){
  cout << "[";
  for(int i = 0;i < tam-1;i++){
    cout << " " << vetor[i] << ",";
  }
  cout << " " << vetor[tam-1] << " ]\n";
}

int main(){
  int n, aux, *v1, *v2;
  int tini, tfim, tms;//poderia usar o tipo clock_t

  cout << "Entre com o tamanho do vetor.\n\tn = ";
  cin >> n;

  v1 = new int[n];
  v2 = new int[n];

  for(int i = 0; i < n;i++){
    aux = rand()%1000;
    v1[i] = aux;
    v2[i] = aux;
  }

    //comentado para testar caso grandes
   /*cout << "Vetores sorteados:\n\t";
   printVet(v1,n);
   cout << "\t";
   printVet(v2,n);*/

   cout << "\nTempos utilizados na ordenacao:\n";

   tini = (int) clock();
   bubbleSort(v1,n);
   tfim = (int) clock();
   cout << "BubbleSort: " << ((tfim-tini)*1000/CLOCKS_PER_SEC) << " ms" << endl;

   tini = (int) clock();
   selectionSort(v2,n);
   tfim = (int) clock();
   cout << "SelectionSort: " << ((tfim-tini)*1000/CLOCKS_PER_SEC) << " ms" << endl << endl;

   /*cout << "Vetores ordenados:\n\t";
   printVet(v1,n);
   cout << "\t";
   printVet(v2,n);*/

  delete[] v1;
  delete[] v2;

return 0;

}
