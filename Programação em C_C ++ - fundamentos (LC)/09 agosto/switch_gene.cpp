#include <iostream>
using namespace std;
int main(){
	int gene;
	cout << "Digite o tipo Genetico: ";
	cin >> gene;
	switch (gene)
	{
		case 1: cout<< "Regiao Sul\n";
			break;
		case 2: cout<< "Regiao Norte\n";
			break;
		case 3: cout<< "Regiao Leste\n";
			break;
		case 4:
		case 5:
		case 6:
		case 7: cout<< "Regiao Oeste\n";
			break;
		default: cout << "Exotica\n";
	}
	system("Pause");
}
