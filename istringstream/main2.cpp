#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    string line;
    getline(cin, line);

    istringstream iss(line);
    double numero;
    double soma{};

    while(iss >> numero) {
        soma = soma + numero;
    }
    cout << "soma = " << soma << endl;
}