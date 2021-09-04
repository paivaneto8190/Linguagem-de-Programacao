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

//Ordena em ordem crescente
void ordena_cre (int vec[], int n){
	int i, j, aux;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(vec[i] <= vec[j]){
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}
}


void junta_vec (int vec1[], int n1, int vec2[], int n2, int vec3[], int n3) {
	int i,j = 0, k = 0;
	
	ordena_cre (vec1, n1);//Ordena vec1 em ordem crescente
	ordena_dec (vec2, n2);//Ordena vec2 em ordem decrescente
	
	for(i = 0; i < n3; i++){
		//Posição par
		if(i % 2 == 0){
			vec3[i] = vec1[j];
			j++;
		}
		//Posição ímpar
		else{
			vec3[i] = vec2[k];
			k++;
		}
	}
}

int main () {
	int n, n1, i;
	
	cin >> n;
	
	n1 = 2 * n;
	
	int vec1[n] = {}, vec2[n] = {}, vec3[n] = {};
	
	//Captura elementos de vec1
	for(i = 0; i < n; i++){
		cin >> vec1[i];
	}
	
	//Captura elementos de vec2
	for(i = 0; i < n; i++){
		cin >> vec2[i];
	}
	
	//Imprime a formatação de vec1 e vec2
	cout << "[ ";
	for(i = 0; i < n; i++){
		if(i < (n - 1))
			cout << vec1[i] << " , ";
		else
			cout << vec1[i];
	}
	cout << " ]\n+\n";
	
	cout << "[ ";
	for(i = 0; i < n; i++){
		if(i < (n - 1))
			cout << vec2[i] << " , ";
		else
			cout << vec2[i];
	}
	cout << " ]\n=\n";
	
	junta_vec (vec1, n, vec2, n, vec3, n1);//Realiza a junção dos vetores
	
	//Imprime vec3
	cout << "[ ";
	for(i = 0; i < n1; i++){
		if(i < (n1 - 1))
			cout << vec3[i] << " , ";
		else
			cout << vec3[i];
	}
	cout << " ]" << endl;
	
	return 0; 
}
