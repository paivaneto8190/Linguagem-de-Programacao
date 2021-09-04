#include <iostream>

using namespace std;

int seq(int n){
	int an, aux0 = 5, aux1 = 7, i;
	
	//Calcular os termos a_{n - 2} e a_{n - 1}
	if(n == 0){
		an = 5;
	}
	else if(n == 1){
		an = 7;
	}
	else if(n >= 2){
			for(i = 0; i <= n - 2; i++){
				an = 3 * aux1 + 2 * aux0;
				aux0 = aux1; //Salva 'an' para a próxima conta ser usado como o fator a_{n - 2}
				aux1 = an;	//Salva 'an' para a próxima conta ser usado como o fator a_{n - 1}
			}	 
		}
		

	return an;//Também poderia retornar aux1
	}


int soma_Seq(int n){
	int somaSeq = 0, i;
	
	for(i = 0; i <= n; i++){//Começa em 0 devido a numeração dos termos da sequência
		somaSeq += seq(i);
	}
	
	return somaSeq;
}

int main () {
	int n;
	
	cin >> n;
	
	cout << soma_Seq(n);
	return 0;
}
