#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;
/*A fun��o que imprime as informa��es dos produtos est� dentro do struct por 
ser mais f�cil chamar ela com o �ndice do vetor prod para imprimir os dados*/

const int tam = 41;//Tamanho global da string que armazena at� 40 caracteres

struct Produto {
	char nome[tam];
	int cod, tipo;
	float preco;
	
	//Imprime informa��es de cada produto
	void imprime_info () {
		cout << "{ c�digo: " << cod 
			 << " , nome: " << nome 
			 << " , pre�o: " << preco;
			 
		if(tipo == 0) 
			cout << " , tipo = Eletrodom�stico }\n"; 
		else if(tipo == 1) 
			cout << " , tipo = Moda }\n";
		else
			cout << " , tipo = Outro }\n";
	}
};

//Verifica o produto mais caro do vetor de produtos
void prodC(struct Produto prod[], int n){
	int i = 0, aux;
	float maior;
	
	maior = prod[0].preco;//Assumo o valor na primeira posi��o do vetor como o maior e depois compara no for abaixo
	
	for(i = 0; i < n; i++){
		if(prod[i].preco > maior){
			maior = prod[i].preco;//Troca o valor da vari�vel de compara��o
			aux = i;//Armazena do produto atual mais caro
		}
	}
	cout << "Mais caro\n";
	prod[aux].imprime_info();
}

//Verifica se o iPad est� dentro do vetor de produtos
bool iPad (struct Produto prod[], int n) {
	int i = 0;
	bool teste = false;
	for(i = 0; i < n; i++){
		if(strcmp(prod[i].nome, "iPad") == 0)
			return true;
	}
	return false;
}

//Retorna o lucro dos eletrodom�sticos
float lucroEletro(struct Produto prod[], int n){
	float lucro = 0;
	int i;
	
	for(i = 0; i < n; i++){
		if(prod[i].tipo == 0){
			lucro += prod[i].preco;
		}
	}
	cout << fixed << setprecision(2);//S� precisa de um cout nesse formato
	return lucro;
}

int main () {
	int i = 0, n;//tam � o tamanho de uma string que armazena 40 caracteres
	
	cin >> n;//Tamanho do vetor prod_preco
	cin.ignore();//Captura o \n no fim do cin
	
	Produto prod[n];
	
	for(i = 0; i < n; i++){
		cin.getline(prod[i].nome, tam);//pode digitar frase com espa�o
		cin >> prod[i].cod >> prod[i].preco >> prod[i].tipo;
		cin.ignore();//Pega o \n ap�s o cin para que na pr�xima repeti��o n�o d� erro no cin.getline
	}
	
	//Imprime informa��es do produto
	for(i = 0; i < n; i++){
		prod[i].imprime_info();
	}
	
	//Imprime o mais caro
	prodC(prod, n);
	
	//Imprime se tem iPad nos produtos
	if(iPad(prod, n))
		cout << "Tem iPad\n";
	else
		cout << "N�o tem iPad\n";
		
	//Imprime o lucro dos eletrodom�sticos
	cout << "Lucro: " << lucroEletro(prod, n);
	return 0;
}


