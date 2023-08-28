#include <iostream>

using namespace std;

int main() {
    char c = '*';
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j <= i; j++) {  // Correção aqui
            cout << c;
        }
        cout << endl;  // Adicionar uma quebra de linha após cada linha de asteriscos
    }

    return 0;
}

