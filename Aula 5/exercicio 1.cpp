#include <iostream>
#include <memory>
using namespace std;

void versaoOriginal() {
    cout << ">> VERSÃO ORIGINAL (new / delete):" << endl;

    int* ptr = new int(42);

    cout << "   Valor   : " << *ptr << endl;
    cout << "   Endereço: " << ptr  << endl;

    delete ptr;
    ptr = nullptr;

    cout << "   Memória liberada com delete." << endl;
}

void versaoRefatorada() {
    cout << "\n>> VERSÃO REFATORADA (std::make_unique):" << endl;

    unique_ptr<int> ptr = make_unique<int>(42);

    cout << "   Valor    : " << *ptr     << endl;
    cout << "   Endereço : " << ptr.get() << endl;

    cout << "   Memória liberada automaticamente ao sair do escopo." << endl;
}

int main() {
    cout << "======================================" << endl;
    cout << "  Exercício 1 — Raw ptr vs unique_ptr " << endl;
    cout << "======================================\n" << endl;

    versaoOriginal();
    versaoRefatorada();

    cout << "\n======================================\n" << endl;
    return 0;
}
