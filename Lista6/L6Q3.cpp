#include <iostream>

using namespace std;

int main () {
    int num,i;
    
    cin >> num;
    
    for(i = 1; i <= 10; i++){
    	cout << num << " x " << i << " = " << num*i << endl;
	}

    return 0;
}
