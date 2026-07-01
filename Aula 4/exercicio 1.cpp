// ============================================================
// Exercício 1 — Variáveis, Conteúdo e Endereços de Memória
// Declara e inicializa duas variáveis inteiras x e y,
// exibe o conteúdo de cada uma e seus endereços de memória.
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // --- Declaração e inicialização das variáveis ---
    int x = 10;
    int y = 25;

    cout << "======================================" << endl;
    cout << "  Exercício 1 — Variáveis e Ponteiros " << endl;
    cout << "======================================" << endl;

    // --- Exibindo o CONTEÚDO das variáveis ---
    cout << "\n>> Conteúdo das variáveis:" << endl;
    cout << "   x = " << x << endl;
    cout << "   y = " << y << endl;

    // --- Exibindo os ENDEREÇOS de memória usando o operador & ---
    cout << "\n>> Endereços de memória (operador &):" << endl;
    cout << "   Endereço de x: " << &x << endl;
    cout << "   Endereço de y: " << &y << endl;

    // --- Usando ponteiros para acessar os mesmos endereços ---
    int* ptrX = &x;   // ptrX aponta para o endereço de x
    int* ptrY = &y;   // ptrY aponta para o endereço de y

    cout << "\n>> Via ponteiros (ptrX e ptrY):" << endl;
    cout << "   ptrX armazena o endereço: " << ptrX  << "  -> valor apontado (*ptrX): " << *ptrX << endl;
    cout << "   ptrY armazena o endereço: " << ptrY  << "  -> valor apontado (*ptrY): " << *ptrY << endl;

    cout << "\n======================================\n" << endl;

    return 0;
}
