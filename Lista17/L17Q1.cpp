#include <iostream>
#include <cmath>

using namespace std;

const int MAX = 100;

bool matrix(int M[][MAX], int n, int m){
	int i, j, t, p, cont = 0, soma1 = 0, soma2 = 0, aux1, aux2, aux3 = m;
	bool prog = false;//Armazena o estado da variável no retorno do programa
	
	for(i = 0; i < n - 1; i++){
		cont = 0;
		soma1 = 0;
		
		for(j = 0; j < m; j++){
			soma1 += M[i][j] * pow(10, j);//Agrupa os algarismos de uma linha lado a lado
		}
		cout << "Soma1: " << soma1 << endl;
		
		//Calcula a soma das linhas posteriores para comparar com a da primeira
		for(t = 0; t < n; t++){
			soma2 = 0;
			for(p = 0; p < m; p++){
				soma2 += M[t][p] * pow(10, p);
			}
			
			//Verifica se a soma da primeira linha é igual a soma de uma outra linha subsequente
			if(soma1 == soma2)
				cont++;
				
			cout <<" Soma2: " << soma2 << endl;
		}
			
		if(cont > 1)
			prog = true;//Colocar uma variável ap invés de mandar retornar permite o programa calcular as somas posteriores
	}
	
	return prog;
}

int main () {
	int i, j, M[MAX][MAX] = {}, n, m;
	
	cin >> n >> m;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> M[i][j];
		}
	}
	
	if(matrix(M, n, m))
		cout << "A matriz tem linhas repetidas";
	else
		cout << "A matriz nao tem linhas repetidas";
	return 0;
}
