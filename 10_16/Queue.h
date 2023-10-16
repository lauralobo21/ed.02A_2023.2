//Lista
//Só insere no final com push
//Só retira no começo com pop
// Precisa de mais funçoes: front e back para acessar
#ifndef QUEUE_H
#define QUEUE_H
#include <stdexcept>
/**
 * @brief struct que representa um nó de uma lista encadeada
 *
 * @tparam Type
 */

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
};

/**
 * @brief Classe que implementa uma fila do tipo FIFO (first-in first-out)
 *
 * @tparam Type tipo genérico
 */
template <typename Type>
class Queue {
   private:
    Node<Type>* m_first{};  // ponteiro para o primeiro nó da fila
    Node<Type>* m_last{};   // ponteiro para o último nó da fila
    unsigned int m_size{};  // numero de elementos atualmente na fila

   public:
    //Construtor default: cria fila vazia
    Queue() = default;  // first e last apontam para nullptr e size = 0

    //Função que insere um elemento no final da fila
    //elem elemento a ser inserido
    void push(cosnt Type& elem) {
        if (m_first == nullptr) {
            m_first = m_last = new Node<Type>(elem, nullptr);
        } else {
            m_last->next = new Node<Type>(elem, nullptr);
            m_last = m_last->next;
        }
        m_size++;
    }

    // Função que remove um elemento da fila
    // se a fila estiver vazia nao faz nada.
    void pop() { //retira o primeiro da fila
        if(m_size != 0) {
            Node<Type> *aux = m_first; //cria um auxiliar pra first
            m_first = m_first->next // faz o first apontar pro segundo
            aux->next = nullptr;
            delete aux;
            m_size--;
            if(m_size == 0) { //quando a lista acabar, o último aponta 
                m_last = nullptr;
            }
        }
    }

    // Funçao que acessa o primeiro elemento da fila
    Type& front() { 
        if(m_size == 0) {
            throw std::runtime_error("fila vazia");
        } else {
            return m_last->value;
        }
    }

    // Destrutor
    const Type& front() const {

    }

    //Retornar o numero de elementos da fila
    unsigned size() const {
        return m_size;
    }

    //Retorna se fila esta vazia
    bool empty() const {
        return m_size = 0;
    }

    //troca duas filas
    void swap(const Queue& f) {
        std::swap(m_size, f.m_size);
        std::swap(m_first, f.m_first);
        std::swap(m_last, f.m_last);
    }

    // Para casa: programar o operator= 
    // >>fila3 = fila1 = fila2
    //e programar construtor de cópia
};




#endif