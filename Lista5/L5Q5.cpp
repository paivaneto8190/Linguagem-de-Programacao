#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    float val1, val2;
    char op;

    while(cin >> val1 >> val2 >> op){

    switch(op){
        case '+':
            cout << fixed << setprecision(2);
            cout << val1 << " + " << val2 << " = " << val1 + val2;
            break;
        case '-':
            cout << fixed << setprecision(2);
            cout << val1 << " - " << val2 << " = " << val1 - val2;
            break;
        case '*':
            cout << fixed << setprecision(2);
            cout << val1 << " * " << val2 << " = " << val1 * val2;
            break;
        case '/':
            if(val2 == 0){
                cout << "erro!";
                break;
            }
            cout << fixed << setprecision(2);
            cout << val1 << " / " << val2 << " = " << val1 / val2;
            break;
        default:
            cout << "erro!";
    }
    }
    return 0;
}

