#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nomeCompleto;
    int idade;
    float n1, n2, n3, soma, media;

    cout << "Por favor, digite o seu nome completo: ";
    getline(cin, nomeCompleto); 
    
    cout << "Por favor, digite sua idade: ";
    cin >> idade;

    cout << "Por favor, digite suas notas: ";
    cin >> n1 >> n2 >> n3;

    soma = (n1 + n2 + n3);
    media = (soma /3);

    cout << "Seu nome eh: " << nomeCompleto << endl;
    cout << "Sua idade eh: " << idade << endl;
    cout << "Sua media eh:" << fixed << setprecision(2) << media << endl;

    return 0;
}