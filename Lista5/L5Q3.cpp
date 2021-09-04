#include <iostream>

using namespace std;

int main () {

    int dia;

    while(cin >> dia){

        dia = dia%7;

        switch(dia){
            case 1:
                cout << "Domingo";
                break;
            case 2:
                cout << "Segunda";
                break;
            case 3:
                cout << "Terca";
                break;
            case 4:
                cout << "Quarta";
                break;
            case 5:
                cout << "Quinta";
                break;
            case 6:
                cout << "Sexta";
                break;
            default:
                cout << "Sabado";//Já que retornaria 0 a divisão, coloquei no default para evitar mais linhas
                break;
        }
    }

    return 0;
}
