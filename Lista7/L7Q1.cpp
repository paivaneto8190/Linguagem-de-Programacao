#include <iostream>

using namespace std;

int main () {
	int x, y, mdc, maior, i;
	
	cin >> x >> y;
	
	//O programa compara os maiores e vai dividindo de um valor menor e armazenando divisores comuns até chegar em um maior de todos
	
	if(x > y){
		maior = x;
	}
	else{
		maior = y;
	}
	
	//Vai até o maior mesmo que o MDC esteja antes, uma vez que fica armazenado na variável "mdc"
	for(i = 1; i <= maior; i++){
		if(x%i == 0 && y%i == 0){
			mdc = i;
		}
	}
	
	cout << "MDC(" << x << "," << y << ") = " << mdc;
	return 0;
}
