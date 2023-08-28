// pedra, papel. tesoura
// 1 - pedra, 2 - tesoura, 3 - tesoura
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	srand(time(0));
	int jog,comp;
	
	cout<<"Escolha um numero para jogar"<<endl;
	cout<<"1-pedra, 2-papel, 3-tesoura: ";
	cin>>jog;
	comp=rand()%3+1;
	cout<<"O computador escolhe: "<<comp<<endl;
	cout<<endl;
	
	if(comp==jog){
		cout<<"Empate";
	}
	else if((comp==1&&jog==3)||(comp==3&&jog==2)||(comp==2&&jog==1)){
		cout<<"Computador ganhou!";
	}
	else{
		cout<<"Voce ganhou!";
	}
	}
