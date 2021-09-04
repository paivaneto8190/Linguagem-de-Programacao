#include <iostream>
#include <cstdlib>

using namespace std;

const int MAX = 100;

void permuta_mat (int mat[][MAX], int D, int n, int s) {
	int lc, aux, i, j, p, q;
	
	srand(s);
	
	for(q = 0; q < n; q++){
		i = rand() % D;//Sorteia i
		j = rand() % D;//Sorteia j
		
		lc = rand() % 2;//Sorteia um número sendo ele 0 ou 1
	
		//Caso 1: lc = 0(permuta linhas)
		if(lc == 0){
			cout << "linha: " << i << " <-> " << j << endl;
		
			for(p = 0; p < D; p++){
				aux = mat[i][p];
				mat[i][p] = mat[j][p];
				mat[j][p] = aux;
			}
		}
		//Caso 2: lc = 1(permuta colunas)
		else{
			cout << "col: " << i << " <-> " << j << endl;
			
			for(p = 0; p < D; p++){
				aux = mat[p][i];
				mat[p][i] = mat[p][j];
				mat[p][j] = aux;
			}
		}	
	}
}

int main () {
	int i, j, D, s, n, mat[MAX][MAX];
	
	cin >> s >> D >> n;
	
	//Cria matriz identidade de ordem D
	for(i = 0; i < D; i++){
		for(j = 0; j < D; j++){
			if(i == j)
				mat[i][j] = 1;
			else
				mat[i][j] = 0;
		}
	}	
	
	permuta_mat(mat, D, n, s);
	
	//Imprime a matriz permutada
	for(i = 0; i < D; i++){
		for(j = 0; j < D; j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;//Quando acaba a linha
	}
	
	return 0;
}
