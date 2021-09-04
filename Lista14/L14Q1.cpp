#include <iostream>

using namespace std;

int main () {
    int n, i, v[n] = {}, u[n] = {}, num;
    
    cin >> n;
    
    for(i = 0; i < n; i++){
        cin >> num;
        v[i] = num;
    }
    
    for(i = 0; i < n; i++){
        cin >> num;
        u[i] = num;
    }
 	
	cout << "[ ";
	
	 for(i = 0; i < n; i++){ 
        v[i] = v[i] + u[i];
        
        if(i < (n - 1))
        	cout << v[i] << " , ";
        else
        	cout << v[i];
    }
    
    cout << " ]";
    return 0;
}
