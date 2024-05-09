#include <iostream>

using namespace std;

int main() {
    // Ciclo for - pede ao utilizador um numero e escreve os * correspondentes
    char c = '*';
    int num;
    
    cout << "Digite um numero: ";
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cout << c;
    }
    
    cout << endl;

    return 0;
}
