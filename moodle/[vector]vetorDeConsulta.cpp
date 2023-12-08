#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tam;
    cin >> tam;
    vector<string>entrada;
    for(int i = 0; i<tam; i++) {
        string palavra;
        cin >> palavra;
        entrada.push_back(palavra);
    }
    int tam2;
    cin >> tam2;
    vector<string>consultas;
    for(int i = 0; i<tam2; i++) {
        string palavra2;
        cin >> palavra2;
        consultas.push_back(palavra2);
    }
    vector<int>resultado;
    for(int i = 0; i<consultas.size(); i++) {
        int cont = 0;
        for(int j = 0; j<entrada.size(); j++) {
            if(entrada[j] == consultas[i]) {
                cont++;
            }
        }
        resultado.push_back(cont);
    }
    for(int i = 0; i<resultado.size(); i++) {
        cout << resultado[i];
        if (i<resultado.size() -1) {
            cout << " ";
        }
    }

cout << endl;
}
