#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main () {
	setlocale(LC_ALL, "portuguese");
	
	int i = 0, j = 0, p = 0, cont = 0, comp1 = 0, comp2 = 0, max = 201;//Armazena 20 caracteres
	char str1[max], str2[max];//str2 vai receber um cópia de str1
	bool teste = true;
	
	cin.getline(str1, max);
	
	//Faz uma cópia da primeira string
	strcpy(str2, str1);
	
	//Tamanho da string
	cont = strlen(str1);
	
	//Concatena os os espaços da string str1
	for(j = 0; j < cont; j++){
        if(isspace(str1[j])){
            for(p = j; p < cont; p++){//Vai substituindo os termos pelos sucessores
                str1[p] = str1[p + 1];
            }
            
            cont--;
		}
    }
    
    for(j = 0; j < cont; j++){
        if(isspace(str1[j])){
            for(p = j; p < cont; p++){//Vai substituindo os termos pelos sucessores
                str1[p] = str1[p + 1];
            }
            
            cont--;
		}
    }
    
    comp1 = strlen(str1);
    
    for(j = 0; j < comp1; j++){
        if(ispunct(str1[j])){
            for(p = j; p < comp1; p++){//Vai substituindo os termos pelos sucessores
                str1[p] = str1[p + 1];
            }
		}
    }
	
	//Para evitar erro quanto a formatação das letras, colocamos tudo em minúsuclo
	for(i = 0; i < comp1; i++){
		str1[i] = tolower(str1[i]);
	}

	cout << "STR1:" << str1;
	comp1 = strlen(str1);
	comp2 = comp1;
	
	//Testa se é palíndromo
	for(j = 0; j < comp1; j++, comp2--){
		if(str1[j] != str1[comp2 - 1])
			teste = false;
	}
	
	if(teste)
		cout << "\"" << str2 << "\" é um palíndromo";
	else
		cout << "\"" << str2 << "\" não é um palíndromo";
		
	return 0;
}
