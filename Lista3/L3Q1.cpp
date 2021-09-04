#include <iostream>

using namespace std;

int main () {
    bool A, B;

    cin >> A >> B;

    cout << !((!A || B) && A) || B;

    return 0;
}
