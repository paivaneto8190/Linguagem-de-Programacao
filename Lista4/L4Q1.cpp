#include <iostream>

using namespace std;

int main () {
    float cordX, cordY,alt, larg, userX, userY;//O ponto P � a jun��o de userX com userY

    cin >> cordX >> cordY >> alt >> larg >> userX >> userY;

    if((userX < (cordX + larg)) && (userY <= (cordY + alt))){//Por qu�?
        cout << "dentro";
    }
    else{
        cout << "fora";
    }
    return 0;
}
