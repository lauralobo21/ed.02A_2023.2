#ifndef LIST_H
#define LIST_H
#include "Node.h"
#include <stdexcept>
#include <initializer_list>

//24/10/23
// Classe que implementa um iterador do tipo bidirecional duplamente encadeada
class iterator_list {
private:
    // Classe amiga
    friend class List;

    // Atributos
    Node* m_ptr{};  //ja começa apontando pra nullo

public:
    // Construtor
    iterator_list() = default;

    // Construtor que recebe endereço
    iterator_list( Node *ptr ) {
        m_ptr = ptr;
    }

    bool operator==( const iterator_list& it ) {
        //if(it2 == it) ou 
        //if(it2.operator==(it))
        return m_ptr == it.m_ptr;
    }

    bool operator!=( const iterator_list& it ) {
        return m_ptr != it.m_ptr;
    }

    int& operator*() { // apontando para uma referencia
        return m_ptr->data;
    }

    // pré-incremento ++i
    iterator_list& operator++() {
        m_ptr = m_ptr->next;
        return *this;
    }

    // pós-incremento i++
    iterator_list operator++(int) {
        iterator_list temp = *this;
        //iterator_list temp(m_ptr);
        m_ptr = m_ptr->next;
        return temp;
    }

    // pré-decremento ++i
    iterator_list& operator--() {
        m_ptr = m_ptr->prev;
        return *this;
    }

    // pós-decremento i++
    iterator_list operator--(int) {
        iterator_list temp = *this;
        //iterator_list temp(m_ptr);
        m_ptr = m_ptr->prev;
        return temp;
    }
}; //Fim da classe iterator_list

//23/10/23
// Classe que implementa uma lista duplamente encadeada circular
// com nó sentinela
class List{
private: 
    Node *m_head{};       //ponteiro para o nó sentinela
    unsigned *m_size{};   //numero de elementos na lista

public:
    // Lista inicializadora
    List(const std::initializer_list<int> lst) : List() {
        for(const int& elem : lst) {
            push_back(elem);
        }
    }

    using iterator = iterator_list;

    // Retorna um iterador para o primeiro elemento
    iterator begin() {
        return iterator(m_head->next);
    }

    // Retorna um iterador para apos o último elemento
    iterator end() {
        return iterator(m_head);
    }

    // Insere um novo elemento antes do iterador position;
    // Retorna um iterador apontando para o elemento recem-inserido;
    iterator insert(iterator position, const int& val) {
        Node* temp = new Node(val, position.m_ptr->prev, position.m_ptr);
        position.m_ptr->prev->next = temp;
        position.m_ptr->prev = temp;
        m_size++;
        return 
    }

    // logo apos o elemento que foi removido.
    // Se a funçao apagou o último elemento,
    // o valor retornado é o iterado end()
    iterator erase(iterator position) {
        iterator temp(position.m_ptr->next);
        position.m_ptr->prev->next = temp.m_ptr;
        temp.m_ptr->prev = position.m_ptr->prev;
        delete position.m_ptr;
    }

    //Construtor default: cria lista vazia duplamente circular
    List() {
        m_head = new Node(0, nullptr, nullptr);
        m_head->prev = m_head;  //prev é o anterior
        m_head->next = m_head;
    }

    //Insere no final da lista
    //Complexidade O(1)
    void push_back(const int& val) {
        Node *aux = new Node(val, m_head->prev, m_head);
        m_head->prev->next = aux;
        m_head->prev = aux;
        m_size++;
    }   

    //Remove do final O(1)
    void pop_back() {
        if(m_size != 0) {
            Node *aux = m_head->prev;
            m_head->prev = aux->prev;
            aux->prev->next = m_head;
            delete aux;
            m_size--;
        }
    }

    //Retorna o valor do último elemento
    int& back() {
        if(m_size == 0) {
            throw std::runtime_error("lista vazia");
        }
        return m_head->prev->data; //valor do último elemento;
    }

    //Limpar a lista
    void clear() {
        while(m_size != 0) {
            pop_back();
        }
    }

    //Destrutor: deixa a lista vazia
    ~List() {
        clear();
        delete m_head;
    }

    //Diz se está vazia
    bool empty() {
        return m_size == 0;
    }
};

#endif