#include <iostream>

using namespace std;

int invert(int num, int& num_invert){
	int cont = 0, aux, aux2, i;
	
	num_invert = 0;
	
	aux = num;
	aux2 = num;
	
	while(num > 0){
		cont++;
		num /= 10;
	}
	
	for(i = 0; i < cont; i++){
		num_invert = num_invert * 10 + aux % 10;//Ao somar dez quando somamos cada termo da var auxiliar, damos um espaço de uma unidade no número para alocar o próximo dígito
		aux /= 10;
	}
	
	if(aux2 > num_invert)
		return 1;
	else if(aux2 == num_invert)
		return 0;
	else
		return (-1);
}

int main () {
	int n, n_invert, func;
	
	cin >> n;
	
	func = invert(n, n_invert);
		
	cout << "X = " << n << "\nX invertido = " << n_invert << "\n";
	
	if(func == 1)
		cout << "X é maior que X invertido";
	else if(func == 0)
		cout << "X é igual a X invertido";
	else if(func == -1)
		cout << "X é menor que X invertido";
		
	return 0;
}
