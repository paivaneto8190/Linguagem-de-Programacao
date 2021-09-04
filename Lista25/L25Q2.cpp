#include <iostream>

using namespace std;

int mdc (int x, int y) {
	if(y == 0){
		return x;
	}
	else{
		return mdc (y, x % y);//Vai executar a função até o y = x % y ser 0 e com isso retorna o mdc que é o parâmetro x = y, com y != 0
	}
}

int main () {
	int x, y;
	
	cin >> x >> y;
	
	cout << "MDC(" << x << " , " << y <<") = " << mdc(x, y);
	
	return 0;
}
