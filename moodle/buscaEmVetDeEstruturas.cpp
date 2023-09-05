#include <iostream>
#include <iomanip> 
using namespace std;

struct Aluno {
    int matricula;
    string nome;
    double media;
};

int main() {
    int qtdalunos;
    int numMatricula;
    cin >> qtdalunos;
    
    Aluno* A = new Aluno[qtdalunos];
    for(int i{}; i<qtdalunos; i++) {
        cin >> A[i].matricula;
        cin.ignore();
        getline(cin, A[i].nome);
        cin >> A[i].media;
    } cin >> numMatricula;

    bool achado = false;
    for(int i{}; i<qtdalunos; i++) {
        if(A[i].matricula == numMatricula) {
            cout << A[i].nome << endl;
            cout << A[i].media << endl;
            achado = true;
            break;
        }
    }

    if(!achado) {
        cout << "nao encontrada" << endl;
    }

    delete[] A;
    A = nullptr;
}