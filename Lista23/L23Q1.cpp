#include <iostream>

using namespace std;

void ord_ip (int vec[], int n) {
	int i, j, aux;
	
	for(i = 0; i < n; i += 2){//Roda nos índices pares
		for(j = 0; j < n; j += 2){
			if(vec[i] < vec[j]){
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}
	
	for(i = 1; i < n; i += 2){//Roda nos índices ímpares
		for(j = 1; j < n; j += 2){
			if(vec[i] > vec[j]){
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}
	
	//Imprime o vetor modificado
	cout << "[ ";
	for(i = 0; i < n; i++){
		if(i < (n - 1))
			cout << vec[i] << " , ";
		else
			cout << vec[i];
	}
	cout << " ]" << endl;
}

int main () {
	int i, n;
	
	cin >> n;
	
	int vec[n] = {};
	
	for(i = 0; i < n; i++){//Captura os números do vetor
		cin >> vec[i];
	}
	
	//Imprime o vetor original
	cout << "[ ";
	for(i = 0; i < n; i++){
		if(i < (n - 1))
			cout << vec[i] << " , ";
		else
			cout << vec[i];
	}
	cout << " ]";
	
	ord_ip (vec, n);
	
	return 0;
}
