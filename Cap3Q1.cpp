/*1.(Questão similar do URI: 1044) Diz-se que um número x é múltiplo de y se o resto da
divisão inteira de x por y for igual a zero. Implemente um programa que recebe como entrada
dois números inteiros, x e y. Em seguida, o seu programa deve imprimir uma mensagem
informando se x é múltiplo de y ou não.*/

#include <iostream>

using namespace std;

int main () {
    int num1, num2;
    setlocale(LC_ALL,"portuguese");

    cin >> num1 >> num2;

    if(num1%num2 == 0)
        cout << num1 << " é múltiplo de " << num2;
    else
        cout << num1 << " não é múltiplo de " << num2;

    return 0;
}
