#include <iostream>
#include <iomanip>

using namespace std;

inline double converte(double dolar) {
    return dolar * 5.0;
}

int main(){
    double dolar;
    
    cout << "Digite a quantidade em dolares:";
    cin >> dolar;

    cout << "Resultado:" << converte(dolar) << endl;

}