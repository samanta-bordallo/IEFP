// pedra, papel. tesoura
// 1 - pedra, 2 - tesoura, 3 - tesoura
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	int jog,comp;
	int jogcum=0, compcum=0, empcum=0;
	for(int i=0;i<5;i++){
		cout<<"Escolha um numero para jogar"<<endl;
		cout<<"1-pedra, 2-papel, 3-tesoura: ";
		cin>>jog;
		srand(time(0));
		comp=rand()%3+1; //rand ()%3 --> 0 a 2; %3+1 --> 1 a 3
		cout<<"O computador escolhe: "<<comp<<endl;
		cout<<endl;
	
		if(comp==jog){
			cout<<"Empate"<<endl;
			compcum ++;
			jogcum++;		
		}
		else if((comp==1&&jog==3)||(comp==3&&jog==2)||(comp==2&&jog==1)){
			cout<<"Computador ganhou!"<<endl;
			compcum ++;
		}
		else{
			cout<<"Voce ganhou!"<<endl;
			jogcum++;
		}
	}
	if(jogcum==compcum){
		cout<<endl<<"Empataram no fim do jogo";
	}
	else if(jogcum>compcum){
		cout<<endl<<"Jogador ganhou no fim do jogo";
	}
	else{
		cout<<endl<<"Computador ganhou no fim do jogo";
	}
}
