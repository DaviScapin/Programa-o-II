#include <iostream>
#include <list>
using namespace std;

void exibirLista(const list<int>& lista) {
    if (lista.empty()) {
        cout << "   [lista vazia]" << endl;
        return;
    }
    cout << "   Lista: [ ";
    for (const int& val : lista)
        cout << val << " ";
    cout << "]  |  Tamanho: " << lista.size() << endl;
}

int main() {
    cout << "======================================" << endl;
    cout << "  Exercício 2 — Gerenciador de Lista  " << endl;
    cout << "======================================\n" << endl;

    list<int> lista;
    int opcao, valor;

    do {
        cout << "-------- MENU --------"              << endl;
        cout << " 1. Inserir no FINAL   (push_back)"  << endl;
        cout << " 2. Inserir no INÍCIO  (push_front)" << endl;
        cout << " 3. Remover por valor  (remove)"     << endl;
        cout << " 4. Exibir tamanho     (size)"       << endl;
        cout << " 5. Exibir lista"                    << endl;
        cout << " 0. Sair"                            << endl;
        cout << "Opção: ";
        cin  >> opcao;

        switch (opcao) {
            case 1:
                cout << "Valor para inserir no final: ";
                cin >> valor;
                lista.push_back(valor);
                cout << "   " << valor << " inserido no final." << endl;
                exibirLista(lista);
                break;

            case 2:
                cout << "Valor para inserir no início: ";
                cin >> valor;
                lista.push_front(valor);
                cout << "   " << valor << " inserido no início." << endl;
                exibirLista(lista);
                break;

            case 3:
                cout << "Valor a remover: ";
                cin >> valor;
                lista.remove(valor);
                cout << "   Todas as ocorrências de " << valor << " removidas." << endl;
                exibirLista(lista);
                break;

            case 4:
                cout << "   Tamanho atual da lista: " << lista.size() << endl;
                break;

            case 5:
                exibirLista(lista);
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
