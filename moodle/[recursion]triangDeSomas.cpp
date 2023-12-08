#include <iostream>
#include <iomanip>
using namespace std;

//funçao testa todos os numeros do vetor
void piramide(int vet[], int n) {
    if(n == 1) { // caso base;
        cout << "[" << vet[0] << "]" << endl;
        return;
    } 
    int* novoVet = new int[n - 1]; //criando nova vet
    for(int i = 0; i<n-1; i++) { //caso geral
        novoVet[i] = vet[i] + vet[i+1];
    }
    piramide(novoVet, n-1);
    
    cout << "[";
    for(int i = 0; i<n; i++) {
        cout << vet[i];
        if(i < n-1)
            cout << ", ";
    } cout << "]" << endl;
    
}

int main() {
    int n;
    cin >> n;
    int vet[n];
    for(int i = 0; i<n; i++) {
        cin >> vet[i];
    }
    piramide(vet, n);
}