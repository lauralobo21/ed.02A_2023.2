#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    int q;
    cin >> q;
    
    Queue fila;
    
    for(int i = 0; i<q; ++i) {
        int operacao;
        
        cin >> operacao;
        if(operacao == 1) {
            int num;
            cin >> num;
            fila.enfileirar(num);
        } else if(operacao == 2) {
            fila.retirar();
        } else if(operacao == 3) {
            try { // tenta imprimir o primeiro elemento
                cout << fila.mostrar() << endl;
            }
            catch(runtime_error *e) {
                continue;
            }
        }
    }
}
