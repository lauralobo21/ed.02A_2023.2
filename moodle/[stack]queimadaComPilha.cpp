#include <iostream>
#include <stack>
using namespace std;

// guarda a posição de uma célula.
struct Posicao {
    int linha;
    int coluna;
};

int main() {
    int n_linha, n_coluna, l, c;

    cin >> n_linha >> n_coluna >> l >> c;

    // preenche a matriz
    char** matriz = new char*[n_linha];
    for (int i = 0; i < n_linha; i++) {
        matriz[i] = new char[n_coluna];
        for (int j = 0; j < n_coluna; j++) {
            cin >> matriz[i][j];
        }
    }

    // cria uma pilha e empilha a posição inicial
    stack<Posicao> pilha;
    Posicao inicio = {l, c};
    pilha.push(inicio);

    while(!pilha.empty()) {
        // desempilha o topo
        Posicao topo = pilha.top();
        pilha.pop();

        int nl = topo.linha;
        int nc = topo.coluna;

        // se a posição atual for '.' nao faz nada
        if(matriz[nl][nc] == '.') {
            continue;
        }

        // empilha as posições que serão queimadas
        if (nl > 0 && matriz[nl - 1][nc] == '#') {
            Posicao p = {nl - 1, nc};
            pilha.push(p);
        }

        if (nl < n_linha - 1 && matriz[nl + 1][nc] == '#') {
            Posicao p = {nl + 1, nc};
            pilha.push(p);
        }

        if(nc > 0 && matriz[nl][nc - 1] == '#') {
            Posicao p = {nl, nc - 1};
            pilha.push(p);
        }

        if(nc < n_coluna - 1 && matriz[nl][nc + 1] == '#') {
            Posicao p = {nl, nc + 1};
            pilha.push(p);
        }

 // queima a posição atual
        matriz[nl][nc] = 'o';
    }

    for(int i = 0; i < n_linha; i++) {
        for(int j = 0; j < n_coluna; j++) {
            cout << matriz[i][j];
        }
        cout << endl;
    }

    delete[] matriz;
}
