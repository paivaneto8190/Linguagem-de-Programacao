#include <iostream>
#include <cstring>

using namespace std;

bool palin(char str1[], int i, int j) {
	if(str1[i] == str1[j]){
		if( i <= j){
			palin(str1, i + 1, j - 1);
		}
		else{
			return 1;
		}	
	}
	else{
		return 0;
	}
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0, j, tam = 51;
	char str1[tam];
	
	cin >> str1;
	
	j = strlen(str1) - 1;
	
	if(palin(str1,i, j))
		cout << str1 << " é palíndromo";
	else
		cout << str1 << " não é palíndromo";
	
	return 0;
}
