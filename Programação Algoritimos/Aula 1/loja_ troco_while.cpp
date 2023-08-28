/* Samanta Bordallo
-
Loja troco while*/

#include <iostream>
using namespace std;
int calc_troco(int preco, int entrege)
{
    return entrege - preco;
}
int main(void)
{
    string nome;
    int preco, entrege, troco;
    cout << "Qual o seu nome\nResposta: " << endl;
    cin >> nome;
    cout << "Qual o preco do artigo?\nResposta: " << endl;
    cin >> preco;
    cout << "Quanto esta a entregar?\nResposta: " << endl;
    cin >> entrege;
       troco = calc_troco(preco, entrege);
       if (troco < 0)
       {
        while (troco <= 0)
           {
               int temp;
               if (troco >= 0)
                  break;
            	cout << nome << ", falta " << (troco * -1) << endl;
               cout << "Por favor passa para ca mais dinheiro: ";
               cin >> temp;
               cout << endl;
               entrege += temp;
               troco = calc_troco(preco, entrege);
        }       
    }
    if (troco == 0)
       cout << "Entregou o valor exacto" << endl;
    else
        cout << "O seu troco e: " << troco << endl;
    return 1;    
}
