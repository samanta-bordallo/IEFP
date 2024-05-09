/* Samanta Bordallo ide
-
utilizador tem 5 hipoteses de acertar um numero*/

#include <iostream> //inclui bibliotecas
using namespace std;
int main(){
	int sorteado=6, num;
	
	for(int i=1;i<=5;i++){
		cout<<"Qual numero?";
		cin>>num;
		if(sorteado==num){
			cout<<"parabens, voce acertou"<<endl;
			break;
		}
		else{
			cout<<"tente novamente"<<endl;
			cout<<"tem "<<5-i<<" tentativas"<<endl;
		}
	}
	
	
}
