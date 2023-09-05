#include <iostream>
using namespace std;

int main(){
    int matriz[3][3], soma_linha;
    
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cin >> matriz[i][j];
        }
    }
    
    for(int i = 0; i<3; i++){
        int valor_linha = 0;
        for(int j = 0; j<3; j++){
            valor_linha = valor_linha + matriz[i][j];
        }
        if(i == 0){
            soma_linha = valor_linha;
            continue;
        }
        
        if(valor_linha != soma_linha){
            cout << "nao" << '\n';
            return 0;
        }
    }
    
    cout << "sim\n";
    
}