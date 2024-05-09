#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> nomes; // Vetor para armazenar os nomes

    // Solicitar ao usuário que insira os nomes
    cout << "Insira os nomes (digite 'fim' para parar):\n";
    string nome;
    while (true) {
        cin >> nome;
        if (nome == "fim") {
            break; // Se o usuário digitar "fim", interrompe a entrada de nomes
        }
        nomes.push_back(nome); // Adiciona o nome ao vetor
    }

    // Solicitar ao usuário que digite um nome para verificar
    cout << "Digite um nome para verificar se está na lista: ";
    cin >> nome;

    // Verificar se o nome está na lista
    bool encontrado = false;
    for (size_t i = 0; i < nomes.size(); ++i) {
        if (nomes[i] == nome) {
            encontrado = true;
            break;
        }
    }

    // Exibir o resultado
    if (encontrado) {
        cout << nome << " está na lista.\n";
    } else {
        cout << nome << " não está na lista.\n";
    }

    return 0;
}

