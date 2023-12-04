#ifndef QUEUE_H
#define QUEUE_H
#include <stack>

class Queue {
private:
    // duas pilhas, uma para depósito, outra para prateleira
    std::stack<int> deposito;
    std::stack<int> prateleira;

public: 
    void enfileirar(int x);
    void retirar();
    int mostrar();
    bool empty();
};

#endif