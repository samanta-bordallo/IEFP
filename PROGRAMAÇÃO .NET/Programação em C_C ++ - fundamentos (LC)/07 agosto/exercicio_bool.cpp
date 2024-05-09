#include <iostream>
#include <string>

using namespace std;

int main(){
	bool vota;
	int idade, votar=18;
	cout<<"Qual a sua idade? ";
	cin>>idade;
	vota=(idade>=18);
	if(vota){
		cout<<"Pode voltar";
	}
	else{
		cout<<"Nao pode voltar";
	}
	
}
