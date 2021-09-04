#include <iostream>

using namespace std;

int main () {
	int max = 61, i = 0;//String pode armazenar 60 valores
	char subs[max], c1, c2;
	
	cin.getline(subs, max);
	
	cin >> c1 >> c2;
	
	cout << subs << "=>" << endl;
	
	while(subs[i] != '\0'){
		if(subs[i] == c1)
			subs[i] = c2;
			
		else if(subs[i] == c2)
			subs[i] = c1;
			
		i++; //Atualiza o caractere da string
	}
	
	cout << subs;//String com valores substituidos
}
