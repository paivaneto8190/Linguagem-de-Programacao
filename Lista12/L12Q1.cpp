#include <iostream>

using namespace std;

void dez(int num, int& aux1, int& aux2){	
	int aux = num;
	aux1 = 0;
	aux2 = 0;
	
	num /= 100;//Captura a primeira dezena
	aux1 = num;
	
	aux2 = aux - aux1 * 100;//Captura a última dezena usando o valor atual de num
	
}

bool dez_comp(int num){
	int j, aux2 = 0, aux3 = 0, aux4 = 0;//aux2 recebe a primeira dezena, aux3 a segunda dezena e aux4 recebe a segunda dezena invertida
	
	dez(num, aux2, aux3);
	
	//Inverte a segunda dezena
	for(j = 0; j < 2; j++){
		aux4 = aux4 * 10 + aux3 % 10;//Pega a última dezena e separa no inverso
		aux3 /= 10;
	}
		
	if(aux2 == aux4)
		return true;
	else
		return false;
}

int main () {
	int numN, numM, i;
	
	cin >> numN >> numM;
	
	for(i = numN; i <= numM; i++){
		if(dez_comp(i))
			cout << i << endl;
		}
	
	return 0;
}
