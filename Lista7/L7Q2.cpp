#include <iostream>

using namespace std;

int main () {
    int num, d = 2, i, maior;

    cin >> num;

    maior = d;

    while(num > 1){
    	if(num%d == 0)
        	num /= d;
      
        if(d > maior){
            maior = d;
        }
        
        if(num%d != 0){
            d++;
        }
    }

    cout << maior;
    return 0;
}
