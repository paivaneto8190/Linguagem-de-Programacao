#include <iostream>

using namespace std;

int main () {
	int n, u[20] = {}, i, j, num, conf = 0;
	
	cin >> n;
	
	for(i = 0; i < n; i++){
		cin >> num;
		u[i] = num;
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < i; j++){
			if(u[i] == u[j]){
				conf++;
			}
		}
	}
	
	if(conf != 0){
		cout << "Existem elementos repetidos";
	}
	else{
		cout << "Não existem elementos repetidos";
	}
	return 0;
}
