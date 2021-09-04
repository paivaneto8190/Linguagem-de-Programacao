#include <iostream>

using namespace std;

int soma_int(int x, int y){
	int i, soma = 0;
	for(i = x ; i <= y; i++){
		soma += i;
	}
	
	return soma;
}

int main (){
	int x, y;
	
	cin >> x >> y;
	
	cout << soma_int(x,y);
	
	return 0;
}
