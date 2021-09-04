#include <iostream>
#include <iomanip>

using namespace std;

double media (double m[], int n, int k) {
	int i, j;
	double aux, media = 0;
	
	for(i = 1; i < n; i++){//Organiza o vetor em ordem decrescente
		for(j = 0; j < i; j++){
			if(m[i] > m[j]){
				aux = m[i];
				m[i] = m[j];
				m[j] = aux;
			}	
		}
	}
	
	for(i = 0; i < k; i++){
		media += m[i];
	}
	
	media /= k;
	
	return media;
}

int main () {
	int i, k, n;
	
	cin >> k >> n;
	
	double m[n] = {};
	
	for(i = 0; i < n; i++){
		cin >> m[i];
	}
	
	cout << fixed << setprecision(2);
	
	//Imprime o vetor
	cout << "[ ";
	for(i = 0; i < n; i++){
		if(i < (n - 1))
			cout << m[i] << " , ";
		else
			cout << m[i];
	}
	cout << " ]" << endl;
	
	cout << "Média = " << media(m, n, k);
	
	return 0;
}
