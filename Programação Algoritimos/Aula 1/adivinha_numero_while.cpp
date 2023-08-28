/* Samanta Bordallo ide
-
utilizador tem 10 hipoteses de acertar um numero gerado aleatoriamente */

#include <cstdlib>
#include <ctime>
#include <iostream> //inclui bibliotecas
using namespace std;
int main(){
	int nutiliz;
	srand(time(0));
    int aleatorio=rand()%100+1;
    bool acertou=false
    
    while(acertou==false){
    	cout<<"numero";
    	cin>>(int)num;
    	if(num==aleatorio){
    		cout<<"Acertou!";
    		acertou=True;
		}
		else if(num>aleatorio){
			cout<<"Tente um numero menor"<<endl;
		}
		else if(num<aleatorio){
			cout<<"Tente um numero maior"<<end1;
		}
		}
    
    
	
	/*for(int i=0;i<10;i++){//10 hipoteses
		cout<<"Qual numero?"<<endl;
		cin>>nutiliz;
		if(aleatorio==nutiliz){
			cout<<"parabens, voce acertou"<<endl;
			break;
		}
		else if(nutiliz > aleatorio){
			cout<<"Tente um numero menor"<<endl;
		}
		else if(nutiliz < aleatorio){
			cout<<"Tente um numero maior"<<endl;
		}
		if(i==9){
			cout<<"Voce perdeu. tente novamente!";
		}
	}	*/
}
