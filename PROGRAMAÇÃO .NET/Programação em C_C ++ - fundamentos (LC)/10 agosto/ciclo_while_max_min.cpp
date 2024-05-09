#include <iostream>

using namespace std;

int main(){
	int num,max=0,min=0;
	bool ciclo=true;
	
	while(ciclo){
		cout<<"introduza numeros - 0 para terminar"<<endl;
		cin>>num;
		if(num==0){
			ciclo=false;
		}
		else if(max==0&&min==0){
			max=min=num;
		}
		else if(num>max){
			max=num;
		}
		else if(num<min){
			min=num;
		}
	}
	cout << "Max="<<max<<endl;
	cout << "Min="<<min<<endl;
	
}

