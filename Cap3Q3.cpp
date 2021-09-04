/*3.(Quest�o similar do URI: 1043, 1045) Implemente um programa que recebe como entrada
tr�s n�meros inteiros. O seu programa deve imprimir uma mensagem na tela informando se
os n�meros fornecidos constituem os lados de um tri�ngulo ou n�o. Al�m disso, o programa
deve imprimir tamb�m qual � o tipo do tri�ngulo formado: equil�tero (tr�s lados iguais),
is�sceles (dois lados iguais) ou escaleno (tr�s lados diferentes). Considere que para constituir
um tri�ngulo, cada um dos lados tem que ser menor do que a soma dos outros dois.*/

#include <iostream>

using namespace std;

int main () {
    setlocale(LC_ALL,"portuguese");
    int l1,l2,l3;

    cin >> l1 >> l2 >> l3;

    if((l1 < l2 + l3) && (l2 < l1 + l3) && (l3 < l2 + l1)){
        if(l1 == l2 && l2 == l3 && l1 == l3){
            cout << "Forma um tri�ngulo equil�tero";
        }
        else if((l1 < l2 && l2 == l3) || (l2 < l1 && l1 == l3) || (l3 < l1 && l1 == l2) || (l1 > l2 && l2 == l3) || (l2 > l1 && l1 == l3) || (l3 > l1 && l1 == l2)){
            cout << "Forma um tri�ngulo is�celes";
        }
        else{
            cout << "Forma um tri�ngulo escaleno";
        }
    }
    else
        cout << "N�o � tri�ngulo";

return 0;
}
