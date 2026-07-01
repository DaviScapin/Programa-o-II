#include <iostream>
#include <queue>
#include <string>
using namespace std;

void exibirFila(queue<string> copia) {
    if (copia.empty()) {
        cout << "   [fila vazia]" << endl;
        return;
    }
    int pos = 1;
    cout << "   Fila de documentos (frente -> fim):" << endl;
    while (!copia.empty()) {
        cout << "   [" << pos++ << "] " << copia.front() << endl;
        copia.pop();
    }
}

int main() {
    cout << "======================================" << endl;
    cout << "  Exercício 3 — Fila de Documentos   " << endl;
    cout << "======================================\n" << endl;

    queue<string> filaDocs;
    int opcao;
    string documento;

    do {
        cout << "-------- MENU --------"                          << endl;
        cout << " 1. Adicionar documento à fila  (push)"  << endl;
        cout << " 2. Processar próximo documento (pop)"   << endl;
        cout << " 3. Ver próximo documento       (front)" << endl;
        cout << " 4. Exibir toda a fila"                  << endl;
        cout << " 5. Tamanho da fila             (size)"  << endl;
        cout << " 0. Sair"                                << endl;
        cout << "Opção: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1:
                cout << "Nome/ID do documento: ";
                getline(cin, documento);
                filaDocs.push(documento);
                cout << "   Documento \"" << documento << "\" adicionado à fila." << endl;
                cout << "   Total na fila: " << filaDocs.size() << endl;
                break;

            case 2:
                if (filaDocs.empty()) {
                    cout << "   Nenhum documento na fila." << endl;
                } else {
                    cout << "   Processando: \"" << filaDocs.front() << "\"" << endl;
                    filaDocs.pop();
                    cout << "   Documento processado e removido da fila." << endl;
                    cout << "   Restantes: " << filaDocs.size() << endl;
                }
                break;

            case 3:
                if (filaDocs.empty())
                    cout << "   Fila vazia." << endl;
                else
                    cout << "   Próximo a ser processado: \"" << filaDocs.front() << "\"" << endl;
                break;

            case 4:
                exibirFila(filaDocs);
                break;

            case 5:
                cout << "   Documentos na fila: " << filaDocs.size() << endl;
                break;

            case 0:
                cout << "Saindo..." << endl;
                break;

            default:
                cout << "Opção inválida." << endl;
        }
        cout << endl;

    } while (opcao != 0);

    return 0;
}
