#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
#include "Node.h"

template <typename Type>
class BinaryTree {
private:
    Node<Type>* m_root {};  //ponteiro para a raiz

public:
    // Construtor vazio
    BinaryTree() = default;

    // Construtor que cria uma árvore a partir de outras duas
    BinaryTree(const Type& Val, BinaryTree<Type>& tleft, BinaryTree& tright) {
        m_root = new Node<Type>(val, tleft.m_root, tright.m_root);
        tleft.m_root = tright.m_root = nullptr;
    }

    // a arvore estiver vazia
    bool empty() const {
        return m_root == nullptr;
    }

    // Funcao publica que imprime as chaves em pre-ordem
    void preOrder() {
        preOrder(m_root);
    }

    void postOrder() {
        postOrder(m_root);
    }

    void inOrder() {
        inOrder(m_root);
    }

    private:
    // Funcao recursiva que percorre a arvore em pre-ordem
    void preOrder(Node<Type>* node) {
        if(node != nullptr) {
            std::cout << node->data << " ";
            preOrder(node->left);
            preOrder(node->right);
            std::cout << node->data;
        }
    }
    
    //
    void postOrder(Node<Type>* node) {
        if(node != nullptr) {
            std::cout << node->data << " ";
            postOrder(node->left);
            postOrder(node->right);
        }
    }
};
#endif
