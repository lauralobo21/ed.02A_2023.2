#include <iostream>
using namespace std;

void imprimir_vetor(int n, int vet[]) { //ou *vet
    cout << sizeof(vet); //8

    for(int i = 0; i<n; i++) {
        cout << vet[i] << endl; 
    } cout << endl;
}

int main() {
    int v[5] = {1,2,3,4,5};
    //imprimir_vetor(5, v);

    cout << v[0] << endl; // 1
    cout << v << endl; // endereço de memoria
    cout << *v << endl // 1
    cout << &v[0] << endl; // endereço de memoria

}




/*//TROCAR OS VALORES 
void troca(int *p1, int *p2) {
    int aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}

int main() {
    int a {12};
    int b {4};
    cout << "a = " << a << ", b = " << b << endl;
    troca(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;

    
}
// QUADO USA O NOME DE UMA ARRAY DENTRO DE UM COUT VAI IMPRIMIR UM PONTEIRO (O ENDEREÇO DE MEMÓRIA DE ARRAY)