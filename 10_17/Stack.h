// PILHA (pensar como uma lista encadeada) 
// mas se for tamanho fixo usa array
// (F.I F.O) PRIMEIRO A ENTRAR, PRIMEIRO A SAIR
// pop (tirar) push(colocar)
#ifndef STACK_H
#define STACK_H
#include <initializer_list>
#include <stdexcept>

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

    // Construtor que recebe uma lista de elementos inicial
    Stack(std::initializer_list<Type> list) {
        for(Type elem : list) {
            push(elem);
        }
        /*for(auto it = list.begin(); it != list.end(); ++it) {
            push(*it);
        }*/
    }
    
    // Funçao que insere um elemento no topo da pilha
    void push(const Type& val) {
        m_top = new Node<Type>(val, m_top);
        m_size++;
    }

    // Remover um elemento do topo da pilha
    // Se a pilha for vazia não faz nada
    void pop() {
        if(m_top != nullptr) {
            Node<Type>* aux = m_top; //cria um aux pro top
            m_top = m_top->next; //top recebe o proximo
            aux->next = nullptr; // faz o prox do aux apontar pra null pq se nao perde o resto
            delete aux; //deleta aux
            m_size--;
        }
    }

    // Funcao que retorna se a pilha esta vazia
    bool empty() const { // ela ta vazia qnd o m_size é 0 ou top é nullptr
        return m_top == nullptr;
    }

    //Retorna o valor do elemento no topo
    Type& top() {
        if(empty()) {
            throw std::out_of_range("empty stack");
        }
        return m_top->value;
    }
    const Type& top() const { // const  = qnd vc sabe que não vai mudar
        if(empty()) {
            throw std::out_of_range("empty stack");
        }
        return m_top->value;
    }

    // Retorna o numero de elementos da pilha
    unsigned size() const {
        return m_size;
    }

    //Destrutor
    ~Stack() {
        delete m_top;
    }
};

#endif