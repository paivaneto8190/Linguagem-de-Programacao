#include <iostream>

using namespace std;

void bin(int n){
	int num = 0, cont = 0, num_invert1, i = 0;
	
	while(n > 0){
		cont++;
		num = num * 10 + n % 2;//Armazena os termos de forma que fiquem invertidas, mas em bin�rio, e o 10 d� um espa�o de 1 unidade entre cada n�mero
		n/=2;//Atualiza o n�mero para sair do la�o
	}
	
	for(i = 0; i < cont; i++){//Sai do la�o, mas usa para isso a quantidade de d�gitos o n�mero em bin�rio, capturada anteriormente
		num_invert1 = num_invert1 * 10 + num % 2;
		num = (num - num % 2) / 10;//Adiciona os n�meros na ordem inversa, operando da unidade at� a centena usando o 10 como fator de corre��o
	}
	
	cout << num_invert1;
	
}

int main () {
	int n;
	
	cin >> n;
	
	bin(n);
	
	return 0;
}
