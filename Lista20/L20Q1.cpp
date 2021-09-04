#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;
 /*Os valores usados dentros dos if's e la�os de repeti��o se referem aos
  valores inteiros das letras min�sculas e mi�sculas da tabela ASCII*/
  
  /*Dentro das fun��es, primeiramente convertemos as letras de acordo com a criptografia correta 
  	e depois verificamos se ela est� dentro ou n�o do alfabeto e aplicamos as corre��es certas*/

void cript (int n, char str1[]);
void decript (int n, char str2[]);

int main () {
	int max = 101, num;//Inteiro entre 1 e 5
	char str1[max], str2[max];
	
	cin >> num;//Inteiro que criptografa e descriptografa os n�meros
	
	cin.get();//Captura o \n
	
	cin.getline(str1, max);//Captura str1
	cin.getline(str2, max);//Captura str2
	
	//Criptografar str1
	cout << str1 << " =>" << endl;
	cript (num, str1);
	cout << str1 << endl;
	
	//Descriptografar str2
	cout << str2 << " =>" << endl;
	decript (num, str2);
	cout << str2 << endl;
	
	return 0;
}

void cript (int n, char str1[]) {
int i = 0;
	//As condi��es dos if's usam as opera��es de convers�o como condi��o para verificar o resultado final e se � permitido
	
	//Varre a string substituindo as min�sculas e mai�sculas segunda a tabela ASCII
	for(i = 0; i < strlen(str1); i++){	
		//POSI��ES PARES
		if(i % 2 == 0){	
			//Posi��es pares e letras min�suclas
			if(islower(str1[i]) && isalpha(str1[i])){
				str1[i] += n;
				
				if(str1[i] > 122){
                    str1[i] -= 26;//Contorna o alfabeto
                }	 
			}
			
			//Posi��es pares e letras ma�usculas
			else if(isupper(str1[i]) && isalpha(str1[i])){
				str1[i] += 2 * n;
				
				if(str1[i] > 90){
                    str1[i] -= 26;//Contorna o alfabeto
                }	 
			}
		}
		
		//POSI��ES �MPARES
		else{
			//Posi��es �mpares e letras min�suclas
			if(islower(str1[i]) && isalpha(str1[i])){
				str1[i] -= n;
				if(str1[i] < 97){
                    	str1[i] += 26;//Contorna o alfabeto
                }
			}
			
			//Posi��es �mpares e letras ma�usculas
			else if(isupper(str1[i]) && isalpha(str1[i])){
				str1[i] -= 3 * n;
				
				if(str1[i] < 65){
                  str1[i] += 26;//Contorna o alfabeto
				}
			}
		}
	}
}

void decript (int n, char str2[]) {
	int i = 0;
	//As condi��es dos if's usam as opera��es de convers�o como condi��o para verificar o resultado final e se � permitido
	
	//Varre a string substituindo as min�sculas e mai�sculas segunda a tabela ASCII
	for(i = 0; i < strlen(str2); i++){
		//POSI��ES PARES
		if(i % 2 == 0){	
			//Posi��es pares e letras min�suclas
			if(islower(str2[i]) && isalpha(str2[i])){
				str2[i] -= n;
				
				if(str2[i] < 97){
                    	str2[i] += 26;//Contorna o alfabeto
                    }
                }
			//Posi��es pares e letras ma�usculas
			else if(isupper(str2[i]) && isalpha(str2[i])){
				str2[i] -= 2 * n;
				
				if(str2[i] < 65){
                    str2[i] += 26;//Contorna o alfabeto
                }
			}
		}
		//POSI��ES �MPARES
		else{
			//Posi��es �mpares e letras min�suclas
			if(islower(str2[i]) && isalpha(str2[i])){
				str2[i] += n;
				
				if(str2[i] > 122){
                    	str2[i] -= 26;//Contorna o alfabeto
                }
			}
			//Posi��es �mpares e letras ma�usculas
			else if(isupper(str2[i]) && isalpha(str2[i])){
				str2[i] += 3 * n;
				
				if(str2[i] > 90){
                    	str2[i] -= 26;//Contorna o alfabeto
                }
			}
		}
	}
}
