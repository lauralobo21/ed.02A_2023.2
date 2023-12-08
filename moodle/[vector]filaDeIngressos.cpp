#include <iostream>
#include <vector>
using namespace std;

// lê a fila e a saída, se forem iguais na posição[i] são apagadas com erase.
void novaFila(vector<int>& fila, vector<int>& saida) {
    for(unsigned i = 0; i<saida.size(); i++) {
        for(unsigned j = 0; j<fila.size(); j++) {
            if(saida[i] == fila[j]) {
                fila.erase(fila.begin()+j);
            }
        }
    }
}


int main() {
    int n;
    cin >> n;
    vector<int> fila;
    for(int i = 0; i<n; i++) {
        int aux;
        cin >> aux;
        fila.push_back(aux);
    }

    int m;
    cin >> m;
    vector<int> saida;
    for(int i = 0; i<m; i++) {
        int aux;
        cin >> aux;
        saida.push_back(aux);
    }
    novaFila(fila, saida);
    for(unsigned i = 0; i<fila.size(); i++) {
        cout << fila[i] << " ";
    }
    cout << endl;

}