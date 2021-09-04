#include <iostream>

using namespace std;

int fatorial(int num1){
	int i, fat = 1;
	
	for(i = num1; i >= 1; i--){
		fat *= i;
	}
	
	return fat;
}

int soma_fat(int num2){
	int soma = 0, j;
	
	for(j = num2; j >= 1; j--){
		soma += fatorial(j);
	}
	
	return soma;
}

int main () {
	int num;
	
	cin >> num;
	
	cout << soma_fat(num);
	
	return 0;
}
