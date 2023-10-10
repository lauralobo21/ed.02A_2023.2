#ifndef FORWARD_LIST_H
#define FORWARD_LIST_H
#include <iostream>

// Classe que implementa a lógica de um nó da Lista
class Node {
    // tá tudo privado
    friend class ForwardList;

    int data;   // valor guardado no nó
    Node* next;  // ponteiro para o próximo nó

    // Construtor com dois argumentos
    Node(const int& val, Node *ptrNext) {
        data = val;
        next = ptrNext;
    }
    // DESTRUTOR
    ~Node() {
        std::cout << "removido " << data << '\n';
    }
};

class ForwardList {
private:
    
    Node* m_head;   // ponteiro para o nó sentinela
    Node* m_tail;   // ponteiro para o último nó da lista
    unsigned m_size;// numero de elementos atualmente na lista

public:
    // Construtor default: cria lista vazia
    // A lista vazia tem um nó sentinela e 0 elementos
    ForwardList() {
        m_tail = m_head = new Node(0, nullptr);
    }
    // Construtor de cópia
    ForwardList(const ForwardList& lst) {
        m_tail = m_head = new Node(0, nullptr);
        Node *aux = lst.m_head->next;
        while (aux != nullptr) {
            m_tail->next = new Node(aux->data, nullptr);
            aux = aux->next;
            m_tail = m_tail->next;
        }
        m_size = lst.m_size;
    }
    // Imprime na tela os elementos
    void print() {
        Node *atual = m_head->next;
        while(aux != nullptr) {
            std:: cout << atual->data << " ";
            atual = atual->next;
        }
        std:: cout << '\n';
    }
    // Insere dados no início da lista
    void push_front(const int& val) {
        Node *aux = new Node(val, m_head->next);
        m_head->next = aux;
        if(m_size == 0) {
            m_tail = aux;
        }
        m_size++;
    }
};



#endif