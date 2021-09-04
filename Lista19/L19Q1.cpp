#include <iostream>

using namespace std;

void tira_c(char str1[], char c){
	int i = 0;
	
	while(str1[i] != '\0'){
		if(str1[i] != c)
			cout << str1[i];
		
		i++;
	}
}

int main () {
	int max = 101, i = 0;
	char str1[max], c;
	
	cin.getline(str1, max);
	
	//Caractere a ser removido
	cin >> c;
	
	tira_c(str1, c);
		
	return 0;
}
