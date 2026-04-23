#include <iostream>

using namespace std;

const int ANO = 2;
const int TRIMESTRE = 4;

int main() {
    double despesas[ANO][TRIMESTRE];
    double totalGeral = 0.0;

    for (int i = 0; i < ANO; i++) {
        cout << "Ano " << (i + 1) << ":" << endl;
        for (int j = 0; j < TRIMESTRE; j++) {
            cout << "Digite a despesa do trimestre " << (j + 1) << ": ";
            cin >> despesas[i][j];
            totalGeral += despesas[i][j];
        }
        cout << endl;
    }

    cout << "Tabela de Despesas" << endl;
    cout << "------------------" << endl;

    for (int i = 0; i < ANO; i++) {
        double totalAno = 0.0;
        cout << "Ano " << (i + 1) << " -> ";
        
        for (int j = 0; j < TRIMESTRE; j++) {
            cout << despesas[i][j] << "   ";
            totalAno += despesas[i][j];
        }
        
        cout << "- Total do Ano: " << totalAno << endl;
    }

    cout << endl;
    cout << "Valor total de despesas nos 2 anos: " << totalGeral << endl;

    return 0;
}