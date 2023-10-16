#include <iostream>
#include <string>
using namespace std;


struct Aluno
{
    string nome;
    int matricula;
    double notas[3];
};

int main() {
    Aluno vet_alunos[5];

    for(int i = 0; i<=4; i++) {
        cout << "Digite o nome: ";
        getline(cin, vet_alunos[i].nome);
        cout << "Digite a matricula: ";
        cin >> vet_alunos[i].matricula;
        cout << "Digite a 3 notas do aluno: ";
        cin >> vet_alunos[i].notas[0]
            >> vet_alunos[i].notas[1]
            >> vet_alunos[i].notas[2];
        cin.ignore();
    }

    for(int i = 0; i<=4; i++) {
        cout << vet_alunos[i].nome << ","
        << vet_alunos[i].matricula << '\n';
    }
    

}