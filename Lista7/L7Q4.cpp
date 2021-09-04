#include <iostream>

using namespace std;

int main () {
	int n, m, quo = 0, res = 0, aux1;
	
	cin >> n >> m;
	
	aux1 = m;
	
	if(m > n){
		cout << "Quociente: 0\n" << "Resto: " << n;
	} 
	
	while(m <= n){//Já que usamos variáveis inteiras, vamos tentar mexer com o denominador da divisão
		m += aux1;//Vai somar a quantidade de vezes até chegar no valor da variável
		quo++;//A quantidade de repetições resulta no quociente
	}
	
	res = n - aux1 * quo;//Tira do número total, o quociente resultando consequentemente vezes o divisor no resto
	
	if(aux1 <= n){
	cout << "Quociente: " << quo << "\nResto: " << res;
	}
	
	return 0;
}
