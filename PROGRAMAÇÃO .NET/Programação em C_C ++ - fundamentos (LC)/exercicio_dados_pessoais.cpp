//SAMANTA BORDALLO

#include <iostream>

using namespace std;

int main(){
	int ano_nasc, ano_atual;
	cout<<"Qual o seu ano de nascimento? "<<endl;
	cin>>ano_nasc;
	cout<<"Qual o ano atual? "<<endl;
	cin>>ano_atual;
	string name;
	cout<<"Qual o seu nome? "<<endl;
	cin>>name;
	string end;
	cout<<"Qual seu endereco? "<<endl;
	cin>>end;
	
	
	cout<<"Eu sou "<<name<<endl;
	cout<<"Tenho "<<ano_atual-ano_nasc<<" anos."<<endl;
	cout<<"Moro em "<<end<<endl;
	
}
