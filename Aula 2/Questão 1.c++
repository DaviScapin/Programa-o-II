#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomeCompleto;
    int idade;

    cout << "Por favor, digite o seu nome completo: ";
    getline(cin, nomeCompleto); 
    
    cout << "Por favor, digite sua idade: ";
    cin >> idade;

    cout << "Seu nome eh: " << nomeCompleto << endl;
    cout << "Sua idade eh: " << idade << endl;

    return 0;
}