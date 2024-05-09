//calor
//se temp < 20 = fica em casa
//se temp >=20 && temp<30 = vai a praia
//se tiver tinheiro = vai a praia
//se n tiver dinheiro = vai ao rio
#include <iostream>
using namespace std;
int main()
{
	float temp;
	bool dinheiro;
	cout<<"Tem dinheiro? 1 sim 0 nao: ";
	cin>>dinheiro;
	cout<<"Qual a temperatura? ";
	cin>>temp;
	if(temp<20){
		cout<<"Fica em casa!!!";
	}
	else if(temp >20 && temp<=30 && dinheiro==1){
		cout<<"Vai a praia";
	}
	else if(temp>30 && dinheiro ==0){
		cout<<"Adega";
	}
	
}
