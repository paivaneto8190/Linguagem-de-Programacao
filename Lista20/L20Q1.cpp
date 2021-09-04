#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;
 /*Os valores usados dentros dos if's e laços de repetição se referem aos
  valores inteiros das letras minúsculas e miúsculas da tabela ASCII*/
  
  /*Dentro das funções, primeiramente convertemos as letras de acordo com a criptografia correta 
  	e depois verificamos se ela está dentro ou não do alfabeto e aplicamos as correções certas*/

void cript (int n, char str1[]);
void decript (int n, char str2[]);

int main () {
	int max = 101, num;//Inteiro entre 1 e 5
	char str1[max], str2[max];
	
	cin >> num;//Inteiro que criptografa e descriptografa os números
	
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
	//As condições dos if's usam as operações de conversão como condição para verificar o resultado final e se é permitido
	
	//Varre a string substituindo as minúsculas e maiúsculas segunda a tabela ASCII
	for(i = 0; i < strlen(str1); i++){	
		//POSIÇÕES PARES
		if(i % 2 == 0){	
			//Posições pares e letras minúsuclas
			if(islower(str1[i]) && isalpha(str1[i])){
				str1[i] += n;
				
				if(str1[i] > 122){
                    str1[i] -= 26;//Contorna o alfabeto
                }	 
			}
			
			//Posições pares e letras maíusculas
			else if(isupper(str1[i]) && isalpha(str1[i])){
				str1[i] += 2 * n;
				
				if(str1[i] > 90){
                    str1[i] -= 26;//Contorna o alfabeto
                }	 
			}
		}
		
		//POSIÇÕES ÍMPARES
		else{
			//Posições ímpares e letras minúsuclas
			if(islower(str1[i]) && isalpha(str1[i])){
				str1[i] -= n;
				if(str1[i] < 97){
                    	str1[i] += 26;//Contorna o alfabeto
                }
			}
			
			//Posições ímpares e letras maíusculas
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
	//As condições dos if's usam as operações de conversão como condição para verificar o resultado final e se é permitido
	
	//Varre a string substituindo as minúsculas e maiúsculas segunda a tabela ASCII
	for(i = 0; i < strlen(str2); i++){
		//POSIÇÕES PARES
		if(i % 2 == 0){	
			//Posições pares e letras minúsuclas
			if(islower(str2[i]) && isalpha(str2[i])){
				str2[i] -= n;
				
				if(str2[i] < 97){
                    	str2[i] += 26;//Contorna o alfabeto
                    }
                }
			//Posições pares e letras maíusculas
			else if(isupper(str2[i]) && isalpha(str2[i])){
				str2[i] -= 2 * n;
				
				if(str2[i] < 65){
                    str2[i] += 26;//Contorna o alfabeto
                }
			}
		}
		//POSIÇÕES ÍMPARES
		else{
			//Posições ímpares e letras minúsuclas
			if(islower(str2[i]) && isalpha(str2[i])){
				str2[i] += n;
				
				if(str2[i] > 122){
                    	str2[i] -= 26;//Contorna o alfabeto
                }
			}
			//Posições ímpares e letras maíusculas
			else if(isupper(str2[i]) && isalpha(str2[i])){
				str2[i] += 3 * n;
				
				if(str2[i] > 90){
                    	str2[i] -= 26;//Contorna o alfabeto
                }
			}
		}
	}
}
