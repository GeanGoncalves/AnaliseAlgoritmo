#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

#define N 10000

using namespace std;



    void insertionSort(string vet[], int tam){
    int j;
    string aux;

    for (int i=1; i< tam; i++){
        aux=vet[i];

    for(j=i-1;(j>=0)&& ( vet [j]>aux); j--)
        vet[j+1]=vet[j];
    vet[j+1]=aux;
    }
    }

    void shellSort (string *vet, int tam){
    int j, h;
    string aux ;
    h= tam/2;

    while(h >=1){
        for (int i=1; i<tam; i++){
            aux = vet[i];
            for(j = i-h; (j>=0) && (vet[j] > aux); j = j-h)
                vet [j+h] = vet[j];
            vet [j+h]=aux;
        }
        h=h/2;
    }
    }

     void mergeIntercala (string *vet, string *aux, int ini, int meio, int fin){
     int atual, fimEsq, n;
     atual = ini;
     fimEsq = meio-1;
     n= fin - ini + 1;

     while ((ini <= fimEsq)&& (meio <=fin)){
        if(vet[ini]<=vet[meio])
            aux[atual++]= vet[ini++];
        else
            aux[atual++] = vet [meio++];
     }
     while(ini <= fimEsq)
        aux[atual++] = vet [ini++];
     while(meio <= fin)
        aux[atual++] = vet[meio++];
     for(int i=0; i<n; i++);
     fin--;
     }

     void mergeDivide (string *vet, string *aux, int ini, int fin){
         int meio;

         if (fin > ini){
            meio = (fin+ini)/2;
            mergeDivide(vet, aux , ini, meio);
            mergeDivide(vet, aux,meio+1, fin);
            mergeIntercala(vet, aux, ini, meio+1, fin);

         }
    }

    void mergeSort(string *vet,int tam){
    string aux [tam];
    mergeDivide(vet, aux, 0, tam-1);
    }


     void print(string *words){
     for(int i=0; i<N; i++)
     cout << words[i] <<endl;
     }

     void ler_arquivo(string *vet){
    ifstream arquivo ("aurelio4000.txt");
    if(arquivo){
        for(int i=0; i<N; i++)
            arquivo >> vet [i];
            arquivo.close();
    }
    }

int main(){
    string vet[N];
    clock_t tini, tfim,tms;

    ler_arquivo(vet);
    tini = clock();
    insertionSort(vet,N);
    tfim = clock();
    print (vet);
    cout << "Tempo total: " <<tms << "ms" << "\n";
    return 0;
}


