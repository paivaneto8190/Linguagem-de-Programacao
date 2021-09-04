#include <iostream>

using namespace std;

int pot (int x, int y) {
	if(x == 0 && y != 0)
		return 0;
	else if(x != 0 && y == 0)
		return 1;
	else
		return x * pot(x, y - 1);	
		
	//Tem o caso da indeterminação
}

int main () {
	int x, y;
	
	cin >> x >> y;
	
	cout << "pow( " << x << " , " << y << " ) = " << pot (x, y);
	return 0;
}
