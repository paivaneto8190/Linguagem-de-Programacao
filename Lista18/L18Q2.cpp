#include <iostream>

using namespace std;

int main () {
	int max = 101;
	char subs1[max], subs2[max];
	
	cin.getline(subs1, max);
	cin.getline(subs2, max);
	
	cout << subs1 << " ++ " << subs2 << " = " << subs1 << subs2;

	return 0;
}
