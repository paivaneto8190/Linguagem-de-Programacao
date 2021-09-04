#include <iostream>
#include <cctype>

using namespace std;

int main () {
	int i = 0, max = 31;//Armazena 30 caracteres
	char str1[max];
	bool teste = true;
	
	cin >> str1;
	
	while(str1[i] != '\0'){
		if(i != 0 && (!isdigit(str1[i])))
			teste = false;
			
		i++;
	}
	
	if(teste)
		cout << str1 << " representa um número";
	else
		cout << str1 << " não representa um número";
	return 0;
}
