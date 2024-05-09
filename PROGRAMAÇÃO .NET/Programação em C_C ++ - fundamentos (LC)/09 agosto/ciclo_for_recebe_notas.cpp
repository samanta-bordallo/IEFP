#include <iostream>
using namespace std;
int main() // Início;
{
	float soma=0.0;
	const int max=10;
	for(int i =0; i< max; i++){
		cout << "\nDigite a nota " << (i+1) <<" : ";
		float nota;
		cin >> nota;
		soma+=nota;//soma=soma+nota;
	}	
	cout << "\nMedia = " << (soma/max) << endl;
	system("Pause");
	return(0);
}
