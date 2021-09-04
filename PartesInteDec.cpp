#include <iostream>

using namespace std;

int main () {
    int pInt, pDec;
    double x;

    cin >> x;

    pInt = x;//Captura a parte inteira
    pDec = (x - pInt)*1000;//Captura a parte inteira e mostra sem a vírgula

    cout << "Parte inteira: " << pInt << endl;
    cout << "Parte decimal: " << pDec;

    return 0;
}
