#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "digite o numero: ";
	cin >> n;
	if (n%2==0){
		if(n==0){
			cout << "nulo" << endl;
		}
		else{
			cout << "par" << endl;
		}
	}
	else{
		cout<<"impar"<<endl;
	}
	system("Pause");
}
