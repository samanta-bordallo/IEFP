#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Função recursiva para encontrar o valor máximo em um vetor
int encontrarMaximo(const vector<int>& vetor, int tamanho) {
    if (tamanho == 1) {
        return vetor[0];
    }
    int maximoRestante = encontrarMaximo(vetor, tamanho - 1);
    return max(maximoRestante, vetor[tamanho - 1]);
}

// Função recursiva para encontrar o valor mínimo em um vetor
int encontrarMinimo(const vector<int>& vetor, int tamanho) {
    if (tamanho == 1) {
        return vetor[0];
    }
    int minimoRestante = encontrarMinimo(vetor, tamanho - 1);
    return min(minimoRestante, vetor[tamanho - 1]);
}

int main() {
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    vector<int> vetor(tamanho);
    cout << "Digite os elementos do vetor:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    int maximo = encontrarMaximo(vetor, tamanho);
    int minimo = encontrarMinimo(vetor, tamanho);

    cout << "O valor máximo do vetor é: " << maximo << endl;
    cout << "O valor mínimo do vetor é: " << minimo << endl;

    return 0;
}

