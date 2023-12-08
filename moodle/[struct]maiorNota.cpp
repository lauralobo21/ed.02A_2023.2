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

int main() {
    Aluno A; 
    Aluno B;
    getline(cin, A.nome);
    cin >> A.matricula;
    cin.ignore();
    getline(cin, A.disciplina);
    cin >> A.nota;
    cin.ignore();

    getline(cin, B.nome);
    cin >> B.matricula;
    cin.ignore();
    getline(cin, B.disciplina);
    cin >> B.nota;
    cin.ignore();

    if(A.nota > B.nota) {
        cout << fixed << setprecision(1) << A.nome << " , "<< A.nota << endl;
    } else if(B.nota > A.nota) {
        cout << fixed << setprecision(1) <<  B.nome << " , "<< B.nota << endl;
    } else {
        cout << fixed << setprecision(1) << A.nome << " e " << B.nome << " , " << A.nota << endl;
    }

}