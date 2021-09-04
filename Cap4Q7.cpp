#include <iostream>

using namespace std;

int main () {
    int larg, alt, i, j;

    cin >> larg >> alt;

    for(j = 0; j < alt; j++){

        for( i = 0; i < larg; i++){
            cout << "*";
        }
        //Pula a linha depois de desenhar a primeira
        cout << "\n";
    }
    return 0;
}
