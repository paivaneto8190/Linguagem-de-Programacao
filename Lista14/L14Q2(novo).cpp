#include <iostream>

using namespace std;

int main () {
	int n = 0, v[30] = {}, num, i;
	
	cin >> n;
	
	for(i = 0; i < n; i++){
		cin >> num;
		v[i] = num;
	}
	
	for(i = (n - 1); i >= 0; i--){
		cout << v[i] << endl;
	}
	return 0;
}
