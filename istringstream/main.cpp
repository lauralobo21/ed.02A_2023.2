#include <iostream> // cin e cout
#include <sstream> // std::istringstream
#include <string> // std::string
using namespace std;

int main() {
    string input;
    cout << "Digite o seu nome, idade, e salário separados por espaço";
    getline(cin, input); //atilio, 21, 3.74

    istringstream iss;
    iss.str(input);

    string nome;
    short idade;
    double salario;

    iss >> nome;
    iss >> idade;
    iss >> salario;

    cout << "Nome: " << nome << '\n'
            << "Idade: " << idade << '\n'
            << "Salário: " << salario << '\n';






}

