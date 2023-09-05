#include <iostream>

using namespace std;
int main(){
    int n;
    int ordenado = 1;
    cin >> n;
    
    int vet[n];
    for(int i = 0; i<n; i++){
        cin >> vet[i];
    }
    
    for(int i = 1; i<n; i++){
        if(vet[i] < vet[i - 1]){
            ordenado = 0;
        }
    }
    if(ordenado){
        cout << "ok" << '\n';
    }else{
        cout << "precisa de ajuste" << '\n';
    }
}