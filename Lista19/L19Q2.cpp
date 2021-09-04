#include <iostream>
#include <cstring>

using namespace std;

void embaralha(char str1[], char str2[], char str3[]){
	int i = 0, comp1, comp2, j = 0, k = 0;
	
	//Captura o tamanho das strings
	comp1 = strlen(str1);
	comp2 = strlen(str2);
	
	for(i = 0; i < (comp1 + comp2); i++){
		//Adiciona str1 nas posições pares
		if(i % 2 == 0 && str1[j] != '\0'){
			str3[i] = str1[j];
			j++;
		}
		
		/*Não precisa colocar i % 2 != 0 para as posições ímpares,
		  uma vez que se o primeiro if for verdade os outros termos 
		  já estarão em posições ímpares.*/
		
		//Caso a str2 acabe ele adiciona a str1
		else if(k >= comp2){
			str3[i] = str1[j];
			j++;
		}
		
		//Caso a str1 acabe ele adiciona a str2
		else{
			str3[i] = str2[k];
			k++;
		}
	}
	
	//Coloca o termo especial para reconhecer a string
	str3[i] = '\0';
	
	cout << str3;
}

int main () {
	int max = 21;
	char str1[max], str2[max], str3[max];
	
	cin >> str1 >> str2;
	
	cout << str1 << " + " << str2 << " = ";
	embaralha(str1,str2,str3);
	
	return 0;
}
