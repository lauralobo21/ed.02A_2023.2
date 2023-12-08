


// APAGAR UMA ÁRVORE
Node* BST::clear(Node* node) {
    if(node != nullptr) {
        node->left = clear(node->left);
        node->right = clear(node->rigth);
        delete node;
    }
    return nullptr;
}

//PROCURAR O NÓ COM A KEY
Node *BST::search(Node* node, int key) {
    if(node == nullptr || node->key == key) {
        return node;
    }
    if(key > node->key) {
        return search(node->right, key);
    } else {
        return search(node->left, key);
    }
}

Node *BST::minimum(Node* node) { // o menor valor sempre vai estar mais a esquerda
    if(node != nullptr && node->left != nullptr) { //se o nó não for nulo e o nó a esquerda não for nulo, vai até o menor
        return minimum(node->left);
    } else {
        return node //se acabar, retorna o nó
    }
}

Node *BST::maximo(Node *node) { // mesma coisa do mínimo, mas pra direita
    if(node != nullptr && node->right != nullptr) {
        return maximo(node->right);
    } else {
        return node;
    }
}






