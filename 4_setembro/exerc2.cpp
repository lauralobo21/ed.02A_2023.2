#include <iostream>
using namespace std;

// I
struct Pessoa
{
    string nome;
    int idade;
};

//III
void preencheArray(Pessoa *A, int n) {
    for(int i=0; i<n; i++) {
        cout << "Digite o nome: ";
        cin.ignore();
        getline(cin, A[i].nome);
        
        cout << "Digite a idade: ";
        cin >> A[i].idade;

    }
}

//IV
void imprimeArray(Pessoa *A, int n) {
    for(int i{0}; i<n; i++) {
        cout << "nome: " << A[i].nome
            << ", idade: " << A[i].idade << endl;
    }
}

//II
int main() {
    int n{};
    cout << "Digite o tamanho da array: ";
    cin >> n;
    
    Pessoa *ptr = new Pessoa[n];
    
    preencheArray(ptr, n);
    imprimeArray(ptr, n);
    delete[] ptr; //desaloca array
    //prt = nullpre (so se tivesse mais codigo e eu fosse usar o ptr)
}