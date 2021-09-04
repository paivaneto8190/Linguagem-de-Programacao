#include <iostream>

using namespace std;

void divisao(int x, int y, int& q, int& r){
	q = x/y;
	r = x%y;
}

int main () {
	int div1, div2, quo, res, func;
	
	cin >> div1 >> div2;
	
	divisao(div1, div2, quo, res);
	
	cout << "Q = " << quo << "\nR = " << res;
	return 0;
}
