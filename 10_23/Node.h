#ifndef NODE_H
#define NODE_H
#include <iostream>
//Template não programa em dois arquivos ou mais

//Node de uma lista duplamente encadeada
struct Node {
    int data;
    Node *prev;
    Node *next;

    Node(const int& d, Node *ptrPrev = nullptr, Node *ptrNext = nullptr)
        : data{d}, prev{ptrPrev}, next{ptrNext}{}
};
 
#endif
