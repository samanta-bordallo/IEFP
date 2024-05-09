#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> valores; // Vetor para armazenar os valores

    // Solicitar ao usuário que insira os valores inteiros
    cout << "Insira os valores inteiros (digite um número negativo para parar):\n";
    int valor;
    do {
        cin >> valor;
        if (valor >= 0) {
            valores.push_back(valor); // Adiciona o valor ao vetor
        }
    } while (valor >= 0);

    // Solicitar ao usuário que digite valores para verificar
    cout << "Digite os valores que deseja buscar (digite um número negativo para parar):\n";
    do {
        cin >> valor;
        if (valor >= 0) {
            bool encontrado = false;
            // Verificar se o valor está presente no vetor
            for (int i = 0; i < valores.size(); ++i) {
                if (valores[i] == valor) {
                    encontrado = true;
                    break;
                }
            }
            // Exibir o resultado
            if (encontrado) {
                cout << "O valor " << valor << " está presente no vetor.\n";
            } else {
                cout << "O valor " << valor << " não está presente no vetor.\n";
            }
        }
    } while (valor >= 0);

    return 0;
}

