#include <iostream>
using namespace std;

class Termometro {
private:
    double temperaturaCelsius;

public:
    Termometro() {
        temperaturaCelsius = 25.0;
    }

    void setTemperaturaCelsius(double temp) {
        if (temp < -273.15)
            cout << "Erro: temperatura abaixo do zero absoluto (-273.15°C)." << endl;
        else
            temperaturaCelsius = temp;
    }

    double getTemperaturaCelsius() {
        return temperaturaCelsius;
    }

    double getTemperaturaFahrenheit() {
        return temperaturaCelsius * 9.0 / 5.0 + 32.0;
    }
};

int main() {
    Termometro t;

    cout << "Temperatura inicial:" << endl;
    cout << "  Celsius   : " << t.getTemperaturaCelsius()    << " °C" << endl;
    cout << "  Fahrenheit: " << t.getTemperaturaFahrenheit() << " °F" << endl;

    cout << "\nSetando para 100°C:" << endl;
    t.setTemperaturaCelsius(100);
    cout << "  Celsius   : " << t.getTemperaturaCelsius()    << " °C" << endl;
    cout << "  Fahrenheit: " << t.getTemperaturaFahrenheit() << " °F" << endl;

    cout << "\nSetando para -273.15°C (zero absoluto):" << endl;
    t.setTemperaturaCelsius(-273.15);
    cout << "  Celsius   : " << t.getTemperaturaCelsius()    << " °C" << endl;
    cout << "  Fahrenheit: " << t.getTemperaturaFahrenheit() << " °F" << endl;

    cout << "\nTentando setar -300°C:" << endl;
    t.setTemperaturaCelsius(-300);

    return 0;
}
