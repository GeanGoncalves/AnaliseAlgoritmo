#include <iostream>
#define INFINITY 1000000
#define GRAPH_SIZE 6

using namespace std;

void PRIM_maroto(int pesos[GRAPH_SIZE][GRAPH_SIZE], int source, int nodecount)
{
    int custo[nodecount];
    int custototal = 0;
    int anterior[nodecount];
    bool fechado[nodecount];
    
    int vcm = -1;

    for(int i = 0; i < nodecount; i++)
    {
        custo[i] = INFINITY;
        anterior[i] = -1;
        fechado[i] = false;
    }

    custo[source] = 0;

    while(true)
    {
        vcm = -1;
        for(int i = 0; i < nodecount; i++)
            if((!fechado[i]) && ((vcm == -1) || (custo[i] < custo[vcm])))
               vcm = i;

        if (vcm < 0)
            break;

        fechado[vcm] = true;

        for (int i = 0; i < nodecount; i++)
        {
            if ( (!fechado[i]) && (pesos[vcm][i] != 0) && (custo[i] > pesos[vcm][i]))
            {
                custo[i] = pesos[vcm][i];
                anterior[i] = vcm;
            }
        }


    }


    cout << "Inicio: " << source << endl;
    for(int i = 1; i < nodecount; i++)
        cout << i << " - " << anterior[i] << endl;
    cout << endl << endl;

    for(int i = 0; i < nodecount; i++)
        custototal += custo[i];

    cout << "Custo: " << custototal << endl;
}

int main()
{
    int grafo[GRAPH_SIZE][GRAPH_SIZE] = {
        { 0, 5, 6, 4, 0, 0 },
        { 5, 0, 1, 2, 0, 0 },
        { 6, 1, 0, 2, 5, 3 },
        { 4, 2, 2, 0, 0, 4 },
        { 0, 0, 5, 0, 0, 4 },
        { 0, 0, 3, 4, 4, 0 }
    };

    PRIM_maroto(grafo, 0, GRAPH_SIZE);

    return 0;
}
