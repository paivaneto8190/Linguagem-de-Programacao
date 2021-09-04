#include <iostream>
#include <cstdlib>

using namespace std;

int multi (int x, int y) {
	if(x == 0 || y == 0)//Caso base
		return 0;
	else
		return x + multi(x, y - 1);//Vai somando x no próprio x até o y ser 0
		
}

int main () {
	int x, y;
	
	cin >> x >> y;
	
	cout << x << " * " << y << " = " << multi (x, y) << endl;
	
	return 0;
}
