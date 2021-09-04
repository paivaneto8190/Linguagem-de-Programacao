#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double taylor(double x){
	int i = 2;
	double aux, mod, lnx = x - 1;
	
	mod = abs(x - 1);
	
	while(mod >= 0.001){
		mod = abs(pow(x - 1, i) / i);//A partir desse ponto verificamos se o log não fica negativo
		lnx += (-1) * pow((-1), i) * pow(x - 1, i) / i;
	
		i++;	
	}
	
	return lnx;
}

int main () {
	double x, soma = 0;
	
	cin >> x;
	
	while(x != 0){
		cout << fixed << setprecision(4);
		cout << "Meu ln: " << taylor(x) << " C++: " << log(x) << endl; 
		
		soma += abs(taylor(x) - log(x));
		
		cin >> x;
	}
	
	cout << "Diferença: " << soma << endl;
	
	return 0;
}
