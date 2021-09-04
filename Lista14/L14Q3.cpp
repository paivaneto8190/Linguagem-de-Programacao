#include <iostream>

using namespace std;

int main () {
	int n, i, cont = 0;
	double media = 0,v[n] = {}, num;
	
	cin >> n;
	
	for(i = 0; i < n; i++){
		cin >> num;
		
		v[i] = num;
		
		media += v[i];
	}
	
	media /= n;
	
	cout << "Media: " << media << endl;
	
	for(i = 0; i < n; i++){
		if(v[i] > media){
			cont++;
		}
	}
	
	cout << "Valores acima da media: " << cont;
	return 0;
}
