#include <iostream>

using namespace std;

int main() {
    char c = '*';
    int height = 10; // Altura do triângulo

    for (int i = 0; i < height; i++) {
        // Imprimir espaços em branco
        for (int j = 0; j < height - i - 1; j++) {
            cout << " ";
        }
        
        // Imprimir asteriscos da primeira metade do triangulo
        for (int j = 0; j <= i; j++) {
            cout << c;
        }

        // Imprimir asteriscos da segunda metade do triangulo
        for (int j = 0; j < i; j++) {
            cout << c;
        }

        cout << endl;
    }

    return 0;
}

