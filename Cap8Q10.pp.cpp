#include <iostream>

using namespace std;

void impar_par(int v[], int n, int impar[], int n1, int par[], int n2){
	int i,j;
	
	n1 = 0;
	n2 = 0;
	
	for(i = 0; i < n;i++){
		if(v[i] % 2 == 0)
			n1++;
		else
			n2++;
	}
	
	for(j = 0; j < n; j++){
		if(v[j] % 2 == 0)
			par[j] = v[j];
		else
			impar[j] = v[j];
	}
	
	cout << "Elementos pares: \n" << par << endl;
	
	cout << "Elementos impares: \n" << impar << endl;
}

int main () {
	int i, num, n, v[n] = {}, n1, u[n1], n2, p[n2];
	
	cout << "Informe o tamanho do vetor: " << endl;
	
	cin >> n;
	
	cout << "Informe os elementos do vetor: " << endl;
	for(i = 0; i < n; i++){
		cin >> v[i];
	}
	
	impar_par(v,n,u,n1,p,n2);
	
	return 0;
}
