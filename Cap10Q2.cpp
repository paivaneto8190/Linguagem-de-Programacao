#include <iostream>
#include <cctype>

using namespace std;

int main () {
	int i = 0, max = 51;
	char str1[max];
	
	cin.getline(str1, max);
	
	while(str1[i] != '\0'){
		if(islower(str1[i]))
			str1[i] = toupper(str1[i]);
		else
			str1[i] = tolower(str1[i]);
			
		i++;
	}
	
	cout << str1;
	return 0;
}
