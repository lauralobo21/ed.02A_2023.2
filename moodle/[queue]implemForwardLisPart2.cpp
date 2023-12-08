/************************************************************************
 * Arquivo de implementacao da classe ForwardList
 * Voce deve implementar as funcoes que faltam ao final deste arquivo
 ************************************************************************/
#include <iostream>

#include "ForwardList.h"
#include "Node.h"

// *********************************************************
// Implementacao das funcoes-membro da classe ForwardList
// *********************************************************

ForwardList::ForwardList() {
    m_head = new Node(0, nullptr);
    m_size = 0;
}

ForwardList::ForwardList(const ForwardList& lst) {
    m_head = new Node(0, nullptr);
    m_size = lst.m_size;
    Node* lstCurrent = lst.m_head->next;
    Node* thisLast = m_head;
    while (lstCurrent != nullptr) {
        thisLast->next = new Node(lstCurrent->data, nullptr);
        lstCurrent = lstCurrent->next;
        thisLast = thisLast->next;
    }
}

bool ForwardList::empty() const { return m_head->next == nullptr; }

int ForwardList::size() const { return m_size; }

void ForwardList::clear() {
    while (m_head->next != nullptr) {
        Node* aux = m_head->next;
        m_head->next = aux->next;
        delete aux;
    }
    m_size = 0;
}

ForwardList::~ForwardList() {
    clear();
    delete m_head;
}

void ForwardList::print() const {
    Node* temp = m_head->next;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << '\n';
}

// Concatena a lista atual com  a lista lst
void ForwardList::concat(ForwardList& lst) {
    // L1 = l1 E Lst = l2
    Node* auxL1 = this->m_head;
    while (auxL1->next != nullptr) {  // percorrendo a L1
        auxL1 = auxL1->next;
    }
    auxL1->next = lst.m_head->next; //cancatenei
    m_size += lst.m_size;
    lst.m_head->next = nullptr;
    lst.m_size = 0;
    
}

// Remove da lista todas as ocorrencias do Item x
void ForwardList::remove(const int& x) {
    if (m_head->next == nullptr) {
        return;
    }
    Node* head = this->m_head;
    while (head->next != nullptr) {
        if (head->next->data == x) {
            Node* aux = head->next;
            head->next = aux->next;
            delete aux;

            m_size--;
        } else {
            head = head->next;
        }
    }
    //{2,1,3,4,2,5}
}

// Devolve um ponteiro para uma copia desta lista
ForwardList* ForwardList::clone() {
    ForwardList* lista = new ForwardList();
    Node* currentNew = lista->m_head;
    Node* currentOld = m_head;
    while (currentOld->next != nullptr) {
        int valor = currentOld->next->data;
        Node* newNode = new Node(valor, nullptr);
        currentNew->next = newNode;
        currentNew = currentNew->next;
        currentOld = currentOld->next;
        lista->m_size++;
    }
    return lista;
}

// Copia os elementos do vector vec para o final da lista
void ForwardList::appendVector(const std::vector<int>& vec) {
    Node* current = this->m_head;
    while (current->next != nullptr) {
        current = current->next;
    }
    for (int i = 0; i < vec.size(); i++) {
        Node* newNode = new Node(vec[i], nullptr);
        current->next = newNode;
        current = newNode;
        m_size++;
    }
}

// Troca o conteudo dessa lista pelo conteudo de lst
void ForwardList::swap(ForwardList& lst) {
    Node* aux = this->m_head;
    this->m_head = lst.m_head;
    lst.m_head = aux;
}

// Determina se alista lst, passada por parametro eh igual
// a lista em questão
// FowardList l1, l2;
// if(l1 == l2) {...}
bool ForwardList::operator==(const ForwardList& lst) const {
    if (lst.size() != this->size()) {  // ver se são de tamanhos iguais
        return false;
    }
    Node* nodeLst = lst.m_head;
    Node* nodeThis = this->m_head;
    while (nodeLst->next != nullptr) {
        nodeLst = nodeLst->next;  // estao andando
        nodeThis = nodeThis->next;
        if (nodeLst->data != nodeThis->data) {
            return false;
        }
    }
    return true;
}

bool ForwardList::operator!=(const ForwardList& lst) const {
    if (lst.size() != this->size()) {  // ver se são de tamanhos iguais
        return true;
    }
    Node* nodeLst = lst.m_head;
    Node* nodeThis = this->m_head;
    while (nodeLst->next != nullptr) {
        nodeLst = nodeLst->next;  // estao andando
        nodeThis = nodeThis->next;
        if (nodeLst->data != nodeThis->data) {
            return true;
        }
    }
    return false;
}

// Inverte a ordem dos nós(primeiro vira o ultimo e segundo vira penultimo)
void ForwardList::reverse() {
    Node* aux = m_head->next;
    Node* penultimo = nullptr;
    Node* next = nullptr;

    while (aux != nullptr) {
        next = aux->next;
        aux->next = penultimo;
        penultimo = aux;
        aux = next;
    }
    m_head->next = penultimo;
}
/*void ForwardList::reverse() {
    Node* nos[m_size];
    Node* current = this->m_head->next;
    for(int i = 0; i<m_size; i++) {
        nos[i] = current;
        current = current->next;
    }
    for(int i = m_size-1; i>0; i--) {
        nos[i]->next = nos[i-1];
    }
    nos[0]->next = nullptr;
    this->m_head = nos[m_size-1];
}*/


