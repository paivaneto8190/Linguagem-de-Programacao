#include <iostream>

using namespace std;

int main () {
    int num, i, cPrimo = 0;
    
    cin >> num;
    
    for(i = 2; i <= num; i++){//Come�o em 2 pois 1 divide todos os reais
        if(num%i == 0){
           cPrimo += 1;
        }
    }
    
    if(cPrimo == 1){
            cout << "O n�mero " << num <<  " � primo";
        }
    else{
             cout << "O n�mero " << num <<  " n�o � primo";
        }
    return 0;
}
