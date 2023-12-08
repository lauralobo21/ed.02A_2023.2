#include <sstream>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
/*
vet: o vetor
rvet: o vetor impresso ao contrário
sum: a soma dos elementos
mult: a multiplicação dos elementos
min: o menor elemento
inv: inverte o vetor, depois imprime ele invertido
*/
void imprimir(vector<int> vet, int n, int indice) {
    if(indice == n) { //caso base
        cout << "]" << endl;
        return;
    } else {
        cout << vet[indice] << " ";
        imprimir(vet, n, indice+1);
    }
}

void imprimirInvertido(vector<int> vet, int n, bool flag = false) {
    if(n == 0) { //qnd chegar no primeiro
        cout << "]" << endl;
        return;
    } else {
        if(!flag) {
            cout << "rvet: " << "[ ";
        }
        cout << vet[n-1] << " ";
        imprimirInvertido(vet, n-1, true);
    }
}

void inverter(vector<int> &vet, int ini, int fim) {
    if(ini < fim) {
        int aux = vet[ini];
        vet[ini] = vet[fim];
        vet[fim] = aux;
        inverter(vet, ini+1, fim-1);
    }
}

int soma(vector<int> vet, int n) {
    if(n == 1) { //caso base
        return vet[0];
    } 
    return vet[n-1] + soma(vet, n-1);
}

int mult(vector<int> vet, int n) {
    if(n == 1) {
        return vet[0];
    }
    return vet[n-1] * mult(vet, n-1);
}

int menorElemento(vector<int> vet, int n) {
    if(n == 1) {
        return vet[0];
    } else {
        int minimo = menorElemento(vet, n-1);
        if(vet[n-1] < minimo) {
            return vet[n-1];
        } else {
            return minimo;
        }
    }
}

int main() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> vet;

    int value;
    while(ss >> value) {
        vet.push_back(value);
    }
    
    int size = vet.size();

    cout << "vet : " << "[ ";
    imprimir(vet, size, 0);
    imprimirInvertido(vet, size);
    cout << "sum : " << soma(vet, size) << endl;
    cout << "mult: " << mult(vet, size) << endl;
    cout << "min : " << menorElemento(vet, size) << endl;
    inverter(vet, 0, size-1);
    cout << "inv : " << "[ ";
    imprimir(vet, size, 0);

}
    
