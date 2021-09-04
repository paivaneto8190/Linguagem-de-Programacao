/*1. Implemente um programa que lê um número inteiro n e em seguida lê n caracteres. O seu
programa deve exibir a quantidade de caracteres digitados que são letras, considerando que o
usuário pode digitar letras minúsculas e maiúsculas.*/

// NÃO TERMINADA

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
