#include <iostream>
#include <cmath>

using namespace std;

int main () {
    float val1, val2, val3, A, B, C;

    while(cin >> val1 >> val2 >> val3){

        //ORGANIZA OS TERMOS
        if((val1 > val2) && (val1 > val3) && (val2 > val3)){
            A = val1;
            B = val2;
            C = val3;
        }
        else if((val1 > val2) && (val1 > val3) && (val3 > val2)){
            A = val1;
            B = val3;
            C = val2;
        }
        else if((val2 > val1) && (val2 > val3) && (val1 > val3)){
            A = val2;
            B = val1;
            C = val3;
        }
        else if((val2 > val1) && (val2 > val3) && (val3 > val1)){
            A = val2;
            B = val3;
            C = val1;
        }
        else if((val3 > val1) && (val3 > val2) && (val1 > val2)){
            A = val3;
            B = val1;
            C = val2;
        }
        else{
            A = val3;
            B = val2;
            C = val1;
        }

        //COMEÇA AS COMPARAÇÕES
        if(A >= (B + C)){
            cout << "NAO FORMA TRIANGULO" << endl;
        }
        //Esse else serve para evitar que não seja triângulo e que saia outra coisa
        else{

            if(pow(A,2) == (pow(B,2) + pow(C,2))){
                cout << "TRIANGULO RETANGULO" << endl;
            }

            if(pow(A,2) > (pow(B,2) + pow(C,2))){
                cout << "TRIANGULO OBTUSANGULO" << endl;
            }

            if(pow(A,2) < (pow(B,2) + pow(C,2))){
                cout << "TRIANGULO ACUTANGULO" << endl;
            }

            if((A == B) && (A == C)){
                cout << "TRIANGULO EQUILATERO" << endl;
            }

            if(((A == B) && (A != C)) || ((B == C) && (B != A)) || ((A == C) && (A != B))){
                cout << "TRIANGULO ISOSCELES" << endl;
            }
        }
    }

    return 0;
}

