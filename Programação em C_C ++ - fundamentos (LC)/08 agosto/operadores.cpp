#include <iostream>
#define PI 3.14159

#define NL '/n'

using namespace std;

int main(){
	float N1, N2, N3, N4, media;
	cout<<"Nota do Primeiro Bimesstre: "; cin>>N1;
	cout<<"Nota do Segundo Bimesstre: "; cin>>N2;
	cout<<"Nota do Terceiro Bimesstre: "; cin>>N3;
	cout<<"Nota do Quarto Bimesstre: "; cin>>N4;
	media=(N1+N2+N3+N4)/4;
	cout<<"Media final= "<<media<<endl;
	system("Pause");
	

}
