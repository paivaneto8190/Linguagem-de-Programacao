#include <iostream>

using namespace std;

//PARTE 1: Verificar se o n�mero � primo
bool ehPrimo(int n){
	int cont = 0, i;
	for(i = 2; i <= n; i++){
		if(n%i == 0){
			cont++;
		}
	}
	
	if(cont == 1)
		return true;
	else 
		return false;
}

//PARTE 2: Posi��o do n�mero
int pos_primo(int num){
	int cont_pos = 0, i;
	
	for(i = 0; i <= num; i++){
		if(ehPrimo(i))
			cont_pos++;
	}
	
	return cont_pos;//Posi��o do n�mero no ranking
} 

//PARTE 3: Inverter n�mero
int invert_num(int num){
	int cont = 0, aux, i, num_invert = 0;;
	
	aux = num;
	
	while(num > 0){//Conta quantos d�gitos o n�mero tem
		cont++;
		num /= 10;
	}
	
	for(i = 0; i < cont; i++){
		num_invert = num_invert * 10 + aux % 10;//Ao somar dez quando somamos cada termo da var auxiliar, damos um espa�o de uma unidade no n�mero para alocar o pr�ximo d�gito
		aux /= 10;
	}
	
	return num_invert;
}

//PARTE 4: Produto dos d�gitos
int prod_dig(int num){
	int prod = 1, cont_dig = 0, aux, i;
	
	aux = num;//Armazena o valor inicial de num
	
	while(num > 0){//Conta quantos d�gitos o n�mero tem
		cont_dig++;
		num /= 10;
	}
	
	for(i = 0; i < cont_dig; i++){
		prod *= aux % 10;
		aux /= 10;
	}
	
	return prod;
}

//PARTE 5: Converter o n�mero primo em bin�rio
int primo_bin(int num_primo1){
	int num = 0, cont = 0, num_invert1 = 0, i = 0;
	
	while(num_primo1 > 0){
		cont++;
		num = num * 10 + num_primo1 % 2;//Armazena os termos de forma que fiquem invertidas, mas em bin�rio, e o 10 d� um espa�o de 1 unidade entre cada n�mero
		num_primo1/=2;//Atualiza o n�mero para sair do la�o
	}
	
	for(i = 0; i < cont; i++){//Sai do la�o, mas usa para isso a quantidade de d�gitos o n�mero em bin�rio, capturada anteriormente
		num_invert1 = num_invert1 * 10 + num % 2;
		num = (num - num % 2) / 10;//Adiciona os n�meros na ordem inversa, operando da unidade at� a centena usando o 10 como fator de corre��o
	}

	return num_invert1;
}

//Fun��o principal
int main () {
	setlocale(LC_ALL,"portuguese");
	unsigned int num;//N�mero positivo somente
	int numinv, contSheldon = 0, pos, posInv, prod, bin_num;
	
	cin >> num;
	
	//Verifica se o n�mero � primo e inverte ele(PARTE 1)
	if(ehPrimo(num)){
		cout << "� primo" << endl;
		
		contSheldon++;
	}
	else{
		cout << "N�o � primo" << endl;
	}
	
	pos = pos_primo(num);
	
	//Posi��o do n�mero primo(PARTE 2)
	cout<< "Posi��o: " << pos << endl;
	
	numinv = invert_num(num); //Captura o n�mero invertido(PARTE 3)
	
	//Imprime o n�mero invertido sendo primo ou n�o
	cout << "N�mero invertido: " << numinv << endl;
	
	//Verifica se o n�mero invertido � primo(PARTES 1 E 3)
	if(ehPrimo(numinv)){
	
		cout << "N�mero invertido � primo" << endl;
		
		contSheldon++;
	}
	else{
		cout << "N�mero invertido n�o � primo"<< endl;
	}
	
	//Armazena a posi��o do n�mero invertido(PARTE 2)
	posInv = pos_primo(numinv);
		
	//Posi��o do n�mero invertido
	cout << "Posi��o n�mero invertido: " << posInv << endl;
	
	//Compara se as posi��es do num e do numInv coincidem(PARTES 2 E 3)
	if(pos == invert_num(posInv)){
		cout << "Posi��es coincidem" << endl;
		
		contSheldon++;
	}
	else{
		cout << "As posi��es n�o coincidem" << endl;
	}
	
	//Produto dos d�gitos(PARTE 4)
	prod = prod_dig(num);
	
	//Imprime o produto dos d�gitos
	cout << "Produto dos d�gitos: " << prod << endl;
	
	//Compara se o produto e a posi��o coincidem(PARTES 2 E 4)
	if(prod == pos){
		cout << "Produto e posi��o coincidem" << endl;
		
		contSheldon++;
	}
	else{
		cout << "Produto e posi��o n�o coincidem" << endl;
	}
	
	//Converte o n�mero inicial em bin�rio(PARTE 5)
	bin_num = primo_bin(num);
	
	cout << "N�mero em bin�rio: " << bin_num << endl;
	
	//Verifica se o bin�rio � pal�ndromo(PARTES 3 E 5)
	if(bin_num == invert_num(bin_num)){
		cout << "Bin�rio � pal�ndromo" << endl;
		
		contSheldon++;
	}
	else{
		cout << "Bin�rio n�o � pal�ndromo" << endl;
	}
	
	//Verifica se � Sheldon
	if(contSheldon == 5)
		cout << "� Sheldon";
	else
		cout << "N�o � Sheldon";
	
	return 0;
}
