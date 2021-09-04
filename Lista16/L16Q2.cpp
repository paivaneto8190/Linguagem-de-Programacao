#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main () {
	int n, m, num, maior, menor, i, j;//n linhas e m colunas
	float media = 0;
	
	cin >> n >> m;
	
	int val[n][m] = {};
	
	maior = INT_MIN;//Menor inteiro poss�vel
	menor = INT_MAX;//Maior inteiro poss�vel
	
	//Recebe os termos da matriz e soma a m�dia
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> val[i][j];
			
			media += val[i][j];
		}
	}
	
	//Compara os maiores e menores termos
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(val[i][j] > maior)
				maior = val[i][j];
				
			if(val[i][j] < menor)
				menor = val[i][j];
		}
	}
	
	media /= (n * m);// n * m � o n�mero de elementos da matriz
	
	cout << fixed << setprecision(2);
	cout << "Menor valor: " << menor << endl;
	cout << "Maior valor: " << maior << endl;
	cout << "M�dia dos valores: " << media << endl;
	
	return 0;
}
