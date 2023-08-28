#include <iostream>
#include <iomanip>

 

using namespace std;

 

int main(void){
    float HT, VH, PD, TD, SB, SL;
    cout << setprecision(2); //Fixa em duas casas decimais
    cout << setiosflags(ios::right); //Tabulação a partir da direita
    cout << setiosflags(ios::fixed); //Estabelece a apresentação do ponto decimal
    cout << "Entre com a quantidade de horas trabalhadas.: "; cin >> HT;
    cout << "Entre com o valor da hora de trabalho..............: "; cin >> VH;
    cout << "Entre com o valor do percentual de desconto..: "; cin >> PD;
    SB = HT * VH;
    TD = (PD / 100) * SB;
    SL = SB - TD;
    cout << "O Salario Bruto....: " << setw(8) << SB << endl;
    cout << "Desconto..............: " << setw(8) << TD << endl;
    cout << "O Salario Liquido.: " << setw(8) << SL << endl;
    system ("pause");
    return 0;
}
