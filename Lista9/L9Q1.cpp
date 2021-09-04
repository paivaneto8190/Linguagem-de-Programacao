#include <iostream>
#include <iomanip>

using namespace std;

void seg(int num){
	int hora, min, sec;
	
	hora = num/3600;
    min = (num%3600)/60;
    sec = (num%3600)%60;
    
    cout << setfill('0') << setw(2) << hora  << ":";
    cout << setfill('0') << setw(2) << min << ":";
    cout << setfill('0') << setw(2) << sec;
}

int main () {
	
	int num;
	
	cin  >> num;
	
	seg(num);
	
	return 0;
}
