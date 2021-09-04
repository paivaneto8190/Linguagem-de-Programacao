#include <iostream>

using namespace std;

const int MAX = 30;

bool matrix_permute(int M[][MAX], int n){//Recebe apenas um par�metro depois da matriz porque ela � quadrada
	int i = 0, j = 0, cont2 = 0;
	bool teste1 = true, teste2 = true;//Teste1 verifica se s� possui zeros e uns e teste2 a segunda condi��o
		
	//Verifica se s� possui 0's e 1's
	for(i = 0; i < n; i++){
		teste1 = true;
		
		for(j = 0; j < n; j++){
			if(M[i][j] != 0 && M[i][j] != 1)//N�o necessita de mais condi��os j� que teste1 possui valor inicial true
				teste1 = false;
		}
	}
	
	//Verifica se em cada linha e coluna da matriz existe apenas um �nico valor 1
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
		cout << "� matriz de permuta��o";
	else
		cout << "N�o � matriz de permuta��o";
	
	return 0;
}
