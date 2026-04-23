#include <iostream>
#include <iomanip>

using namespace std;

struct Investimento{
    double Aporte;
    double taxa;
    int meses;
};

int main(){


    Investimento meuPlano;
    double teto;
    double saldo = 0;

    cout << "Digite o Aporte Mensal:"<< endl;
    cin >> meuPlano.Aporte;
    cout << "Digite a Taxa:"<< endl;
    cin >> meuPlano.taxa;
    cout << "Digite a quantidade de meses:"<< endl;
    cin >> meuPlano.meses;
    cout << "Digite o teto:"<< endl;
    cin >> teto;

    for(int i = 1; i <= meuPlano.meses; i++){
        double rendimento;
        saldo += meuPlano.Aporte;
        rendimento = saldo * (meuPlano.taxa / 100.0);
        saldo += rendimento;

        if(rendimento > teto){
            cout << "Valor acima do teto!";
            break;
        }
    }
    cout << "Saldo Final:" << saldo << endl;
}