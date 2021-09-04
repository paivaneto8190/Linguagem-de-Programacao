/*2.Implemente um programa que recebe como entrada um ano e informa se ele é bissexto ou
não. Os anos bissextos são aqueles que são múltiplos de 4, mas que não são múltiplos de
100, com exceção daqueles que são múltiplos de 400.*/

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
