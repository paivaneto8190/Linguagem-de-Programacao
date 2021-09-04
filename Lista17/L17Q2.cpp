#include <iostream>

using namespace std;

const int MAX = 30;

bool matrix_permute(int M[][MAX], int n){//Recebe apenas um parâmetro depois da matriz porque ela é quadrada
	int i = 0, j = 0, cont2 = 0;
	bool teste1 = true, teste2 = true;//Teste1 verifica se só possui zeros e uns e teste2 a segunda condição
		
	//Verifica se só possui 0's e 1's
	for(i = 0; i < n; i++){
		teste1 = true;
		
		for(j = 0; j < n; j++){
			if(M[i][j] != 0 && M[i][j] != 1)//Não necessita de mais condiçãos já que teste1 possui valor inicial true
				teste1 = false;
		}
	}
	
	//Verifica se em cada linha e coluna da matriz existe apenas um único valor 1
	for(i = 0; i < n; i++){
		cont2 = 0;
		for(j = 0; j < n; j++){
			if(M[i][j] == 1)
				cont2++;
		}
			
		if(cont2 != 1){
			teste2 = false;
		}
	}
		
	if(teste2){
		for(j = 0; j < n; j++){//Inverte a ordem de busca
			cont2 = 0;
			for(i = 0; i < n; i++){
				if(M[i][j] == 1)
					cont2++;
			}	
			
			if(cont2 != 1){
				teste2 = false;
			}
		}
	}
	
	if(teste1 && teste2)
		return true;
	else
		return false;
	
}

int main () {
	int M[MAX][MAX], i, j, n;
	
	cin >> n;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cin >> M[i][j];
		}
	}
	
	if(matrix_permute(M, n))
		cout << "É matriz de permutação";
	else
		cout << "Não é matriz de permutação";
	
	return 0;
}
