#include <iostream>
#include <iomanip>

using namespace std;

int soma(int num1, int num2){
    return num1 + num2;
}

int main(){
    int num1;
    int num2;

    cout << "Digite o primeiro numero:";
    cin >> num1;
    cout << "Digite o segundo numero:";
    cin >>num2;

    cout << "Resultado:" << soma(num1, num2) << endl;

    return 0;
}