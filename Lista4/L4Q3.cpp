#include <iostream>

using namespace std;

int main () {
    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    /////////////PARTENUM1
    if(num1 > num2 && num1 > num3 && num2 > num3){
        cout << num1 << " " << num2 << " " << num3;
    }

    else if(num1 > num2 && num1 > num3 && num3 > num2){
        cout << num1 << " " << num3 << " " << num2;
    }

    /////////////PARTENUM2
    else if(num2 > num1 && num2 > num3 && num1 > num3){
        cout << num2 << " " << num1 << " " << num3;
    }

    else if(num2 > num1 && num2 > num3 && num3 > num1){
        cout << num2 << " " << num3 << " " << num1;
    }

    /////////////PARTENUM3
    else if(num3 > num1 && num3 > num2 && num1 > num2){
        cout << num3 << " " << num1 << " " << num2;
    }

    else{
        cout << num3 << " " << num2 << " " << num1;
    }

    /////////////FIM
    return 0;
}
