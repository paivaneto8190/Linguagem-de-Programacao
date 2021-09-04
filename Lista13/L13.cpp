#include <iostream>

using namespace std;

//PARTE 1: Verificar se o número é primo
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

//PARTE 2: Posição do número
int pos_primo(int num){
	int cont_pos = 0, i;
	
	for(i = 0; i <= num; i++){
		if(ehPrimo(i))
			cont_pos++;
	}
	
	return cont_pos;//Posição do número no ranking
} 

//PARTE 3: Inverter número
int invert_num(int num){
	int cont = 0, aux, i, num_invert = 0;;
	
	aux = num;
	
	while(num > 0){//Conta quantos dígitos o número tem
		cont++;
		num /= 10;
	}
	
	for(i = 0; i < cont; i++){
		num_invert = num_invert * 10 + aux % 10;//Ao somar dez quando somamos cada termo da var auxiliar, damos um espaço de uma unidade no número para alocar o próximo dígito
		aux /= 10;
	}
	
	return num_invert;
}

//PARTE 4: Produto dos dígitos
int prod_dig(int num){
	int prod = 1, cont_dig = 0, aux, i;
	
	aux = num;//Armazena o valor inicial de num
	
	while(num > 0){//Conta quantos dígitos o número tem
		cont_dig++;
		num /= 10;
	}
	
	for(i = 0; i < cont_dig; i++){
		prod *= aux % 10;
		aux /= 10;
	}
	
	return prod;
}

//PARTE 5: Converter o número primo em binário
int primo_bin(int num_primo1){
	int num = 0, cont = 0, num_invert1 = 0, i = 0;
	
	while(num_primo1 > 0){
		cont++;
		num = num * 10 + num_primo1 % 2;//Armazena os termos de forma que fiquem invertidas, mas em binário, e o 10 dá um espaço de 1 unidade entre cada número
		num_primo1/=2;//Atualiza o número para sair do laço
	}
	
	for(i = 0; i < cont; i++){//Sai do laço, mas usa para isso a quantidade de dígitos o número em binário, capturada anteriormente
		num_invert1 = num_invert1 * 10 + num % 2;
		num = (num - num % 2) / 10;//Adiciona os números na ordem inversa, operando da unidade até a centena usando o 10 como fator de correção
	}

	return num_invert1;
}

//Função principal
int main () {
	setlocale(LC_ALL,"portuguese");
	unsigned int num;//Número positivo somente
	int numinv, contSheldon = 0, pos, posInv, prod, bin_num;
	
	cin >> num;
	
	//Verifica se o número é primo e inverte ele(PARTE 1)
	if(ehPrimo(num)){
		cout << "É primo" << endl;
		
		contSheldon++;
	}
	else{
		cout << "Não é primo" << endl;
	}
	
	pos = pos_primo(num);
	
	//Posição do número primo(PARTE 2)
	cout<< "Posição: " << pos << endl;
	
	numinv = invert_num(num); //Captura o número invertido(PARTE 3)
	
	//Imprime o número invertido sendo primo ou não
	cout << "Número invertido: " << numinv << endl;
	
	//Verifica se o número invertido é primo(PARTES 1 E 3)
	if(ehPrimo(numinv)){
	
		cout << "Número invertido é primo" << endl;
		
		contSheldon++;
	}
	else{
		cout << "Número invertido não é primo"<< endl;
	}
	
	//Armazena a posição do número invertido(PARTE 2)
	posInv = pos_primo(numinv);
		
	//Posição do número invertido
	cout << "Posição número invertido: " << posInv << endl;
	
	//Compara se as posições do num e do numInv coincidem(PARTES 2 E 3)
	if(pos == invert_num(posInv)){
		cout << "Posições coincidem" << endl;
		
		contSheldon++;
	}
	else{
		cout << "As posições não coincidem" << endl;
	}
	
	//Produto dos dígitos(PARTE 4)
	prod = prod_dig(num);
	
	//Imprime o produto dos dígitos
	cout << "Produto dos dígitos: " << prod << endl;
	
	//Compara se o produto e a posição coincidem(PARTES 2 E 4)
	if(prod == pos){
		cout << "Produto e posição coincidem" << endl;
		
		contSheldon++;
	}
	else{
		cout << "Produto e posição não coincidem" << endl;
	}
	
	//Converte o número inicial em binário(PARTE 5)
	bin_num = primo_bin(num);
	
	cout << "Número em binário: " << bin_num << endl;
	
	//Verifica se o binário é palíndromo(PARTES 3 E 5)
	if(bin_num == invert_num(bin_num)){
		cout << "Binário é palíndromo" << endl;
		
		contSheldon++;
	}
	else{
		cout << "Binário não é palíndromo" << endl;
	}
	
	//Verifica se é Sheldon
	if(contSheldon == 5)
		cout << "É Sheldon";
	else
		cout << "Não é Sheldon";
	
	return 0;
}
