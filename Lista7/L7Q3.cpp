#include <iostream>

using namespace std;

int main () {
    int num, cont = 0, i;
    
    cin >> num;
    
    while(num != 0){
    	num /= 10;
    	cont++;
	}
	
	cout << cont;
	
    return 0;
}
