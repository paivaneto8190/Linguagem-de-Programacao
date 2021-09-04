#include <iostream>
#include <iomanip>

using namespace std;

void seg(int num, int& hora, int& min, int& sec){
	
	hora = num/3600;
    min = (num%3600)/60;
    sec = (num%3600)%60;
}

int main () {
	int num_seg, hora, min, sec;
	
	cin >> num_seg;
	
	seg(num_seg, hora, min, sec);
	
	if(hora >= 0 && hora <= 5)
		cout << "Madrugada";
	else if(hora >= 6 && hora <= 11)
		cout << "Manhã";
	else if(hora >= 12 && hora <= 17)
		cout << "Tarde";
	else if(hora >= 18 && hora <= 23)
		cout << "Noite";
	
	return 0;
}
