/*1. Implemente um programa que l� um n�mero inteiro n e em seguida l� n caracteres. O seu
programa deve exibir a quantidade de caracteres digitados que s�o letras, considerando que o
usu�rio pode digitar letras min�sculas e mai�sculas.*/

// N�O TERMINADA

#include <iostream>

using namespace std;

int main () {
    int nChar, res = 0, i;
    char num;

    cout << "Insira a quantidade de caracteres: " << endl;
    cin >> nChar;
    cout << "Agora insira os caracteres desejados: " << endl;

    for(i = 1; i < nChar + 1; i++){
        cin >> num;

        if(num%i == 0)
            res++;
    }

    cout << "Numero de letras digitadas: " << res;

    return 0;
}
