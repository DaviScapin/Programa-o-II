#include <iostream>
#include <string>
using namespace std;

class Veiculo {
public:
    string marca;

    Veiculo(string marca) : marca(marca) {}

    virtual void emitirSom() {
        cout << "Ruído genérico do motor..." << endl;
    }
};

class Carro : public Veiculo {
public:
    int numeroPortas;

    Carro(string marca, int numeroPortas) : Veiculo(marca), numeroPortas(numeroPortas) {}

    void emitirSom() override {
        cout << "Buzina: Beep beep!" << endl;
    }
};

int main() {
    Veiculo v("Genérico");
    Carro   c("Toyota", 4);

    cout << "-- Veiculo --" << endl;
    cout << "Marca : " << v.marca << endl;
    v.emitirSom();

    cout << "\n-- Carro --" << endl;
    cout << "Marca        : " << c.marca        << endl;
    cout << "Numero portas: " << c.numeroPortas << endl;
    c.emitirSom();

    cout << "\n-- Polimorfismo (ponteiro para Veiculo) --" << endl;
    Veiculo* ptr = &c;
    ptr->emitirSom();

    return 0;
}
