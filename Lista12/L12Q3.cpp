#include <iostream>
#include <cctype>

using namespace std;

int pontuacao(char r, char c){
	int cont = 0;
	
	if(toupper(r) == toupper(c))
		cont += 3;
		
	else if(c != r && isupper(r) && isupper(c))
		cont++;
		
	else if(c != r && islower(r) && islower(c))
		cont++;
		
	return cont;
}

int main () {
	char carta_r, car_jogA, car_jogB;
	int i, somaA = 0, somaB = 0;
	
	cin >> carta_r;
	
	for(i = 0; i < 5; i++){
		cin >> car_jogA;
		
		somaA += pontuacao(carta_r, car_jogA);
	}
	
	for(i = 0; i < 5; i++){
		cin >> car_jogB;
		
		somaB += pontuacao(carta_r, car_jogB);
	}
	
	cout << "Pontos A: " << somaA << " Pontos B: " << somaB;
	
	if(somaA > somaB)
		cout << " Vencedor A";
	else if(somaA < somaB)
		cout << " Vencedor B";
	else
		cout << " Empate";
		
	return 0;
}
