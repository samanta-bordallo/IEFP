#include <iostream>
using namespace std;

int main() {
    float num1, num2, resultado;
    char operacao;
    bool continuar = true;

    while (continuar) {
        cout << "Escolha a operacao (+, -, *, /) ou digite 0 para sair: ";
        cin >> operacao;
		cout << "Digite o primeiro valor: ";
        cin >> num1;
        cout << "Digite o segundo valor: ";
        cin >> num2;

        

        switch (operacao) {
            case '+':
                resultado = num1 + num2;
                cout << "Resultado: " << resultado << endl;
                break;
            case '-':
                resultado = num1 - num2;
                cout << "Resultado: " << resultado << endl;
                break;
            case '*':
                resultado = num1 * num2;
                cout << "Resultado: " << resultado << endl;
                break;
            case '/':
                if (num2 != 0) {
                    resultado = num1 / num2;
                    cout << "Resultado: " << resultado << endl;
                } else {
                    cout << "Erro: Divisao por zero!" << endl;
                }
                break;
            case '0':
                continuar = false;
                break;
            default:
                cout << "Operacao invalida!" << endl;
                break;
        }
    }

    cout << "Calculadora encerrada." << endl;

    return 0;
}

