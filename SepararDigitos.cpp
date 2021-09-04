#include <iostream>

using namespace std;

int main () {
    int n, uni, dez, cent;

    cin >> n;

    uni = n - (n/10)*10;//Captura unidade
    dez = (n - (n/100)*100)/10;//A divisão por 10 isola o algarismo da dezena
    cent = (n - (n/1000)*1000)/100;//A divisão por 100 isola o algarismo da centena

    cout << cent << " " << dez << " " << uni << endl;

    return 0;
}
