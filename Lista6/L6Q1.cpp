#include <iostream>
#include <climits>

using namespace std;

int main () {
    int num, menor = INT_MAX;
    
    cin >> num;
    
    while(num != 0){
        if(num < menor){
            menor = num;
        }
        cin >> num;
    }
    
    cout << menor;
    return 0;
}
