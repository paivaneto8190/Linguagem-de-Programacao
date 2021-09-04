#include <iostream>

using namespace std;

int main () {

    int val;

    cin >> val;

    cout << val/100 << " nota(s)de 100" << endl;
    cout << (val%100)/50 << " nota(s)de 50" << endl;
    cout << (val%100)%50/20 << " nota(s)de 20" << endl;
    cout << (val%100)%50%20/10 << " nota(s)de 10" << endl;
    cout << (val%100)%50%20%10/5 << " nota(s)de 5" << endl;
    cout << (val%100)%50%20%10%5/2 << " nota(s)de 2" << endl;
    cout << (val%100)%50%20%10%5%2<< " moeda de 1" << endl;

    return 0;
}
