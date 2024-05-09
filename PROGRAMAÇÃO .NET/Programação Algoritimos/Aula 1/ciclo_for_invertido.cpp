/* Samanta Bordallo ide
-
ciclo for invertido*/

#include <iostream> //inclui bibliotecas

using namespace std;

int main(){
	
	for(int i=10;i>=1;i--){
		cout<<endl<<i<<endl;
		if(i%2==0){
			cout<<"Par";
		}
		else{
			cout<<"Impar";
		}
	}
}
