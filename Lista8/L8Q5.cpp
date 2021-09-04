#include <iostream>
#include <cmath>

using namespace std;

//Retorna distância entre dois pontos
float dist_circ(float x1, float y1, float x2, float y2){
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

//Retorna se está ou não no círculo
bool circ(float r, float xc, float yc, float xp, float yp){
	if(dist_circ(xc,yc,xp,yp) <= r)
		return true;
	else
		return false;
}

int main () {
	float raio, xCentro, yCentro, xP, yP;
	
	cin >> raio >> xCentro >> yCentro >> xP >> yP;
	
	if(circ(raio, xCentro, yCentro, xP, yP))
		cout << "O ponto está dentro";
	else
		cout << "O ponto está fora";
		
	return 0;
}
