#include <iostream>

using namespace std;

int main () {
	//Vetores também são matrizes, matrizes chamadas de vetores linha ou coluna
	int n, m = 0, i, j;
	bool vecTam;
	
	//Tamanho de vec1
	cin >> n;
	
	int vec1[n] = {}, vec2[m] = {};//Vec dois vai guardar os termos que não se repetem e unicamente os que se repetem
	
	//Recebe os termos de vec1
	for(i = 0; i < n; i++){
		cin >> vec1[i];
	}
	
	//Varre o vetor e verifica repetição
	for(i = 0; i < n; i ++){
		vecTam = false;
		
		for(j = 0; j < i; j++){//Compara o termo de íncide i com os termos de índice menors do que ele no laço secundário
			if(vec1[i] == vec1[j]){//Adiciona os números mesmo se repetindo mas evita que nas próximas comparações eles sejam colocados em vec2
				vecTam = true;
				break;//Para o laço secundário se encontrar um número repetido
			}
		}
		
		//Armazena em vec2 os termos que não se repetem
		if(vecTam == false){
			vec2[m] = vec1[i];//Cria um novo indice para o tamanho de vec2, começando em 0, e aumenta para caber os outros vetores sem gastar espaço de memória
			m++;
		}
}

	//Imprime o vetor
	cout << "[ ";
	
	for(i = 0; i < m; i++){
		if(i < (m - 1))
			cout << vec2[i] << " , ";
		else{
			cout << vec2[i];
		}
	}
	
	cout << " ]";
	
	return 0;
}
