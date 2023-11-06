#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include <iostream>
#include "Node.h"
#include <sstream>

template <typename Type>
class BinaryTree {
private:
    Node<Type>* m_root {}; // ponteiro para a raiz

public:
    // Construtor vazio
    BinaryTree() = default;

    // Construtor que cria uma arvore a
    // partir de outras duas
    BinaryTree(const Type& val, 
               BinaryTree<Type>& tleft, 
               BinaryTree<Type>& tright) 
    {
        m_root = new Node<Type>(val,tleft.m_root,tright.m_root);
        tleft.m_root = tright.m_root = nullptr;
    }

    BinaryTree(std::string_view serial) {

    }
    // Funcao que retorna true se e somente se 
    // a arvore estiver vazia
    bool empty() const {
        return m_root == nullptr;
    }

    // Funcao publica que imprime as chaves em 
    // pre-ordem
    void preOrder() const {
        preOrder(m_root);
    }
    // pos-ordem
    void postOrder() const {
        postOrder(m_root);
    }
    // ordem simetrica
    void inOrder() const {
        inOrder(m_root);
    }
    
    // Funcao publica que retorna se um certo valor
    // esta na arvore
    bool contains(const Type& val) const {
        return contains(m_root, val);
    }

    // Funcao publica que limpa a arvore
    // Deixa ela vazia
    void clear() {
        clear(m_root);
    }

    // Destrutor
    ~BinaryTree() {
        m_root = clear(m_root);
    }

    // funcao publica que retorna o tamanhao da arvore
    unsigned size() const {
        return size(m_root);
    }

    BinaryTree(const BinaryTree&) = delete;
    BinaryTree& operator = (const BinaryTree& t) = delete;

    std::string serial() const {
        std::stringstream ss;
        serialize(m_root, ss);
        return ss.str();    // da uma string no formato vetor de caracteres
    }
private:
    // Funcao recursiva que recebe uma stringstream
    // constendo o serial de uma arvore. Ela consome
    // o primeiro valor contido nessa stringstream
    // cria um no e faz o mesmo procedimento para
    // as subarvores esquerda e direita do nó
    Node<Type>* deserialize(std::stringstream& ss) {
        std:: string value;
        ss >> value;
        if(value == "#") {
            return nullptr;
        } 
        else {
            std::stringstream newss(value);
            Type aux;
            newss >> aux;
            Node<Type>* temp = new Node(value, nullptr, nullptr);
            temp->left = deserialize(ss);
            temp->right = deserialize(ss);
            return temp;
        }
    }

    // Funcao privada recursiva que recebe a raiz de
    // uma arvore e percorre a arvore em pre-ordem
    // crinado uma stringstream contendo o serial dela
    void serialize(Node<Type>* node, std::stringstream& ss) {
        if(node == nullptr) {   //Caso de parada
            ss << "# ";
        }
        else {
            ss << node->data << " ";
            serialize(node->left, ss);
            serialize(node->right, ss);

        }
    }
    // Funcao recursiva que recebe a raiz
    // de uma arvore e retorna o numero
    // de nos da tal arvore
    unsigned size(Node<Type> *node) const {
        if(node == nullptr) {       // caso base
            return 0;
        }
        else {
            return 1 + size(node->left) + size(node->right);
        }
    }

    // funcao recursiva que percorre a arvore
    // em pre-ordem
    void preOrder(Node<Type>* node) const {
        if(node != nullptr) {
            std::cout << node->data << " ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }
    // funcao recursiva que percorre a arvore
    // em pos-ordem
    void postOrder(Node<Type>* node) const {
        if(node != nullptr) {
            postOrder(node->left);
            postOrder(node->right);
            std::cout << node->data << " ";
        }
    }
    // funcao recursiva que percorre a arvore
    // em ordem simetrica
    void inOrder(Node<Type>* node) const {
        if(node != nullptr) {
            inOrder(node->left);
            std::cout << node->data << " ";
            inOrder(node->right);
        }
    }

    // Funcao recursiva que recebe a raiz de uma
    // arvore e um certo valor val e retorna true
    // se e somente se a arvore contem val
    // como uma de suas chaves
    bool contains(Node<Type> *node, const Type& val) const {
        if(node == nullptr) 
            return false;
        return (node->data == val) ||
               contains(node->left, val) ||
               contains(node->right, val);
    }

    // Funcao recursiva que recebe
    // a raiz de uma arvore e 
    // deleta todos os seus nos
    // Retorna a arvore vazia
    Node<Type>* clear(Node<Type> *node) {
        if(node == nullptr) { // caso base
            return nullptr;
        }
        else{ // caso geral
            // terminar
        }
    }

};

#endif //BINARY_TREE_H