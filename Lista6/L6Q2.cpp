#include <iostream>

using namespace std;

int main () {
    int num, i, cPrimo = 0;
    
    cin >> num;
    
    for(i = 2; i <= num; i++){//Começo em 2 pois 1 divide todos os reais
        if(num%i == 0){
           cPrimo += 1;
        }
    }
    
    if(cPrimo == 1){
            cout << "O número " << num <<  " é primo";
        }
    else{
             cout << "O número " << num <<  " não é primo";
        }
    return 0;
}
