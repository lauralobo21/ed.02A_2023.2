#include <iostream>
using namespace std;


int main() {
    int n{0};
    cout << "Digite a ordem da matriz quadrada: ";
    cin >> n;
    //Cria matriz dinamicamente
    int **mat = new int*[n];
    for(int i = 0; i<n; i++) {
        mat[0] = new int[i];
    }
    //Lê os inteiros do teclado
    cout << "Digite os inteiros: ";
    for(int i{0}; i<n; i++) {
        for(int j{0}; j<n; j++) {
            cin >> mat[i][j];
        }
    }
    //Imprime matriz na tela
    cout << "\nMatriz: ";
    for(int i{0}; i<n; i++) {
        for(int j{0}; j<n; j++) {
            cout <<  mat[i][j] << " ";
        }
        cout << endl;
    }
    //Deleta matriz
    for(int i{0}; i<n; i++) {
        delete[] mat[i];
    }
    delete[] mat;
}