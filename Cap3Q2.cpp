/*2.Implemente um programa que recebe como entrada um ano e informa se ele � bissexto ou
n�o. Os anos bissextos s�o aqueles que s�o m�ltiplos de 4, mas que n�o s�o m�ltiplos de
100, com exce��o daqueles que s�o m�ltiplos de 400.*/

#include <iostream>

using namespace std;

int main () {
    int ano;

    cin >> ano;

    if(ano%4 == 0 && ano%100 != 0)
        cout << ano << " eh bissexto";
    else if(ano%400 == 0)
        cout << ano << " eh bissexto";
    else
        cout << ano << " nao eh bissexto";

    return 0;
}
