/*Implemente um programa que recebe como entrada um número inteiro n e em seguida
computa e imprime na tela o valor da seguinte fórmula:(somatoria de i ao quadrado)*/

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
        soma += i*i;//Poderia usar a biblioteca cmath e a função pow
    }

    cout << "\nTotal = " << soma;
}
