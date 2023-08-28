#include <iostream>
using namespace std;
int main(){
	float a;
	cout << "digite o numero: ";
	cin >> a;
	if (a==0)
		cout << "O número digitado e nulo" << endl;
	else if (a>0)
		cout << "O número digitado e positivo" << endl;
	else
		cout << "O número digitado e negativo" << endl;
	system("Pause");
}
