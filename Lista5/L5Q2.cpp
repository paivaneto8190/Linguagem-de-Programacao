#include <iostream>

using namespace std;

int main () {

    int d1,d2,m1,m2,a1,a2;

    while(cin >> d1 >> m1 >> a1 >> d2 >> m2 >> a2){

        //DATAS IGUAIS
        if(d1 == d2 && m1 == m2 && a1 == a2){
            cout << "As datas sao iguais";
        }

        //DIFEREN�A PELOS ANOS
        else if(a1 < a2){
            cout << "A primeira data e mais antiga";
        }
        else if(a1 > a2){
            cout << "A segunda data e mais antiga";
        }

        //DIFEREN�A PELOS MESES
        else if(d1 == d2 && m1 < m2 && a1 == a2){
            cout << "A primeira data e mais antiga";
        }
        else if(d1 == d2 && m1 > m2 && a1 == a2){
            cout << "A segunda data e mais antiga";
        }

        //DIFEREN�A PELOS DIAS E MESES
        else if(d1 < d2 && m1 == m2 && a1 == a2){
            cout << "A primeira data e mais antiga";
        }
        else if(d1 > d2 && m1 == m2 && a1 == a2){
            cout << "A segunda data e mais antiga";
        }
        else if(d1 < d2 && m1 < m2 && a1 == a2){
            cout << "A primeira data e mais antiga";
        }
        else if(d1 < d2 && m1 > m2 && a1 == a2){
            cout << "A segunda data e mais antiga";
        }
        else if(d1 > d2 && m1 > m2 && a1 == a2){
            cout << "A segunda data e mais antiga";
        }
        else if(d1 > d2 && m1 < m2 && a1 == a2){
            cout << "A primeira data e mais antiga";
        }
    }

    return 0;
}
