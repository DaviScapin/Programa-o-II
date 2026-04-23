#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int dia;
    int mes;
    int ano;

    cout << "Digite o dia:";
    cin >> dia;
    if(dia > 31 || dia < 1){
        cout << "Dia invalido!";
        return 0;
    }
    cout << "Digite o mes:";
    cin >> mes;
        if(mes > 12 || mes < 1){
        cout << "Mes invalido!";
        return 0;
    }
    cout << "Digite o ano:";
    cin >> ano;

    cout << "A data eh: " << dia << "/"<< mes << "/"<< ano;
    return 0;
}