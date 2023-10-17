#ifndef STACK_H
#define STACK_H

template <typename Type>
struct Node {
    Type value;
    Node* next;

    Node(const Type& val, Node* nextPtr) {
        value = val;
        next = nextPtr;
    }

    ~Node() {
        delete next;  // deleta recursivamente todos os nós após este
    }
}; // Fim da classe Node<Type>

// Classe que implementa uma pilha generica
template <typename Type>
class Stack {
private:
    Node<Type>* m_top{};    //ponteiro para o topo da pilha
    unsigned m_size{};      //numero de elementos da pilha

public:
    // Construtor default: criar pilha vazia
    Stack() = default;
};








#endif