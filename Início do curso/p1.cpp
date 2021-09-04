#include <iostream>

using namespace std;

int main () {
    cout << 1234 + 1 << endl;/*Faz o uso do operador aritmético de soma
                            para realizar a operação da soma dos números
                            inteiros retornando um dado numérico representado
                            pelo valor 1235 vindo da expressão 1234 + 1.*/
    cout << 15400 + 1 << endl;/**/

    cout << 2147483647 + 1<< endl;/*O tipo de entrada de dados nesse caso é inteiro, logo ao
                                    ultrapassar o valor máximo que o tipo int consegue armazenar,
                                    o programa dá a volta na própria variável e a representa com um
                                    valor negativo dentro do aceito pelo tipo da variável.*/
    return 0;
}
