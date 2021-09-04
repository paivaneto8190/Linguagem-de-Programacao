#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	int n, num, i;
	float media, soma = 0;
	
	cin >> n;
	
	for(i = 1; i <= n; i++){
		cin >> num;
		
		soma += num;
	}
	
	cout << fixed << setprecision(2);
	cout << soma/n;
	
	return 0;
}


