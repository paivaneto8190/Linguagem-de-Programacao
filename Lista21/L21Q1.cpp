#include <iostream>
#include <cstdlib>

using namespace std;

void permuta (int vec[], int tam, int s) {
	int i, j, k, aux, n;
	
	srand(s);
	n = 1 + (rand() % 5);//Sorteia um n�mero entre 1 e 5
	
	cout << "permuta��es" << endl;
	cout << "n = " << n << endl;
	
	//Imprime os n�meros i e j, e realiza as permuta��es
	for(k = 0; k < n; k++){
		//Sorteia i
		i = (rand() % tam);
		//Sorteia j
		j = (rand() % tam);
		
		cout << "pos " << i << " <-> " << j << endl;
		
		aux = vec[i];//Guarda o valor inicial de vec[i]
		vec[i] = vec[j];
		vec[j] = aux;
	}
}

int main () {
	int tam, s, i;
	
	cin >> s >> tam;
	
	int vec[tam] = {};
	
	//L� o vetor
	for(i = 0; i < tam; i++){
		cin >> vec[i];
	}
	
	//Imprime o vetor original
	cout << "vetor original\n" << "[ ";
	for(i = 0; i < tam; i++){
		if(i < tam - 1)
			cout << vec[i] << " , ";
		else
			cout << vec[i];
	}
	cout << " ]" << endl;
	
	permuta (vec, tam, s);//Chama a fun��o que realiza a permuta��o
	
	//Imprime o vetor permutado
	cout << "resultado\n[ ";
	for(i = 0; i < tam; i++){
		if(i < tam - 1)
			cout << vec[i] << " , ";
		else
			cout << vec[i];
	}
	cout << " ]";
	
	return 0;
}
