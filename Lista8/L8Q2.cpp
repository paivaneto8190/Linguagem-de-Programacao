#include <iostream>

using namespace std;

int posicao(int n, int pos){
	int i, aux;
	
	aux = n;
	
	for(i = 1; i <= pos - 1; i++){
		n /= 10;
	}
	
	n = n - (n / 10) * 10;

	return n;
}

int main () {
	int num, pos;
	
	while(cin >> num >> pos){
	
	cout << posicao(num, pos);
	
	}
	return 0;
}
