#include <iostream>
#include <cctype>

using namespace std;

int main () {
	int i = 0, max = 101;//Armazena 100 caracteres
	char str1[max];
	
	cin.getline(str1, max);
	
	while(str1[i] != '\0'){
		if(str1[i] == ' ')//Verifica os espa�os
			str1[i + 1] = toupper(str1[i + 1]);
			
		else if(str1[0] != ' '){//Transforma o primero em mai�sucula se n�o for um espa�o
			str1[0] = toupper(str1[0]);
		}
			
		i++;
	}
	
	cout << str1;
	return 0;
}
