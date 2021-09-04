#include <iostream>

using namespace std;

int conjec (int n, int& passos) {//Coloca por referência porque é como se o programa ao chamar a função novamente vai substituindo o espaço de memória
	if(n > 1){
		if(n % 2 == 0){
			n /= 2;
		}
		else{
			n = 3 * n + 1;
		}
		cout << n << endl;
		passos++;
		conjec(n, passos);
	}
	return passos;
}

int main () {
	int n, passos = 0;
	
	cin >> n;
	
	cout << n << endl;
	cout << "Número de passos: " << conjec (n, passos) << endl;
	
	return 0;
}
