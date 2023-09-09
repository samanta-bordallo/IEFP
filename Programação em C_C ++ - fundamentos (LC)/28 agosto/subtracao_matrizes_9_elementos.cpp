#include <iostream>
using namespace std;

int main()
{
    int MAT1[3][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {7, 8, 9}
    };
    int MAT2[3][3] = {
        {1, 3, 5},
        {7, 8, 9},
        {2, 4, 6}
    };

    // Subtraindo as matrizes
    int R[3][3];
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            R[i][j] = MAT1[i][j] - MAT2[i][j]; // Subtração aqui
        }
    }

    // Exibindo a matriz resultante
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            cout << R[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    system("pause");
    return 0;
}

