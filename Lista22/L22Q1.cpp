#include <iostream>

using namespace std;

//Ordena em ordem decrescente
void ordena_dec (int vec[], int n){
	int i, j, aux;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(vec[i] >= vec[j]){
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}
}

int main () {
	int n, i;
	
	cin >> n;
	
	int vec[n] = {};
	
	for(i = 0; i < n; i++){
		cin >> vec[i];
	}
	
	ordena_dec (vec, n);
	
	cout << "[ ";
	for(i = 0; i < n; i++){
		if(i < (n - 1))
			cout << vec[i] << " , ";
		else
			cout << vec[i];
	}
	cout << " ]" << endl;

	return 0;
}
