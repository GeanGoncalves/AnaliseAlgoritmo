#include <iostream>
#include <vector>

using namespace std;

struct Pedido {
    int quant;
    int temp;
};

int auxMaiorSalario(const vector<Pedido>& pedidos, int tempoDisponivel) {
    int n = pedidos.size();
    vector<vector<int>> dp(n + 1, vector<int>(tempoDisponivel + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= tempoDisponivel; j++) {
            
            if (pedidos[i - 1].temp <= j) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - pedidos[i - 1].temp] + pedidos[i - 1].quant);
            } 
            
            else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][tempoDisponivel] * 5; // Cada encomenda vale R$5
}

int main() {
    vector<Pedido> pedidos = {
        {1, 10},
        {5, 45},
        {3, 60},
        {2, 30},
        {1, 25},
        {6, 80},
        {4, 60},
        {3, 25},
        {5, 75},
        {3, 45}
    };

    int tempoDisponivel = 240; // 4 horas

    int maiorSalario = auxMaiorSalario(pedidos, tempoDisponivel);
    int totalEncomendas = maiorSalario / 5;

    cout << "No maximo, ele conseguiria entregar " << totalEncomendas << " encomendas, e receberia " << maiorSalario << " reais pelo servico." << endl;

    return 0;
}
