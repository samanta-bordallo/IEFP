#include <iostream>
using namespace std;
int main ()
{
	int X = 0;
	while (X != 5)
{
		cout << "Valor de X = " << X << endl;
		X = X+1;
}
	cout<<"X depois de sair do while = " << X;
	cout << endl;
	system("Pause");
	return 0;
}
