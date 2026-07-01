#include <iostream>
#include <string>
using namespace std;

class StringSegura {
private:
    string dados;

public:
    StringSegura(const string& texto) : dados(texto) {}

    StringSegura(const StringSegura&)            = delete;
    StringSegura& operator=(const StringSegura&) = delete;

    StringSegura(StringSegura&&)            = default;
    StringSegura& operator=(StringSegura&&) = default;

    string getDados() const { return dados; }
};

int main() {
    StringSegura s1("Texto original");
    cout << "s1: " << s1.getDados() << endl;

    StringSegura s2 = move(s1);
    cout << "s2 após move: " << s2.getDados() << endl;
    cout << "s1 após move: " << s1.getDados() << " (esvaziada)" << endl;

    cout << "\nTentativa de cópia bloqueada em tempo de compilação:" << endl;
    cout << "  StringSegura s3 = s2;       -> erro de compilação" << endl;
    cout << "  StringSegura s4;  s4 = s2;  -> erro de compilação" << endl;

    return 0;
}
