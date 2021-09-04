#include <iostream>
#include <iomanip>

using namespace std;

void notas(float n1, float n2, float n3, float& maior, float& meio, float& menor){
	
	//Parte n1
	if(n1 > n2 && n1 > n3 && n2 > n3){
		maior = n1;
		meio = n2;
		menor = n3;
	}
		
	else if(n1 > n2 && n1 > n3 && n3 > n2){
		maior = n1;
		meio = n3;
		menor = n2;
	}
		
	//Parte n2
	else if(n2 > n1 && n2 > n3 && n1 > n3){
		maior = n2;
		meio = n1;
		menor = n3;
	}
		
	else if(n2 > n1 && n2 > n3 && n3 > n1){
		maior = n2;
		meio = n3;
		menor = n1;
	}
		
	//Parte n3
	else if(n3 > n1 && n3 > n2 && n1 > n2){
		maior = n3;
		meio = n1;
		menor = n2;
	}
		
	else if(n3 > n1 && n3 > n2 && n2 >  n1){
		maior = n3;
		meio = n2;
		menor = n1;
	}
		
	//Se as notas forem iguais
	else if(n1 == n2 && n1 < n3){
		maior = n3;
		meio = n1;
		menor = n2;
	}
	
	else if(n1 == n3 && n1 < n2){
		maior = n2;
		meio = n1;
		menor = n3;
	}
	
	else{
		maior = n1;
		meio = n2;
		menor = n3;
	}
}

float nota_rec(float num1, float num2, float num3){
	float x1, x2, x3;
	
	notas(num1, num2, num3, x1, x2, x3);
	
	return (15 - (x1 + x2));
}

int main () {
	float na, nb, nc;

	cin >> na >> nb >> nc;
	
	cout << fixed << setprecision(2);
	cout << nota_rec(na, nb, nc);
}
