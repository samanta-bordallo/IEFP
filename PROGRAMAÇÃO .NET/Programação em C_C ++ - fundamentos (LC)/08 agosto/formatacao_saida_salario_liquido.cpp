# include <iostream>

using namespace std;


int main(void){

	float HT, VH, PD, TD, SB, SL;
	cout << "Entre com a quantidade de horas trabalhadas.: "; 
	cin >> HT;//10.33
	cout << "Entre com o valor da hora de trabalho.......: "; 
	cin >> VH;//12.5
	cout << "Entre com o valor do percentual de desconto..: "; 
	cin >> PD;//6.5
	SB = HT * VH;
	TD = (PD / 100) * SB;
	SL = SB - TD;
	cout << "O Salario Bruto....: " << SB << endl;
	cout << "Desconto..................: " << TD << endl;
	cout << "O Salario Liquido.: " << SL << endl;
	system ("pause");

return 0;

}
