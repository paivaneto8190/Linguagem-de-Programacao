#include <iostream>

using namespace std;

int conjec (int n, int& passos) {//Coloca por refer�ncia porque � como se o programa ao chamar a fun��o novamente vai substituindo o espa�o de mem�ria
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
	cout << "N�mero de passos: " << conjec (n, passos) << endl;
	
	return 0;
}
