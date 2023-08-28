#include <iostream>
using namespace std;
int main ()
{
	int X = 1, Y=10;
	while (Y > X)
{
		cout << "Valor de Y = " << Y << endl;
		Y = Y-2;
}
	cout<<"Y depois de sair do while = " << Y;
	cout << endl;
	system("Pause");
	return 0;
}
