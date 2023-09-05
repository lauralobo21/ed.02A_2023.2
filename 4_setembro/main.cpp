#include <iostream>
using namespace std;

struct Aluno
{
    string nome;
    string matricula;
    string endereco;
};

int main() {
    Aluno p {"Pedro", "1234365", "Rua Capixaba, 1234"};
    cout << p.nome << endl;

    Aluno *ptr {&p};
    cout << ptr->nome << endl;
    //ou
    cout << (*ptr).nome << endl;
}