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
    // Remove o primeiro elemento da lista
    void pop_front() {
        if (m_size == 0) {
            return;
        }
        Node* aux = m_head->next;
        m_head->next = aux->next;
        if (m_tail = aux) {
            m_tail = m_head;
        }
        delete aux;
    }

    // Função que deixa a lista vazia
    void clear() {
        while (m_head->next != nullptr) {
            Node* temp = m_head->next;
            m_head->next = temp->next;
            delete temp;
        }
        m_size = 0;
        m_tail = m_head;
    }

    // Destrutor
    ~ForwardList() {
        clear();
        delete m_head;
    }
    // Sobrecarga do operador de indexação
    // Recebe um índice e retorna uma referência para
    // o dado naquela posição;
    // Essa função não checa se o índice é válido
    // Ela confia no usuário.
    int& operator[](unsigned index) { // Complexidade O(n).
        Node *aux = m_head->next;
        for(unsigned count = 0; count < index; count++) {
            aux = aux->next;
        }
        return aux->data;
    }

};



#endif