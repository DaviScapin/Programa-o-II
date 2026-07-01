// ============================================================
// Exercício 2 — Array de double com Notação de Ponteiro
// Lê até 100 valores usando *(a + j) para armazenar,
// acumula com *(aPtr + j) e exibe a soma e a média.
// ============================================================

#include <iostream>
#include <iomanip>   // setprecision, fixed
using namespace std;

int main() {

    const int MAX = 100;        // tamanho máximo do array
    double a[MAX];              // array de até 100 doubles
    double* aPtr = a;           // ponteiro que aponta para o início do array
    int n = 0;                  // quantidade de valores digitados
    double soma = 0.0;

    cout << "======================================" << endl;
    cout << "  Exercício 2 — Array via Ponteiros   " << endl;
    cout << "======================================" << endl;
    cout << "\nDigite até " << MAX << " valores double." << endl;
    cout << "Para encerrar, digite um valor não numérico (ex: 'fim')." << endl;

    // --- Leitura dos valores usando *(a + j) conforme exigido ---
    for (int j = 0; j < MAX; j++) {

        cout << "  Valor [" << j + 1 << "]: ";

        // Exigência: usar *(a + j) para armazenar em a[j]
        if (!(cin >> *(a + j))) {
            // usuário digitou algo não numérico → encerra
            break;
        }

        n++;   // conta quantos valores foram lidos com sucesso
    }

    if (n == 0) {
        cout << "\nNenhum valor foi digitado." << endl;
        return 0;
    }

    // --- Acumulação usando *(aPtr + j) conforme exigido ---
    for (int j = 0; j < n; j++) {
        // Exigência: usar *(aPtr + j) para acessar a[j]
        soma += *(aPtr + j);
    }

    double media = soma / n;

    // --- Exibição dos resultados ---
    cout << "\n======================================" << endl;
    cout << "  Resultados" << endl;
    cout << "======================================" << endl;
    cout << fixed << setprecision(2);
    cout << "  Valores lidos : " << n       << endl;
    cout << "  Soma          : " << soma    << endl;
    cout << "  Média         : " << media   << endl;
    cout << "======================================\n" << endl;

    return 0;
}
