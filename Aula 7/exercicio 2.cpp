#include <iostream>
using namespace std;

class Contador {
private:
    int valor;

public:
    Contador(int valor = 0) : valor(valor) {}

    int getValor() { return valor; }

    Contador& operator++() {
        ++valor;
        return *this;
    }

    Contador operator++(int) {
        Contador anterior = *this;
        valor++;
        return anterior;
    }
};

int main() {
    Contador c(5);

    cout << "Valor inicial: " << c.getValor() << endl;

    cout << "\n-- Pré-fixado (++c) --" << endl;
    Contador pre = ++c;
    cout << "Retorno do ++c  : " << pre.getValor() << endl;
    cout << "Valor de c após : " << c.getValor()   << endl;

    cout << "\n-- Pós-fixado (c++) --" << endl;
    Contador pos = c++;
    cout << "Retorno do c++  : " << pos.getValor() << endl;
    cout << "Valor de c após : " << c.getValor()   << endl;

    return 0;
}
