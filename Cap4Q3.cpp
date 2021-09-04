/*Implemente um programa que recebe como entrada um n�mero inteiro n e em seguida
computa e imprime na tela o valor da seguinte f�rmula:(somatoria de i ao quadrado)*/

#include <iostream>

using namespace std;

int main () {
    int num, i, soma = 0;

    cin >> num;

    cout << "Para num = " << num << ": 1";

    for(i = 2; i <= num; i++){
         cout << " + " << i*i;
    }

    for(i = 1; i <= num; i++){
        soma += i*i;//Poderia usar a biblioteca cmath e a fun��o pow
    }

    cout << "\nTotal = " << soma;
}
