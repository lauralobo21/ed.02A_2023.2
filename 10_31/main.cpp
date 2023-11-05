#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main() {
    BinaryTree<int> vazia;
    BinaryTree<int> t4(4, vazia, vazia);
    BinaryTree<int> t5(5, vazia, vazia);
    BinaryTree<int> t3(3, t4, vazia);
    BinaryTree<int> t7(7, t3, t5);

    
}