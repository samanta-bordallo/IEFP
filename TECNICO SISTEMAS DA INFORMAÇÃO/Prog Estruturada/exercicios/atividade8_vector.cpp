#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros(10);
    cout << "Digite 10 valores inteiros:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Mostra o conteúdo do vector
    cout << "Conteúdo do vector:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
