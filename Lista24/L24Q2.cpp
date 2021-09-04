#include <iostream>

using namespace std;

bool ehPar(int x) {
	if(x == 0){//É par
		return true;
	}
	else if(x == 1){//É ímpar
		return false;
	}
	ehPar(x-2);
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x;
	
	cin >> x;
	
	if(ehPar(x))//Equivale a if(ehPar(x) == true)
		cout << x << " é par";//Retorna true
	else
		cout << x << " é ímpar";//Retorna false
			
	return 0;
}
