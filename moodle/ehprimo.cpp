#include <iostream>
using namespace std;

int primo(int n){
    int i = 2;
    for(i = 2; i<n; i++){
        if(n%i == 0)
            return 0;
    }
        return 1;
}

int funcao(int A, int B){
    for(; A<=B; A++){
        if(primo(A) == 1)
            cout << A << '\n';
    }
    return 0;
    
}

int main(){
    int A, B;
    cin >> A;
    cin >> B;
    
    funcao(A,B);
    
}