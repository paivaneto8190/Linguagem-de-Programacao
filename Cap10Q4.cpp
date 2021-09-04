//Tirar uma letra espec�fica de uma palavra

#include <iostream>

using namespace std;

//Conta a quantidade de letras de uma palavra
void conta_letras(char str1[], char vec[], int n) {
	int i = 0, j = 0, k = 0, cont = 0;
	
	for(i = 97; i <= 122; i++){//Varre as letras usando os valores de letras min�sculas da tabela ASCII		
		j = 0;//Reinicia o valor das posi��es da string
		cont = 0;//Reinicia o contador das letras
		
		while(str1[j] != '\0'){//Varre  a string comparando as letras
			if(str1[j] == char(i))//Verifica se o elemento da string � igual as letras do alfabeto
				cont++;
					
			j++;//Atualiza a posi��o da string
			
		}
		
		vec[k] = cont;
		k++;//Atualiza as posi��es do vetor
	}
}

//Tira a letra da string e armazendo o resto em outra
void tira_c(char str1[], char c){
	int i = 0, j = 0, max = 101;
	char str2[max];
	
	
	while(str1[i] != '\0'){
		if(str1[i] != c){
		    str1[j] = str1[i];
		    j++;
		}
		   i++;
	}
	
	str1[j] = '\0';//Para reconhecer o fim da string
}

int main () {
	int i = 0, j = 0, max = 100, k = 0, cont = 0;
	char vec[26],str1[max], vec_aux[k];
	
	cout << "Informe uma frase: " << endl;
	cin.getline(str1, max);
	
	conta_letras(str1, vec, 26);
	
	for(i = 97; i <= 122; i++){//Varre as letras usando os valores de letras min�sculas da tabela ASCII	
		while(str1[j] != '\0'){
			if(str1[j] == char(i)){
				//Coloca a letra da palavra em um vetor e depois remove ela da string
				vec_aux[k] = str1[j];
				tira_c(str1, i);
				k++;//Atualiza os �ndices do vetor
			}
			j++;
		}
	}
	
	//Imprime as letras e suas quantidades
/*	for(i = 0; i < k; i++){
		cout vec[i] << endl;
	}*/
	return 0;
}
