#include <iostream>
using namespace std;
int main ()
{
	int n;
	cout << "Digite o numero inicial: ";
	cin >> n;
	while(n>0)
{
		cout << n << ", ";
		n--;
}
	cout << "FOGO!\n";
	system("Pause");
	return 0;
}
