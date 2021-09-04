#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const int MAX = 20;

void transladar (double& x, double& y, double dx, double dy) {
	x += dx;
	y += dy;
	
	cout << fixed << setprecision(2);//Regula a precisão de casas para 2
	cout << " -> ";
    cout << "( " << x << " , " << y << " )" ;
}

void rotacionar (double& x, double& y, double angulo) {//O parâmetro angulo vai receber um termo da matriz referente ao ângulo
	double aux1, aux2;
	//As variáveis auxiliares servem para evitar que o valor de y seja alterado já que y é executado depois
	aux1 = x;
	aux2 = y;
	
	//Converte de grau para radiano
	angulo = (angulo * M_PI) / 180;
	
	//Os novos x e y rotacionados
	x = cos(angulo) * aux1 + sin(angulo) * aux2;
	y = cos(angulo) * aux2 - sin(angulo) * aux1;
	
	cout << fixed << setprecision(2);//Regula a precisão de casas para 2
	cout << " -> ";
    cout << "( " << x << " , " << y << " )" ;
}

int main () {
	int cont = 0, i, tam;
	double x = 0, y = 0, mAux[2][MAX] = {}, aux1, aux2;//Essa matriz com duas linhas vai armazenar em cada entrada os dados da operação dependendo do comando dado
	char escolha[cont] = {};//Vetor que armazena os comandos
	
	cin >> x >> y >> escolha[cont];
	
		while(escolha[cont] == 't' || escolha[cont] == 'r'){
			//Transladar
			if(escolha[cont] == 't'){
				cin >> mAux[0][cont] >> mAux[1][cont];//Armazena na mesma coluna mas em linhas diferentes os operadores dx e dy
				cont++;
			}
			
			//Rotacionar
			else if(escolha[cont] == 'r'){
				cin >> mAux[0][cont];//Armazena na primeira linha o angulo que a pessoa digitar
				cont++;
			}

			cin >> escolha[cont];//Captura a nova escolha do usuário
		} 
		
		tam = cont;//Vai servir para rodar o for que verifica e aplica a operação desejada
		
		cout << fixed << setprecision(2);//Regula a precisão de casas para 2
		cout << "( " << x << " , " << y << " )";//Imprime os valores iniciais de x e y antes das modificações
		
		aux1 = x;
		aux2 = y;
		
		//Imprime o resto dos valores após serem digitados os comandos
		for(i = 0 ; i < tam; i++){
        	if(escolha[i] == 't'){
            	transladar (aux1, aux2, mAux[0][i], mAux[1][i]);//Na matriz a primeira e segunda linhas contem dx e dy, respectivamente
        	}
        	else{
            	rotacionar (aux1, aux2, mAux[0][i]);
        	}
    	}
	
	return 0;
}
