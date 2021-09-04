#include <iostream>

using namespace std;

int main () {
	int n, i = 1, j, soma_perf = 0;
	
	cin >> n;
	
	for(i = 2; i <= n; i++){
		soma_perf = 0;//Precisa zerar para não atrapalhar nos seguintes
		for(j = 1; j < i; j++ ){
			if(i%j == 0){
				soma_perf += j;	
			}
		}
		if(soma_perf == i){
			cout << i << endl;
		}
	}
	return 0;
}


