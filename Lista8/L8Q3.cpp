#include <iostream>

using namespace std;

bool ehPrimo(int n){
	int cont = 0, i;
	for(i = 2; i <= n; i++){
		if(n%i == 0){
			cont++;
		}
	}
	
	if(cont == 1)
		return true;
	else 
		return false;
}

int contarPrimos(int x, int y){
	int i, cont1 = 0;
	
	for(i = x; i <= y; i++){
		if(ehPrimo(i))
			cont1++;	
	}
	
	return cont1;
}

int main () {
	int x, y;
	
	cin >> x >> y;
	
	cout << contarPrimos(x, y);
	return 0;
}
