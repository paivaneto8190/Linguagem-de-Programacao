#include <iostream>

using namespace std;

int main () {
    int n, i, cont = 0;
    char nChar;
    
    cin >> n;
    
    for(i = 0; i < n; i++){
        cin >> nChar;
        
        //Usando a convers�o da tabela ASCII
        if(nChar >= 97 && nChar <= 122){/*A vari�vel char recebe inteiro correspondente a tabela ASCII*/
            cont += 1; 
        }
    }
    
    cout << cont;
    
    return 0;
}
