#include <iostream>
using namespace std;

class MatrizDinamica {
private:
    int** dados;
    int   linhas;
    int   colunas;

public:
    MatrizDinamica(int linhas, int colunas) : linhas(linhas), colunas(colunas) {
        dados = new int*[linhas];
        for (int i = 0; i < linhas; i++)
            dados[i] = new int[colunas]();
    }

    MatrizDinamica(const MatrizDinamica& outra) : linhas(outra.linhas), colunas(outra.colunas) {
        dados = new int*[linhas];
        for (int i = 0; i < linhas; i++) {
            dados[i] = new int[colunas];
            for (int j = 0; j < colunas; j++)
                dados[i][j] = outra.dados[i][j];
        }
    }

    ~MatrizDinamica() {
        for (int i = 0; i < linhas; i++)
            delete[] dados[i];
        delete[] dados;
    }

    void set(int i, int j, int valor) { dados[i][j] = valor; }
    int  get(int i, int j)            { return dados[i][j];  }

    void exibir() {
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++)
                cout << dados[i][j] << "\t";
            cout << endl;
        }
    }
};

int main() {
    MatrizDinamica m1(2, 3);
    m1.set(0, 0, 1); m1.set(0, 1, 2); m1.set(0, 2, 3);
    m1.set(1, 0, 4); m1.set(1, 1, 5); m1.set(1, 2, 6);

    cout << "Matriz original:" << endl;
    m1.exibir();

    MatrizDinamica m2 = m1;

    m2.set(0, 0, 99);

    cout << "\nCópia após alterar (0,0) para 99:" << endl;
    m2.exibir();

    cout << "\nOriginal inalterada (cópia profunda):" << endl;
    m1.exibir();

    return 0;
}
