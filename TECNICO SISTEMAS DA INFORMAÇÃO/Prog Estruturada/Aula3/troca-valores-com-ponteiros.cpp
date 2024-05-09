#include <iostream>
using namespace std;

void trocarValores(int* ptr_a, int* ptr_b) {
    int temp = *ptr_a; 
    *ptr_a = *ptr_b;   
    *ptr_b = temp;     
}

int main() {
    int a = 5;
    int b = 10;
    int c = 15;
    int d = 20;
   
    cout << "Valores originais: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << endl;
   
    // Troca os valores de a e b
    trocarValores(&a, &b);
    // Troca os valores de c e d
    trocarValores(&c, &d);
   
    cout << "Valores trocados: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << endl;
   
    return 0;
}

