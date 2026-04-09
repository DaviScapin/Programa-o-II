#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    string nomeCompleto;
    float salario;

    cout << "Por favor, digite o seu nome completo: ";
    getline(cin, nomeCompleto); 

    cout << "Por favor, digite o seu salario: ";
    cin >> salario;

    cout << "Seu nome eh: " << nomeCompleto << endl;
    cout << "Salario: R$ " << fixed << setprecision(2) << salario << endl;

    return 0;
}