#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

void exibirTexto(stack<string> copia) {
    if (copia.empty()) {
        cout << "   [editor vazio]" << endl;
        return;
    }
    vector<string> palavras;
    while (!copia.empty()) {
        palavras.push_back(copia.top());
        copia.pop();
    }
    cout << "   Texto atual: ";
    for (int i = (int)palavras.size() - 1; i >= 0; i--) {
        cout << palavras[i];
        if (i > 0) cout << " ";
    }
    cout << endl;
    cout << "   Total de palavras: " << palavras.size() << endl;
}

void exibirPilha(stack<string> copia) {
    if (copia.empty()) {
        cout << "   [pilha vazia]" << endl;
        return;
    }
    cout << "   Pilha (topo -> base):" << endl;
    while (!copia.empty()) {
        cout << "   | " << copia.top() << " |" << endl;
        copia.pop();
    }
}

int main() {
    cout << "======================================" << endl;
    cout << "  Exercício 4 — Editor de Texto       " << endl;
    cout << "======================================\n" << endl;

    stack<string> editor;
    int opcao;
    string palavra;

    do {
        cout << "-------- MENU --------"                   << endl;
        cout << " 1. Digitar palavra       (push)"  << endl;
        cout << " 2. Desfazer última       (pop)"   << endl;
        cout << " 3. Ver última palavra    (top)"   << endl;
        cout << " 4. Exibir texto atual"            << endl;
        cout << " 5. Exibir pilha interna"          << endl;
        cout << " 6. Tamanho da pilha      (size)"  << endl;
        cout << " 0. Sair"                          << endl;
        cout << "Opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite uma palavra: ";
                cin >> palavra;
                editor.push(palavra);
                cout << "   \"" << palavra << "\" adicionada ao texto." << endl;
                exibirTexto(editor);
                break;

            case 2:
                if (editor.empty()) {
                    cout << "   O editor está vazio. Nada para desfazer." << endl;
                } else {
                    cout << "   Removendo: \"" << editor.top() << "\"" << endl;
                    editor.pop();
                    cout << "   Palavra desfeita." << endl;
                    exibirTexto(editor);
                }
                break;

            case 3:
                if (editor.empty())
                    cout << "   O editor está vazio." << endl;
                else
                    cout << "   Última palavra digitada: \"" << editor.top() << "\"" << endl;
                break;

            case 4:
                exibirTexto(editor);
                break;

            case 5:
                exibirPilha(editor);
                break;

            case 6:
                cout << "   Palavras na pilha: " << editor.size() << endl;
                break;

            case 0:
                cout << "Saindo do editor..." << endl;
                break;

            default:
                cout << "Opção inválida." << endl;
        }
        cout << endl;

    } while (opcao != 0);

    return 0;
}
