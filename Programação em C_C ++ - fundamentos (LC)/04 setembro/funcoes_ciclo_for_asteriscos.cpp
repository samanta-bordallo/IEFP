#include <iostream>
using namespace std;

// Protótipo da função
void desenharTriangulo(int altura);

int main() {
    int altura;

    cout << "Digite a altura do triângulo: ";
    cin >> altura;

    // Chame a função para desenhar o triângulo
    desenharTriangulo(altura);

    system("PAUSE");
    return 0;
}

// Definição da função
void desenharTriangulo(int altura) {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << '*';
        }
        cout << endl;
    }

    for (int i = altura - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << '*';
        }
        cout << endl;
    }
}
