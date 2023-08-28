#include <iostream>
using namespace std;
int main()
{
	int i, tab;
	cout<<"Qual tabuada?"<<endl;
	cin>>tab;
	for(i=1; i<10; i++)
		cout << '\n' << i << "x"<<tab<<"= " << (i*tab);
	cout << endl;
	system ("PAUSE");
	return 0;
}
