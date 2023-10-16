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
        for(int count = 0; count < index; count++) {
            aux = aux->next;
        }
        return aux->data;
    }
