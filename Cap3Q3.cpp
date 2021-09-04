/*3.(Questão similar do URI: 1043, 1045) Implemente um programa que recebe como entrada
três números inteiros. O seu programa deve imprimir uma mensagem na tela informando se
os números fornecidos constituem os lados de um triângulo ou não. Além disso, o programa
deve imprimir também qual é o tipo do triângulo formado: equilátero (três lados iguais),
isósceles (dois lados iguais) ou escaleno (três lados diferentes). Considere que para constituir
um triângulo, cada um dos lados tem que ser menor do que a soma dos outros dois.*/

#include <iostream>

using namespace std;

int main () {
    setlocale(LC_ALL,"portuguese");
    int l1,l2,l3;

    cin >> l1 >> l2 >> l3;

    if((l1 < l2 + l3) && (l2 < l1 + l3) && (l3 < l2 + l1)){
        if(l1 == l2 && l2 == l3 && l1 == l3){
            cout << "Forma um triângulo equilátero";
        }
        else if((l1 < l2 && l2 == l3) || (l2 < l1 && l1 == l3) || (l3 < l1 && l1 == l2) || (l1 > l2 && l2 == l3) || (l2 > l1 && l1 == l3) || (l3 > l1 && l1 == l2)){
            cout << "Forma um triângulo isóceles";
        }
        else{
            cout << "Forma um triângulo escaleno";
        }
    }
    else
        cout << "Não é triângulo";

return 0;
}
