#include <iostream>

using namespace std;

int main(){
	int acum=0;
	char tecla;
	bool sai=false;
	while(sai==false){
		cout<<"Insira um caracter, 0 para sair"<<endl;
		cin>>tecla;
		acum++;
		if(tecla=='0'){
			sai=true;
		}
		
	}
	cout<<"O utilizador digitou "<<acum<<" caracteres.";

}
