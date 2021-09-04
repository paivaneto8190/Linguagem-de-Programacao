#include <iostream> 

using namespace std;

int soma_div(int num){
	int i = 1, soma = 0;
	
	while(i < num){
		if(num%i == 0){
			soma += i;
		}
		
		i++;
	}
	
	return soma;
}

bool num_amigo(int num1, int num2){
	if(soma_div(num1) == num2 && soma_div(num2) == num1){
		    return true;
	}
	else
		return false;	
}

int main () {
	int n, i, aux1;
	
	cin >> n;
	
	for(i = 2; i <= n; i++){
		aux1 = soma_div(i);//Se a soma dos divisores for igual ao número, então são amigos
		
		if(num_amigo(i, aux1))//Compara o próprio número com a soma dos divisores dele
			cout << i << " amigo de " << aux1 << endl;
	}	

	return 0;
}
