#include <iostream>

using namespace std;

int main () {
	int n, m, quo = 0, res = 0, aux1;
	
	cin >> n >> m;
	
	aux1 = m;
	
	if(m > n){
		cout << "Quociente: 0\n" << "Resto: " << n;
	} 
	
	while(m <= n){//J� que usamos vari�veis inteiras, vamos tentar mexer com o denominador da divis�o
		m += aux1;//Vai somar a quantidade de vezes at� chegar no valor da vari�vel
		quo++;//A quantidade de repeti��es resulta no quociente
	}
	
	res = n - aux1 * quo;//Tira do n�mero total, o quociente resultando consequentemente vezes o divisor no resto
	
	if(aux1 <= n){
	cout << "Quociente: " << quo << "\nResto: " << res;
	}
	
	return 0;
}
