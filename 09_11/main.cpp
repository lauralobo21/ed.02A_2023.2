#include <iostream>
using namespace std;

/*
    Recebe um valor v[ini...fim] com fim - ini + 1 elementos
    e retorna o valor do elemento maximo nesse intervalo 
    do vetor
*/
int maximo(int vetor[], int inicio, int fim) {
    if (inicio == fim) return vetor[inicio];

    int meio = (inicio + fim) / 2;

    int maxEsquerda = maximo(vetor, inicio, meio);
    int maxDireita = maximo(vetor, meio + 1, fim);

    if (maxEsquerda > maxDireita)
        return maxEsquerda;
    else
        return maxDireita;
}
