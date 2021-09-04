#include <iostream>

using namespace std;

int potencia(int x, int y){
	int i, pot = 1;
	
	for(i = 1; i <= y; i++){
		pot = x * pot;
	}
	
	return pot;
}

int main () {
	
	int num1, num2;
	
	cin >> num1 >> num2;
	
	cout << potencia(num1, num2);
	
	return 0;
}
