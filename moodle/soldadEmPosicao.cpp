#include <iostream>

using namespace std;

int main(){
    int matriz[3][3], cont = 0;
    
    for(int l = 0; l<3; l++){
        for(int c = 0; c<3; c++){
            cin >> matriz[l][c];
        }
    }
    
    for(int l = 0; l<3; l++){
        for(int c = 0; c<3; c++){
            if(l != 3 - 1){
                if(matriz[l][c] > matriz[l+1][c]){
                    cont++;
                }
            }
        }
    }
    
    cout << cont << '\n';
}