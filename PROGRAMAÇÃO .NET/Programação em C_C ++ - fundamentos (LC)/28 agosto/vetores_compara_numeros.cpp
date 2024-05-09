#include <iostream>
using namespace std;

int main() {
    int num[3];
    for (int i = 0; i < 3; i++) {
        cout << "Digite o " << i+1 << "º número: ";
        cin >> num[i];
    }

    int numeroIntroduzido;
    cout << "Digite um número para comparação: ";
    cin >> numeroIntroduzido;
    for (int i = 0; i < 3; i++) {
        if (num[i] > numeroIntroduzido) {
            cout << num[i] << " é maior que " << numeroIntroduzido << endl;
        } else if (num[i] < numeroIntroduzido) {
            cout << num[i] << " é menor que " << numeroIntroduzido << endl;
        } else {
            cout << num[i] << " é igual a " << numeroIntroduzido << endl;
        }
    }
    return 0;
}

