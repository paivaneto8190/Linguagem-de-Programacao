#include <iostream>

using namespace std;

int num_tri(int num){
	int n = 1, tri, cont = 0, i;
	
	while(cont < num){
		cont = 0;
		tri = (n * (n + 1)) / 2;//Forma do n�mero triangular
		
		for(i = 1; i < tri; i++){//O for serve para contar a quantidade de divisores usando a vari�vel cont
			if(tri%i == 0){
				cont++;
			}				
		}
		
		n++;
	}
	
	return tri;
	
}

int main () {
	int num;
	
	cin >> num;
	
	cout << "O primeiro n�mero triangular com mais de " << num << " divisores �: " << num_tri(num);
	return 0;
}
