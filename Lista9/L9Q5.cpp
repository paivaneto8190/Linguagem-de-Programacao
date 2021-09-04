#include <iostream>
#include <cmath>

using namespace std;

bool verific_dig(int num1, int num2){//Vai receber o cont
	int dig_num1_res, cont = 0, aux, res;
	
	aux = num2;
	
	while(num2 > 0){
		cont++;//Conta a quantidade de dígitos do segundo número
		num2 /= 10;
	}
	
	res = pow(10, cont);
	
	//Pegar os dígitos do primeiro númeroy
	dig_num1_res = num1%res;//Baseado na questão da posição dos números
		
	
	
	if(dig_num1_res == aux)//Captura a última parte do primeiro número baseado na quantidade de dígitos do segundo número
		return true;
	else
		return false;
}


int main () {
	int num1, num2, rec;
	
	cin >> num1 >> num2;
	
	if(verific_dig(num1, num2))
		cout << "A termina com B";
	else
		cout << "A nao termina com B";
		
	return 0;
}
