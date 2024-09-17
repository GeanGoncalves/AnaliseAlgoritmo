#include <iostream>
#include <cstdlib>
#include <cmath>

#define SIZE 100
#define MAX_VALUE 10
#define LENGTH 3

using namespace std;

void counting_sort (int* vet, int* out, int div){
    int aux[MAX_VALUE];
    for(int i=0; i<= MAX_VALUE; i++)
        aux[i]=0;

    for(int i=0; i<SIZE; i++)
        aux [(vet[i]/div)%10] +=1;

    for (int i=1; i<=MAX_VALUE; i++)
        aux[i] += aux [i-1];


    for (int i = SIZE-1; i>=0; i--){
        out[aux[(vet[i]/div)%10]-1] = vet[i];
        aux[(vet[i]/div)%10] -= 1;
    }

    for(int i=0; i<SIZE;i++)
        vet[i] = out[i];
}
int max_value(int* vet){
    int m = vet[0];
    for(int i = 0; i < SIZE; i++)
        if(m < vet[i]) m = vet[i];
    return m;
}
void radix_sort(int* vet, int* out){
    int maior = max_value(vet);
    for (int div = 1;maior/div >0; div *=10)
        counting_sort(vet, out,div);
}

int main()
{
    int vet1[SIZE],vet1_out[SIZE];

    for(int i = 0; i < SIZE; i++)
        vet1[i] = 100 + rand() % ((int)pow(10,LENGTH)-100);

    for(int i = 0; i < SIZE; i++)
    cout << vet1[i] << " ";

        cout << "\nVetor Ordenado: " << endl;
        radix_sort(vet1, vet1_out);
        for(int i =0; i< SIZE; i++)
            cout << vet1_out[i] << " ";
        return 0;


}
