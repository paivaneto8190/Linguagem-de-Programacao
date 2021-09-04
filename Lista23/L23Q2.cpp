#include <iostream>
#include <cstring>

using namespace std;

void ordena_vc (char str1[]) {
	int i, j;
	char aux;
	
	//Coloca vogais no começo
	for(i = 0; i < strlen(str1); i++){
		for(j = 0; j < i; j++){//Vai comparando até a letra i	
			if(str1[i] < str1[j]){
				aux = str1[j];
				str1[j] = str1[i];
				str1[i] = aux;
			}
				
			if( str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u'){
					aux = str1[j];
					str1[j] = str1[i];
					str1[i] = aux;	
			}
			
			if( str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u'){//Ordena as vogais invertidas
				if(str1[i] < str1[j]){
					aux = str1[j];
					str1[j] = str1[i];
					str1[i] = aux;	
				}
			}
		}
	}
}

int main () {
	int tam = 51;//50 caracteres
	char str1[tam];
	
	cin >> str1;
	
	cout << str1 << endl;//String não modificada

	ordena_vc(str1);
	
	cout << str1;
	
	return 0;
}
