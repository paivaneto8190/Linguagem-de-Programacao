#include <iostream>

using namespace std;

int main () {
	int l1, i, j;
	
	cin >> l1;
	
	int matIden[l1][l1] = {};
	
	for(i = 0; i < l1; i++){
		for(j = 0; j < l1; j++){
			if(i == j)
				matIden[i][j] = 1;
			else
				matIden[i][j] = 0;
	 }
	}
	
	for(i = 0; i < l1; i++){
		for(j = 0; j < l1; j++){
			cout << matIden[i][j] << " ";
		}
		cout << endl;//Pula para a outra linha quando finaliza a de cima
	}
	
	return 0;
}
