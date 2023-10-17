#include <iostream>
#include "Stack.h"
using namespace std;

struct Pessoa {
    int idade;
    string nome;
};

int main() {
    Stack<Pessoa> pilha{{21, "João"}, {20, "Maria"}};

    while(!pilha.empty()) {
        cout << pilha.top().nome << endl;
        pilha.pop();
    }
}
