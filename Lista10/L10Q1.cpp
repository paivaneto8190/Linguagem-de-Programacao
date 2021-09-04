#include <iostream>

using namespace std;

void bin(int n){
	int num = 0, cont = 0, num_invert1, i = 0;
	
	while(n > 0){
		cont++;
		num = num * 10 + n % 2;//Armazena os termos de forma que fiquem invertidas, mas em binário, e o 10 dá um espaço de 1 unidade entre cada número
		n/=2;//Atualiza o número para sair do laço
	}
	
	for(i = 0; i < cont; i++){//Sai do laço, mas usa para isso a quantidade de dígitos o número em binário, capturada anteriormente
		num_invert1 = num_invert1 * 10 + num % 2;
		num = (num - num % 2) / 10;//Adiciona os números na ordem inversa, operando da unidade até a centena usando o 10 como fator de correção
	}
	
	cout << num_invert1;
	
}

int main () {
	int n;
	
	cin >> n;
	
	bin(n);
	
	return 0;
}
