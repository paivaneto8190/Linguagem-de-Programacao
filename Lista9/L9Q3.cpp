#include <iostream>

using namespace std;

void tabuada(int num){
	int i;
	
	for(i = 1; i <= 10; i++){
		cout << num << " x " << i << " = " << num * i << endl;
	}
}

int main () {
	int i;
	
	for(i = 1; i <= 10; i++){
		tabuada(i);
	}
	return 0;
}
