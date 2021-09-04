#include <iostream>
#include <iomanip>//Permite usar funções que definem precisão de casas decimais

using namespace std;

int main () {
    int num, horaT;
    float recebeHora, sal;

    cin >> num >> horaT >> recebeHora;

    sal = recebeHora * horaT;

    cout << "ID: " << num << endl;
    cout << fixed << setprecision(2);
    cout << "Salario: "<< sal << endl;

    return 0;
}
