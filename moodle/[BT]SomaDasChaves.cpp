#include <iostream>
#include <sstream>
#include <string>
#include <climits>
#include "Tree.h"

struct Node {
    int key;
    Node *left;
    Node *right;

    Node(int k, Node *l = nullptr, Node *r = nullptr) {
        this->key = k;
        this->left = l;
        this->right = r;
    }
};


Tree::Tree(std::string serial) {
    _root = nullptr;
    std::stringstream ss(serial);
    _serializeTree(ss, &_root);
}

void Tree::_serializeTree(std::stringstream& ss, Node **node) {
    std::string value;
    ss >> value;
    if(value == "#") // filho == nullptr
        return;
    int key = std::stoi(value);
    *node = new Node(key);
    _serializeTree(ss, &((*node)->left));
    _serializeTree(ss, &((*node)->right));
}

Tree::~Tree() {
    _clear(_root);
}

Node *Tree::_clear(Node *node) {
    if(node != nullptr) { // caso geral: vamos liberar essa arvore
        node->left = _clear(node->left);
        node->right = _clear(node->right);
        delete node;
    }
    return nullptr;
}

void Tree::inorder() {
    _inorder(_root);
}

void Tree::_inorder(Node *node) {
    if(node != nullptr) { // Caso Geral
        _inorder(node->left);
        std::cout << node->key << " ";
        _inorder(node->right);  
    }
}

void Tree::bshow(){
    _bshow(_root, "");
}

void Tree::_bshow(Node *node, std::string heranca) {
    if(node != nullptr && (node->left != nullptr || node->right != nullptr))
        _bshow(node->right , heranca + "r");
    for(int i = 0; i < (int) heranca.size() - 1; i++)
        std::cout << (heranca[i] != heranca[i + 1] ? "│   " : "    ");
    if(heranca != "")
        std::cout << (heranca.back() == 'r' ? "┌───" : "└───");
    if(node == nullptr){
        std::cout << "#" << std::endl;
        return;
    }
    std::cout << node->key << std::endl;
    if(node != nullptr && (node->left != nullptr || node->right != nullptr))
        _bshow(node->left, heranca + "l");
}


int Tree::sum_keys() { // TODO
    return _sum_keys(_root);
    
}

int Tree::_sum_keys(Node *node) { // TODO
    if(node == nullptr) {
        return 0;
        
    }
    int esquerda = _sum_keys(node->left);
    int direta = _sum_keys(node->right);
    return node->key + esquerda + direta;
}

// Para fazer essa funcao, suponha que as arvores dos testes nunca serao vazias,
// assim, sempre havera um menor valor de chave a ser retornado
int Tree::min_key() { // TODO
    return _min_key(_root);
}


// Supoe que o ponteiro recebido sempre eh diferente de nullptr
int Tree::_min_key(Node *node) { // TODO
    //if(node == nullptr) {
    //    return node->key;
    //}
    if(node->left == nullptr && node->right == nullptr) {
        return node->key;
    } 
    
    int esquerda = INT_MAX;
    int direita = INT_MAX;
    
    if(node->left != nullptr) {
        esquerda = _min_key(node->left);
    }
    
    if(node->right != nullptr) {
        direita = _min_key(node->right);
    }
    
    if(esquerda < direita && esquerda < node->key) {
        return esquerda;
    }else if (direita < node->key && direita < esquerda){
        return direita;
    }else{
        return node->key;
    }
    
    
    
    
}

int Tree::total_internal_nodes() {
    return _total_internal_nodes(_root);

}
    
int Tree::_total_internal_nodes(Node *node) { // TODO
    if(node==0){
        return 0;
    }
 if(node->left == nullptr && node->right == nullptr) {
        return 0;
    } 
    return  1 +_total_internal_nodes(node->left) + _total_internal_nodes(node->right);

    
}

int Tree::um_filho() { // TODO
    return _um_filho(_root);
}

int Tree::_um_filho(Node *node) { // TODO
    if(node == nullptr) {
        return 0;
    } 
    int aux = 0;
    if(node->left != nullptr && node->right == nullptr) {
        aux++;
    }
    if(node->right != nullptr && node->left == nullptr) {
        aux++;
    }
    aux += _um_filho(node -> left);
    aux += _um_filho(node -> right);
    return aux;
    

}


