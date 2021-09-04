#include <iostream>

using namespace std;

int main () {
    float n1, n2, n3, media;

    cin >> n1 >> n2 >> n3;

    media = (n1 + n2 + n3)/3.0;

    if(media >= 5 && (n1 >= 3 && n2 >= 3 && n3 >= 3)){
        cout << "Aprovado";
    }
    else if(media >= 3){//Não precisa do media < 5
        cout << "Final";
    }
    else{
        cout << "Reprovado";
    }
    return 0;
}
