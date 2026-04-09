#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomeCompleto;
    int idade;
    float altura;

    cout << "Por favor, digite o seu nome completo: ";
    getline(cin, nomeCompleto); 
    
    cout << "Por favor, digite sua idade: ";
    cin >> idade;

    cout << "Por favor, digite sua altura em metros: ";
    cin >> altura;

    cout << "Seu nome eh: " << nomeCompleto << endl;
    cout << "Sua idade eh: " << idade << endl;
    cout << "Sua altura eh: " << altura << "m" << endl;

    return 0;
}