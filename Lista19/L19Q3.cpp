#include <iostream>
#include <cstring>

using namespace std;

int tam_string (char c, char str1[]) {
	int cont = 0, i = 0, cont1 = 0;
	
	//Verifica se a string contém a letra
	for(i = 0; i < strlen(str1); i++){
			if(str1[i] == c && str1[i + 1] == c)//retorna uma a menor do que o esperado
				cont++;
				
			cont1++;
	}
	
	if(cont1 == 1)
		return cont;
	
	return cont + 1;
}

int main () {
	int max = 41;
	char str1[max], c;
	
	cin >> str1 >> c;
	
	cout << "String: " << str1 << endl;
	cout << "Char: " << c << endl;
	cout << "Tamanho: " << tam_string(c, str1);
	
	return 0;
}
