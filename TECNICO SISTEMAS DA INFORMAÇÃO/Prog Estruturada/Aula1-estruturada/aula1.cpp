#include <iostream>
using namespace std;
// Funcao para calcular a media de tres numeros
double calcularMedia(double num1, double num2, double num3) {
    return (num1 + num2 + num3) / 3.0;
}

int main() {
    double a, b, c;

    cout << "Digite tres numeros: ";
    cin >> a >> b >> c;

    double media = calcularMedia(a, b, c);
    cout << "A media : " << media << endl;

    return 0;
}

