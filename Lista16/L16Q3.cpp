#include <iostream>

using namespace std;

const int MAX = 30;

void transposta(int A[][MAX], int transp[][MAX], int n, int m){
	int i, j;
	
	//Calcula transposta
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			transp[j][i] = A[i][j];
		}
	}
	
	//Imprime a transposta
	cout << "Transposta" << endl;
	
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			cout << transp[i][j] << " ";
		}
		cout << endl;
	}
}

int main () {
	int n, m, i, j, matrix[MAX][MAX], matrixAux[MAX][MAX];
	
	cin >> n >> m;//n linhas e m colunas
	
	//Recebe os termos da matriz e soma a média
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> matrix[i][j];
		}
	}
	
	cout << "Matriz" << endl;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;//Pula para a outra linha quando finaliza a de cima
	}
	
	transposta(matrix, matrixAux, n, m);
	
	return 0;
}
