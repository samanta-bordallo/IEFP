#include <iostream>
#include <string>

using namespace std;

int main(){
	bool t1, t2, t3;
	t1 = (4>=6); //falso
	t2 = true; //verdadeiro
	t3 = (true || 5==25/5); //verdadeiro
	cout<<t1<<endl;
	cout<<t2<<endl;
	cout<<t3<<endl;
	system("Pause");
}
