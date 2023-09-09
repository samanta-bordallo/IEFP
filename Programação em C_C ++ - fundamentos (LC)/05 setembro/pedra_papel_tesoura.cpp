#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    srand(time_t(0));
    int jog, comp;

    cout << "Escolha um número:" << endl;
    cout << "1-Pedra. 2-Papel. 3-Tesoura." << endl;
    cin >> jog;
    
    comp = rand() % 3 + 1;
    cout << "Computador escolheu: " << comp << endl;

    if (comp == jog) {
        cout << "Empatado" << endl;
    } else if ((comp == 1 && jog == 3) || (comp == 2 && jog == 1) || (comp == 3 && jog == 2)) {
        cout << "Ganhou o computador" << endl;
    } else {
        cout << "Ganhou o utilizador" << endl;
    }

    return 0;
}
