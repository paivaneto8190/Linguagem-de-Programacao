#include <iostream>

using namespace std;

int main () {
    cout << 1234 + 1 << endl;/*Faz o uso do operador aritm�tico de soma
                            para realizar a opera��o da soma dos n�meros
                            inteiros retornando um dado num�rico representado
                            pelo valor 1235 vindo da express�o 1234 + 1.*/
    cout << 15400 + 1 << endl;/**/

    cout << 2147483647 + 1<< endl;/*O tipo de entrada de dados nesse caso � inteiro, logo ao
                                    ultrapassar o valor m�ximo que o tipo int consegue armazenar,
                                    o programa d� a volta na pr�pria vari�vel e a representa com um
                                    valor negativo dentro do aceito pelo tipo da vari�vel.*/
    return 0;
}
