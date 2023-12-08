#include <iostream>
#include <iomanip>
using namespace std;
struct Aluno
{
    string nome;
    int matricula;
    string disciplina;
    double nota;
};

void nota(Aluno a)
{
    if (a.nota >= 7.0) {
        cout << a.nome << " " << "aprovado(a) em " << a.disciplina << endl; 
    } else {
        cout << a.nome << " " << "reprovado(a) em " << a.disciplina << endl;
    }
}

int main()
{
    Aluno A;
    //Aluno B;

    getline(cin, A.nome);
    cin >> A.matricula;
    cin.ignore();
    getline(cin, A.disciplina);
    cin >> A.nota;

    /*getline(cin, B.nome);
    cin >> B.matricula;
    cin.ignore();
    getline(cin, B.disciplina);
    cin >> B.nota;
    */
    nota(A);
}