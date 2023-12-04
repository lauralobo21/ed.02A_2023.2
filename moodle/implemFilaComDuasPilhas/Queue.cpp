#include "Queue.h"
#include <stdexcept> // para o throw

void Queue::enfileirar(int x) { // 1
    // coloca o x no deposito
    deposito.push(x);
}

bool Queue::empty() {
    if(deposito.empty() && prateleira.empty()) {
        return true;
    } return false;
}

void Queue::retirar() {  // 2
    if(prateleira.empty()){ // caso base
        while(!deposito.empty()) {
            prateleira.push(deposito.top()); //pega o elemento do topo do depósito e coloca na prateleira
            deposito.pop(); // remove o elemento do deposito
        }
    } 
    if(!prateleira.empty()){
        prateleira.pop();
    }
}

int Queue::mostrar() { // 3
    if(empty()) { // se tudo estiver vazio (caso base)
        throw new std::runtime_error("tudo está vazio");
    }
    if(prateleira.empty()){ // prateleira vazia e deposito cheio
        while(!deposito.empty()) {
            prateleira.push(deposito.top()); //elemento do topo do depósito e coloca na prateleira
            deposito.pop(); // remove o elemento do deposito
        }
    } 
    return prateleira.top(); //retorna só o primeiro elemento da prateleira
}