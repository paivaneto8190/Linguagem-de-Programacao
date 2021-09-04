#include <iostream>

using namespace std;

const int MAX = 100;

float mediaAux(float M[][MAX], int n, int m) {
	int j;
	float media = 0;
	
	for(j = 0; j < m; j++){
		media += M[n][j];
	}
	media /= m;//Quantidade de termos da linhas é a quantidade de colunas
	
	return media;
}

void media (float M[][MAX], int i, int m) {
	int j = 0, k = 0, vec[k] = {};
	float media = 0;
	
	media = 0;
	media = mediaAux(M, i, m);
		
	for(j = 0; j < m; j++){
		if(M[i][j] >= media){
			vec[k] = M[i][j];
			k++;
		}
	}
	
	//Imprime o vetor linha a linha da matriz M
	cout << "[ ";
	for(i = 0; i < k; i++){
		if(i < (k - 1)){
			cout << vec[i] << " , ";
		}
		else{
			cout << vec[i];
		}
	}
	cout << " ]" << endl;
}

int main () {
	int i, j, n , m;
	float M[MAX][MAX] = {};
	
	cin >> n >> m;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> M[i][j];
		}
	}
	for(i = 0; i < n; i++){//Vou usar um for para as linhas fora da função void, uma vez que na impressão dos termos das linhas, o vetor auxiliar só vai considerar uma linha por vez
		media(M, i, m);
	}
	
	return 0;
}
