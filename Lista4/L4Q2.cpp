#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    char cod;
    float preco;

    cin >> cod >> preco;

    switch(cod){
        case 'f':
            if(preco > 500){
                    cout << fixed << setprecision(2);
                cout << "Preco do fogao com desconto: " << preco*0.9;
            }
            else{//PRESTAR ATENÇÃO AQUI
                cout << fixed << setprecision(2);
                cout << "Preco do fogao com desconto: " << preco*0.9;
            }
            break;

        case 'g':
           if(preco > 2000){
                cout << fixed << setprecision(2);
                cout << "Preco da geladeira com desconto: " << preco*0.7;
            }
           else if(preco > 1000 && preco < 2000){
                cout << fixed << setprecision(2);
                cout << "Preco da geladeira com desconto: " << preco*0.8;
            }
            else{//PRESTAR ATENÇÃO AQUI
                cout << fixed << setprecision(2);
                cout << "Preco da geladeira com desconto: " << preco*0.9;
            }
            break;

        default:
            cout << "Codigo invalido";
    }
    return 0;
}
