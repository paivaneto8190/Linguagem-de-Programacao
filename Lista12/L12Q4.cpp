#include <iostream>
#include <cstdlib>

using namespace std;

void aposta_al(unsigned int semente,int& res1, int& res2, int& res3){
	
	srand(semente);//A função srand recebe parâmetros desse tipo
	
	res1 =  (1 + rand()%20);
	res2 =  (1 + rand()%20);
	res3 =  (1 + rand()%20);
}	

void pontos_AJ(unsigned int semente){
	int contA = 0, contJ = 0, res1, res2, res3, i, a1, a2;
	
	aposta_al(semente, res1, res2, res3);
	
	for(i = 0; i < 3; i++){
		cin >> a1;
		
		if(a1 == res1 || a1 == res2 || a1 == res3)
			contA++;
	}
	
	for(i = 0; i < 3; i++){
		cin >> a2;
		
		if(a2 == res1 || a2 == res2 || a2 == res3)
			contJ++;
	}
	
	cout << "sorteio: " << res1 << " " << res2 << " " << res3 << endl;
	
	if(contA > contJ)
		cout << "Antonio marcou mais pontos";
	else if(contA < contJ)
		cout << "João marcou mais pontos";
	else
		cout << "Empate";
}

int main () {
	unsigned int semente, valA, valJ, i;//A função srand recebe parâmetros desse tipo
	
	cin >> semente;
	
	pontos_AJ(semente);
	return 0;
}
