#include <iostream>
#include <string>
using namespace std;

class ContaBancaria {
private:
    string numeroConta;
    double saldo;

public:
    ContaBancaria(string numeroConta) {
        this->numeroConta = numeroConta;
        this->saldo       = 0;
    }

    double getSaldo() { return saldo; }

    void depositar(double valor) {
        if (valor <= 0)
            cout << "Erro: valor de depósito deve ser maior que zero." << endl;
        else
            saldo += valor;
    }

    void sacar(double valor) {
        if (valor <= 0)
            cout << "Erro: valor de saque deve ser maior que zero." << endl;
        else if (valor > saldo)
            cout << "Erro: saldo insuficiente." << endl;
        else
            saldo -= valor;
    }
};

int main() {
    ContaBancaria conta("001-2345");

    cout << "Saldo inicial: " << conta.getSaldo() << endl;

    cout << "\nDepositando 1000:" << endl;
    conta.depositar(1000);
    cout << "Saldo: " << conta.getSaldo() << endl;

    cout << "\nSacando 400:" << endl;
    conta.sacar(400);
    cout << "Saldo: " << conta.getSaldo() << endl;

    cout << "\nTentando sacar 900 (insuficiente):" << endl;
    conta.sacar(900);

    cout << "\nTentando depositar -50:" << endl;
    conta.depositar(-50);

    cout << "\nSaldo final: " << conta.getSaldo() << endl;

    return 0;
}
