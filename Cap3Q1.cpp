/*1.(Quest�o similar do URI: 1044) Diz-se que um n�mero x � m�ltiplo de y se o resto da
divis�o inteira de x por y for igual a zero. Implemente um programa que recebe como entrada
dois n�meros inteiros, x e y. Em seguida, o seu programa deve imprimir uma mensagem
informando se x � m�ltiplo de y ou n�o.*/

#include <iostream>

using namespace std;

int main () {
    int num1, num2;
    setlocale(LC_ALL,"portuguese");

    cin >> num1 >> num2;

    if(num1%num2 == 0)
        cout << num1 << " � m�ltiplo de " << num2;
    else
        cout << num1 << " n�o � m�ltiplo de " << num2;

    return 0;
}
