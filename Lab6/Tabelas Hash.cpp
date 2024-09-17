#include <iostream>
#include <string>
using namespace std;

#define SIZE 20

class Carro {
private:
    string placa;
    string modelo;

public:
    Carro(string p, string m) : placa(p), modelo(m) {}
    ~Carro() {}
    string getPlaca() { return placa; }
    string getModelo() { return modelo; }
};

class HashTable {
private:
    Carro* tabela[SIZE];
    Carro* dummy;
public:
    HashTable() {
        for (int i = 0; i < SIZE; i++) {
            tabela[i] = nullptr;
        dummy = new Carro("","");
        }
    }

    ~HashTable() {}

    int hash(string key) {
        int valor = 0;
        for (char c : key) {
            valor += int(c);
        }
        return valor % SIZE;
    }

Carro*get(string key){
    int h ,probe = 0;

    while(probe<SIZE){
        h = (hash(key)+probe)%SIZE;
        if(tabela[h]==nullptr)
            return nullptr;
        if (tabela[h]->getPlaca()==key)
        return tabela[h];
        probe++;
    }
    return nullptr;
  }

bool put(string key, Carro* value) {
        int h, probe = 0;
        while (probe< SIZE){
            h = (hash(key)+ probe) % SIZE;
            if(tabela[h]==nullptr || tabela[h]-> getPlaca()== ""){
                tabela[h] = value;
                return true;
            }
            probe++;
        }
     return false;

    }

Carro*remove(string key) {
       int h, probe = 0;

        while(probe<SIZE){
        h =(hash(key)+ probe) %SIZE;
        if(tabela[h]!= nullptr && tabela[h]->getPlaca()==key){
            Carro*a=tabela[h];
            tabela[h]=dummy;
            return a;
        }
        probe++;
    }

    return nullptr;
}


   void print() {
        for (int i = 0; i < SIZE; i++) {
            cout<< i << ": ";
            if (tabela[i] == nullptr) cout << "\n";
            else if (tabela[i] -> getPlaca()=="") cout << "APAGADO\n";
            else cout << tabela[i] -> getModelo() << " - " << tabela [i] ->getPlaca() << "\n";
        }


}
};

int main() {
    HashTable tabela;

    Carro* c1 = new Carro("BRA2E29", "Gol");
    Carro* c2 = new Carro("LSN4C49", "HB20");
    Carro* c3 = new Carro("BEE4R23", "Celta");
    Carro* c4 = new Carro("NYS4A35", "HB20");
    Carro* c5 = new Carro("PHL4F06", "Onix");

    tabela.put(c1->getPlaca(), c1);
    tabela.put(c2->getPlaca(), c2);
    tabela.put(c3->getPlaca(), c3);
    tabela.put(c4->getPlaca(), c4);
    tabela.put(c5->getPlaca(), c5);

    cout << "Tabela Hash (1): \n";
    tabela.print();

    cout << "\nRemovendo um veiculo...\n";
    tabela.remove(c3->getPlaca());

    cout << "\nTabela Hash (2): \n";
    tabela.print();

    return 0;
}
