#include <iostream>

using namespace std;

void dig(int num, int& pri_num, int& ult_num){
	int cont = 0, i, aux;
	
	aux = num;
	ult_num = num%10;//Último dígito
	
	//Captura quantidade de dígitos
	while(num > 0){
		cont++;
		num /= 10;
	}
	
	//Captura o primeiro número
	for(i = 0; i <  cont; i++){
		pri_num = aux%10;
		aux /= 10;
	}
}

int main () {
	int num, pri_num = 0, ult_num = 0;
	
	cin >> num;
	
	dig(num, pri_num, ult_num);
	
	cout << "primeiro=" << pri_num << " ultimo=" << ult_num;
	
	return 0;
}
