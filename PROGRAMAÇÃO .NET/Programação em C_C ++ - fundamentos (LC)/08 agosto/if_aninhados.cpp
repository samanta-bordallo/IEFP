#include <iostream>
using namespace std;
int main(void)
{
	float tempo, salario;
	cout << "Entre com o salario: ";
	cin >> salario;
	cout << "Entre com o tempo de servico: ";
	cin >> tempo;
	if(tempo>1)
		if(tempo <10)
			salario=1.1*salario;
		else
			salario=1.25*salario;
	cout << " Salario com abono = "<< salario << endl;
	system ("pause");
	return 0;
}
