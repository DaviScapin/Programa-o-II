#include <iostream>
#include <string>
using namespace std;

class Gato {
private:
    string nome;
    int    idade;
    double peso;

public:
    Gato(string nome, int idade, double peso) {
        this->nome  = nome;
        this->idade = idade;
        setPeso(peso);
    }

    void setPeso(double peso) {
        if (peso <= 0)
            cout << "Erro: peso deve ser maior que zero." << endl;
        else
            this->peso = peso;
    }

    string getNome()  { return nome;  }
    int    getIdade() { return idade; }
    double getPeso()  { return peso;  }
};

int main() {
    Gato g("Mimi", 3, 4.5);

    cout << "Nome  : " << g.getNome()  << endl;
    cout << "Idade : " << g.getIdade() << endl;
    cout << "Peso  : " << g.getPeso()  << endl;

    cout << "\nTentando setar peso -1:" << endl;
    g.setPeso(-1);

    cout << "Tentando setar peso 0:" << endl;
    g.setPeso(0);

    cout << "\nSetando peso válido (5.2):" << endl;
    g.setPeso(5.2);
    cout << "Peso  : " << g.getPeso() << endl;

    return 0;
}
