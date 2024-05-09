#include <iostream>
using namespace std;
// Função para calcular a média de três números
double calcularMedia(double num1, double num2, double num3) {
    return (num1 + num2 + num3) / 3.0;
}

int main() {
    double a, b, c;

    cout << "Digite três números: ";
    cin >> a >> b >> c;

    double media = calcularMedia(a, b, c);
    cout << "A média é: " << media << endl;

    return 0;
}
