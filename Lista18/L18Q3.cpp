#include <iostream>

using namespace std;

int main () {
	int i = 0, cont = 0, j, comp, max = 21;//Armazena 20 caracteres
	char str1[max], str2[max];//str2 vai receber um cópia de str1
	bool teste = true;
	
	cin >> str1;
	
	//Tamanho da string
	while(str1[cont] != '\0'){
		cont++;
	}
	
	comp = cont;//Retorna o comprimento da str1
	
	while(comp != 0){//Inverte a str2
		str2[comp - 1] = str1[i]; 
		comp--;
		i++;
	}
	
	for(j = 0; j < cont; j++){
		if(str1[j] != str2[j])
			teste = false;
	}
	
	if(teste)
		cout << str1 << " é um palíndromo";
	else
		cout << str1 << " não é um palíndromo";
	return 0;
}
