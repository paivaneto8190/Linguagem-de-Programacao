#include <iostream>

using namespace std;

bool ehPar(int x) {
	if(x == 0){//� par
		return true;
	}
	else if(x == 1){//� �mpar
		return false;
	}
	ehPar(x-2);
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x;
	
	cin >> x;
	
	if(ehPar(x))//Equivale a if(ehPar(x) == true)
		cout << x << " � par";//Retorna true
	else
		cout << x << " � �mpar";//Retorna false
			
	return 0;
}
