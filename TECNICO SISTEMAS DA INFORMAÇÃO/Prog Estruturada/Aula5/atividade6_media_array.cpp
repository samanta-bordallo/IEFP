#include <iostream>
using namespace std;

int main() {
    const int tamanho = 10; 
    int numeros[tamanho];

    cout << "Digite " << tamanho << " valores inteiros:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> numeros[i];
    }
    int soma = 0;
    for (int i = 0; i < tamanho; ++i) {
        soma += numeros[i];
    }
    double media = static_cast<double>(soma) / tamanho;
    cout << "Array de inteiros:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    cout << "Média dos valores do array: " << media << endl;

    return 0;
}

